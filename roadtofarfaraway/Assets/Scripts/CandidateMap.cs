using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
// ReSharper disable CompareOfFloatsByEqualityOperator

public class CandidateMap
{
    private readonly MapGrid _grid;
    private readonly int _numberOfPieces;
    private readonly int _numberOfTowers;
    private bool[] _obstaclesArray;
    private Vector3 _startPosition, _endPosition;
    private readonly List<KnightPiece> _knightPieces;
    private List<Vector3> _path;
    public List<Vector3> Towers { get; }

    private List<Vector3> _cornersPosition;
    private int _repetitiveCornersCount;

    public MapGrid Grid => _grid;
    public bool[] ObstaclesArray => _obstaclesArray;

    public CandidateMap(MapGrid grid, int numberOfPieces, int numberOfTowers)
    {
        this._grid = grid;
        this._numberOfPieces = numberOfPieces;
        this._numberOfTowers = numberOfTowers;
        _obstaclesArray = null;
        _knightPieces = new List<KnightPiece>();
        Towers = new List<Vector3>();
        _path = new List<Vector3>();
    }

    private CandidateMap(CandidateMap candidateMap)
    {
        this._grid = candidateMap._grid;
        this._startPosition = candidateMap._startPosition;
        this._endPosition = candidateMap._endPosition;
        this._obstaclesArray = (bool[])candidateMap._obstaclesArray.Clone();
        this._cornersPosition = new List<Vector3>(candidateMap._cornersPosition);
        this._repetitiveCornersCount = candidateMap._repetitiveCornersCount;
        this._path = new List<Vector3>(candidateMap._path);
        this._numberOfTowers = candidateMap._numberOfTowers;
        this.Towers = new List<Vector3>(candidateMap.Towers);
    }

    public void CreateMap(Vector3 startPosition, Vector3 endPosition, bool autoRepair = false)
    {
        this._startPosition = startPosition;
        this._endPosition = endPosition;
        _obstaclesArray = new bool[_grid.Width * _grid.Length];
        RandomlyPlaceKnightPieces(_numberOfPieces);
        PlaceObstacles();
        FindPath();
        if (autoRepair) { Repair(); }
        GenerateTowers();
    }

    public void GenerateTowers()
    {
        Towers.Clear();
        int pathWithStartLength = _path.Count + 1;
        for (int i = 0; i < _numberOfTowers; i++)
        {
            int index = pathWithStartLength / (_numberOfTowers + 1) * (i + 1);
            if (_path[index] != _endPosition)
            {
                Towers.Add(_path[index]);
            }
        }
    }

    public void FindPath()
    {
        this._path = Pathfinding.Astar.GetPath(_startPosition, _endPosition, _obstaclesArray, _grid);
        _cornersPosition = GetListOfCorners(this._path);
        _repetitiveCornersCount = CalculateRepetitiveCornersCount(this._cornersPosition);
    }

    private List<Vector3> GetListOfCorners(List<Vector3> path)
    {
        List<Vector3> pathWithStart = new List<Vector3>(path);
        pathWithStart.Insert(0, _startPosition);
        List<Vector3> cornersPosition = new List<Vector3>();
        if (pathWithStart.Count <= 0) { return cornersPosition; }
        for (int i = 0; i < pathWithStart.Count - 2; i++)
        {
            if (pathWithStart[i].x != pathWithStart[i+1].x)
            {
                if (pathWithStart[i+1].z != pathWithStart[i+2].z) { cornersPosition.Add(pathWithStart[i+1]); }
            }
            else if (pathWithStart[i].z != pathWithStart[i+1].z)
            {
                if (pathWithStart[i+1].x != pathWithStart[i+2].x) { cornersPosition.Add(pathWithStart[i+1]); }
            }
        }
        return cornersPosition;
    }

    private int CalculateRepetitiveCornersCount(List<Vector3> cornersPosition)
    {
        int repetitiveCornersCount = 0;
        for (int i = 0; i < cornersPosition.Count - 1; i++)
        {
            if (Vector3.Distance(cornersPosition[i], cornersPosition[i+1]) >= 1)
            {
                repetitiveCornersCount++;
            }
        }
        return repetitiveCornersCount;
    }

