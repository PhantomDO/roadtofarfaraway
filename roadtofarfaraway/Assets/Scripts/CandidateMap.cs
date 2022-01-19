using UnityEngine;
using System.Collections.Generic;
using Random = UnityEngine.Random;
using System.Linq;
using System.Text;

namespace FFA.MapGeneration
{
    public class CandidateMap
    {
        private MapGrid grid;
        private int numberOfPieces = 0;
        private int numberOfTowers = 0;
        private bool[] obstaclesArray;
        private Vector3 startPosition, endPosition;
        private List<KnightPiece> knightPieces;
        private List<Vector3> towers;
        private List<Vector3> path;

        private List<Vector3> cornersPosition;
        private int repetitiveCornersCount;

        public MapGrid Grid { get => grid; }
        public bool[] ObstaclesArray { get => obstaclesArray; }

        public CandidateMap(MapGrid grid, int numberOfPieces, int numberOfTowers)
        {
            this.grid = grid;
            this.numberOfPieces = numberOfPieces;
            this.numberOfTowers = numberOfTowers;
            obstaclesArray = null;
            knightPieces = new List<KnightPiece>();
            towers = new List<Vector3>();
            path = new List<Vector3>();
        }

        public CandidateMap(CandidateMap candidateMap)
        {
            this.grid = candidateMap.grid;
            this.startPosition = candidateMap.startPosition;
            this.endPosition = candidateMap.endPosition;
            this.obstaclesArray = (bool[])candidateMap.obstaclesArray.Clone();
            this.cornersPosition = new List<Vector3>(candidateMap.cornersPosition);
            this.repetitiveCornersCount = candidateMap.repetitiveCornersCount;
            this.path = new List<Vector3>(candidateMap.path);
            this.numberOfTowers = candidateMap.numberOfTowers;
            this.towers = new List<Vector3>(candidateMap.towers);
        }

        public void CreateMap(Vector3 startPosition, Vector3 endPosition, bool autoRepair = false)
        {
            this.startPosition = startPosition;
            this.endPosition = endPosition;
            obstaclesArray = new bool[grid.Width * grid.Length];
            RandomlyPlaceKnightPieces(numberOfPieces);
            PlaceObstacles();
            FindPath();
            if (autoRepair) { Repair(); }
            GenerateTowers();
        }

        public void GenerateTowers()
        {
            towers.Clear();
            int pathWithStartLength = path.Count + 1;
            for (int i = 0; i < numberOfTowers; i++)
            {
                int index = pathWithStartLength / (numberOfTowers + 1) * (i + 1);
                if (path[index] != endPosition)
                {
                    towers.Add(path[index]);
                }
            }
        }

        public void FindPath()
        {
            this.path = global::Pathfinding.Astar.GetPath(startPosition, endPosition, obstaclesArray, grid);
            cornersPosition = GetListOfCorners(this.path);
            repetitiveCornersCount = CalculateRepetitiveCornersCount(this.cornersPosition);
        }

        private List<Vector3> GetListOfCorners(List<Vector3> path)
        {
            List<Vector3> pathWithStart = new List<Vector3>(path);
            pathWithStart.Insert(0, startPosition);
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

        public bool PositionCanBeObstacle(Vector3 position)
        {
            if (position == startPosition || position == endPosition) { return false; }
            int index = grid.CalculateIndexFromCoordinates(position.x, position.z);
            return obstaclesArray[index] == false;
        }

        private void RandomlyPlaceKnightPieces(int numberOfPieces)
        {
            int count = numberOfPieces;
            int tryLimit = 100;
            while (count > 0 && tryLimit > 0)
            {
                int randomIndex = Random.Range(0, obstaclesArray.Length);
                if (obstaclesArray[randomIndex] == false)
                {
                    Vector3 coordinates = grid.CalculateCoordinatesFromIndex(randomIndex);
                    if (coordinates == startPosition || coordinates == endPosition) { continue; }
                    obstaclesArray[randomIndex] = true;
                    knightPieces.Add(new KnightPiece(coordinates));
                    count--;
                }
                tryLimit--;
            }
        }

        private void PlaceObstacles()
        {
            foreach (KnightPiece knight in knightPieces)
            {
                PlaceKnightObstacles(knight);
            }
        }

        private void PlaceKnightObstacles(KnightPiece knight)
        {
            foreach (Vector3 position in KnightPiece.PossibleMoves)
            {
                Vector3 newPosition = knight.Position + position;
                if (grid.IsCellValid(newPosition.x, newPosition.z) && PositionCanBeObstacle(newPosition))
                {
                    obstaclesArray[grid.CalculateIndexFromCoordinates(newPosition.x, newPosition.z)] = true;
                }
            }
        }

        public MapData ReturnMapData()
        {
            return new MapData
            {
                obstacleArray = this.obstaclesArray,
                knightPieces = this.knightPieces,
                towers = this.towers,
                startPosition = this.startPosition,
                endPosition = this.endPosition,
                path = this.path,
                cornersPosition = this.cornersPosition,
                repetitiveCornersCount = this.repetitiveCornersCount,
                numberOfTowers = this.numberOfTowers
            };
        }

        public List<Vector3> Repair()
        {
            int numberOfObstacles = obstaclesArray.Where(obstacle => obstacle).Count();
            List<Vector3> obstaclesToRemove = new List<Vector3>();
            if (path.Count <= 0)
            {
                do
                {
                    int index = Random.Range(0, numberOfObstacles);
                    for (int i = 0; i < obstaclesArray.Length; i++)
                    {
                        if (obstaclesArray[i])
                        {
                            if (index == 0)
                            {
                                obstaclesArray[i] = false;
                                obstaclesToRemove.Add(grid.CalculateCoordinatesFromIndex(i));
                                break;
                            }
                            index--;
                        }
                    }
                    FindPath();
                } while (path.Count <= 0);
            }
            foreach (Vector3 obstaclePosition in obstaclesToRemove)
            {
                if (!path.Contains(obstaclePosition)) { obstaclesArray[grid.CalculateIndexFromCoordinates(obstaclePosition.x, obstaclePosition.z)] = true; }
            }
            return obstaclesToRemove;
        }

        public void AddMutation(double mutationRate)
        {
            int numItems = (int)(obstaclesArray.Length * mutationRate);
            while (numItems > 0)
            {
                int randomIndex = Random.Range(0, obstaclesArray.Length);
                obstaclesArray[randomIndex] = !obstaclesArray[randomIndex];
                numItems--;
            }
        }

        public CandidateMap DeepClone()
        {
            return new CandidateMap(this);
        }

        public void PlaceObstacle(int i, bool isObstacle)
        {
            obstaclesArray[i] = isObstacle;
        }

        public bool IsObstacleAt(int i)
        {
            return obstaclesArray[i];
        }

        public void DebugCellObjectType()
        {
            for (int col = 0; col < grid.Width; col++)
            {
                StringBuilder b = new StringBuilder();
                for (int row = 0; row < grid.Length; row++)
                {
                    CellObjectType objectType = grid.GetCell(col, row).ObjectType;
                    b.Append(objectType + " ");
                }
                Debug.Log(b.ToString());
            }
        }
    }
}