    private bool PositionCanBeObstacle(Vector3 position)
    {
        if (position == _startPosition || position == _endPosition) { return false; }
        int index = _grid.CalculateIndexFromCoordinates(position.x, position.z);
        return _obstaclesArray[index] == false;
    }

    private void RandomlyPlaceKnightPieces(int numberOfPieces)
    {
        int count = numberOfPieces;
        int tryLimit = 100;
        while (count > 0 && tryLimit > 0)
        {
            int randomIndex = Random.Range(0, _obstaclesArray.Length);
            if (_obstaclesArray[randomIndex] == false)
            {
                Vector3 coordinates = _grid.CalculateCoordinatesFromIndex(randomIndex);
                if (coordinates == _startPosition || coordinates == _endPosition) { continue; }
                _obstaclesArray[randomIndex] = true;
                _knightPieces.Add(new KnightPiece(coordinates));
                count--;
            }
            tryLimit--;
        }
    }

    private void PlaceObstacles()
    {
        foreach (KnightPiece knight in _knightPieces)
        {
            PlaceKnightObstacles(knight);
        }
    }

    private void PlaceKnightObstacles(KnightPiece knight)
    {
        foreach (Vector3 position in KnightPiece.PossibleMoves)
        {
            Vector3 newPosition = knight.Position + position;
            if (_grid.IsCellValid(newPosition.x, newPosition.z) && PositionCanBeObstacle(newPosition))
            {
                _obstaclesArray[_grid.CalculateIndexFromCoordinates(newPosition.x, newPosition.z)] = true;
            }
        }
    }

    public MapData ReturnMapData()
    {
        return new MapData
        {
            obstacleArray = this._obstaclesArray,
            knightPieces = this._knightPieces,
            towers = this.Towers,
            startPosition = this._startPosition,
            endPosition = this._endPosition,
            path = this._path,
            cornersPosition = this._cornersPosition,
            repetitiveCornersCount = this._repetitiveCornersCount,
            numberOfTowers = this._numberOfTowers
        };
    }

    public List<Vector3> Repair()
    {
        int numberOfObstacles = _obstaclesArray.Count(obstacle => obstacle);
        List<Vector3> obstaclesToRemove = new List<Vector3>();
        while (_path.Count <= 0)
        {
            int index = Random.Range(0, numberOfObstacles);
            for (int i = 0; i < _obstaclesArray.Length; i++)
            {
                if (_obstaclesArray[i])
                {
                    if (index == 0)
                    {
                        _obstaclesArray[i] = false;
                        obstaclesToRemove.Add(_grid.CalculateCoordinatesFromIndex(i));
                        break;
                    }
                    index--;
                }
            }
            FindPath();
        }
        foreach (Vector3 obstaclePosition in obstaclesToRemove)
        {
            if (!_path.Contains(obstaclePosition)) { _obstaclesArray[_grid.CalculateIndexFromCoordinates(obstaclePosition.x, obstaclePosition.z)] = true; }
        }
        return obstaclesToRemove;
    }

    public void AddMutation(double mutationRate)
    {
        int numItems = (int)(_obstaclesArray.Length * mutationRate);
        while (numItems > 0)
        {
            int randomIndex = Random.Range(0, _obstaclesArray.Length);
            _obstaclesArray[randomIndex] = !_obstaclesArray[randomIndex];
            numItems--;
        }
    }

    public CandidateMap DeepClone()
    {
        return new CandidateMap(this);
    }

    public void PlaceObstacle(int i, bool isObstacle)
    {
        _obstaclesArray[i] = isObstacle;
    }

    public bool IsObstacleAt(int i)
    {
        return _obstaclesArray[i];
    }

    public void DebugCellObjectType()
    {
        for (int col = 0; col < _grid.Width; col++)
        {
            StringBuilder b = new StringBuilder();
            for (int row = 0; row < _grid.Length; row++)
            {
                CellObjectType objectType = _grid.GetCell(col, row).ObjectType;
                b.Append(objectType + " ");
            }
            Debug.Log(b.ToString());
        }
    }
}