using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

public class MapVisualizer : MonoBehaviour
{
    private Transform _parent;
    public bool animate = true;

    public GameObject roadStraightTile, roadCornerTile, towerTile, emptyTile, startTile, endTile;
    public GameObject[] environmentTiles;

    private readonly Dictionary<Vector3, GameObject> _gameObjects = new Dictionary<Vector3, GameObject>();

    private void Awake()
    {
        _parent = this.transform;
    }

    public void VisualizeMap(MapGrid grid, MapData data)
    {
        VisualizeUsingPrefabs(grid, data);
        //_parent.transform.position = new Vector3(-grid.Length/2, 0, -grid.Width/2);
    }

    private void VisualizeUsingPrefabs(MapGrid grid, MapData data)
    {
        // Setting towers
        foreach (Vector3 towerPosition in data.towers)
        {
            grid.SetCell(towerPosition.x, towerPosition.z, CellObjectType.Tower, true);
        }
        // Setting path roads
        foreach (var position in data.path.Where(position => position != data.endPosition && grid.GetCell(position.x, position.z).ObjectType == CellObjectType.Empty))
        {
            grid.SetCell(position.x, position.z, CellObjectType.Road);
        }
        for (int col = 0; col < grid.Width; col++)
        {
            for (int row = 0; row < grid.Length; row++)
            {
                Cell cell = grid.GetCell(col, row);
                Vector3 position = new Vector3(cell.X, 0, cell.Z);
                int index = grid.CalculateIndexFromCoordinates(position.x, position.z);
                if (data.obstacleArray[index] && cell.IsTaken == false)
                {
                    cell.ObjectType = CellObjectType.Obstacle;
                }
                Direction previousDirection = Direction.None;
                Direction nextDirection = Direction.None;
                switch (cell.ObjectType)
                {
                    case CellObjectType.Empty:
                        CreateIndicator(position, emptyTile);
                        break;
                    case CellObjectType.Road:
                        if (data.path.Count > 0)
                        {
                            previousDirection = GetPreviousDirection(position, data);
                            nextDirection = GetNextDirection(position, data);
                        }

                        CalculatePrefabAndRotationFromDirections(previousDirection, nextDirection, out var roadPrefab, out var roadRotation);
                        CreateIndicator(position, roadPrefab, roadRotation);
                        break;
                    case CellObjectType.Obstacle:
                        int randomIndex = Random.Range(0, environmentTiles.Length);
                        CreateIndicator(position, environmentTiles[randomIndex]);
                        break;
                    case CellObjectType.Tower:
                        CreateIndicator(position, towerTile);
                        break;
                    case CellObjectType.Start:
                        Quaternion startRotation = Quaternion.identity;
                        if (data.path.Count > 0)
                        {
                            nextDirection = GetDirectionFromVectors(position, data.path[0]);
                            if (nextDirection == Direction.Right) { startRotation = Quaternion.Euler(0, 90, 0); }
                            else if (nextDirection == Direction.Left) { startRotation = Quaternion.Euler(0, -90, 0); }
                            else if (nextDirection == Direction.Down) { startRotation = Quaternion.Euler(0, 180, 0); }
                        }
                        CreateIndicator(position, startTile, startRotation);
                        break;
                    case CellObjectType.End:
                        CreateIndicator(position, endTile);
                        break;
                }
            }
        }
    }

    private void CalculatePrefabAndRotationFromDirections(Direction previousDirection, Direction nextDirection,
        out GameObject prefab, out Quaternion rotation)
    {
        rotation = new Quaternion();
        if(previousDirection == Direction.Up && nextDirection == Direction.Right || previousDirection == Direction.Right && nextDirection == Direction.Up)
        {
            prefab = roadCornerTile;
            rotation = Quaternion.Euler(0, 90, 0);
        }
        else if (previousDirection == Direction.Right && nextDirection == Direction.Down || previousDirection == Direction.Down && nextDirection == Direction.Right)
        {
            prefab = roadCornerTile;
            rotation = Quaternion.Euler(0, 180, 0);
        }
        else if (previousDirection == Direction.Down && nextDirection == Direction.Left || previousDirection == Direction.Left && nextDirection == Direction.Down)
        {
            prefab = roadCornerTile;
            rotation = Quaternion.Euler(0, -90, 0);
        }
        else if (previousDirection == Direction.Left && nextDirection == Direction.Up || previousDirection == Direction.Up && nextDirection == Direction.Left)
        {
            prefab = roadCornerTile;
        }
        else if (previousDirection == Direction.Right && nextDirection == Direction.Left || previousDirection == Direction.Left && nextDirection == Direction.Right)
        {
            prefab = roadStraightTile;
            rotation = Quaternion.Euler(0, 90, 0);
        }
        else
        {
            prefab = roadStraightTile;
        }
    }

    private Direction GetNextDirection(Vector3 position, MapData data)
    {
        int index = data.path.FindIndex(a => a== position);
        Vector3 nextPosition = data.path[index + 1];
        return GetDirectionFromVectors(position, nextPosition);
    }

    private Direction GetDirectionFromVectors(Vector3 origin, Vector3 destination)
    {
        if (origin.x < destination.x) { return Direction.Right; }
        if (origin.x > destination.x) { return Direction.Left; }
        if (origin.z < destination.z) { return Direction.Up; }
        return Direction.Down;
    }

    private Direction GetPreviousDirection(Vector3 position, MapData data)
    {
        int index = data.path.FindIndex(a => a == position);
        var previousPosition = index > 0 ? data.path[index - 1] : data.startPosition;
        return GetDirectionFromVectors(position, previousPosition);
    }

    private void CreateIndicator(Vector3 position, GameObject prefab, Quaternion rotation = new Quaternion())
    {
        Vector3 worldPosition = position + new Vector3(0.5f, 0f, 0.5f);
        GameObject element = Instantiate(prefab, worldPosition, rotation);
        element.transform.parent = _parent;
        _gameObjects.Add(position, element);
        
        if (!animate) return;
        element.AddComponent<DropTween>();
        DropTween.IncreaseDropTime();
    }

    public void DestroyGameObject(Vector3 position, MapData data)
    {
        if (_gameObjects.ContainsKey(position))
        {
            Destroy(_gameObjects[position]);
            _gameObjects.Remove(position);
            Direction previousDirection = GetPreviousDirection(position, data);
            Direction nextDirection = GetNextDirection(position, data);
            CalculatePrefabAndRotationFromDirections(previousDirection, nextDirection, out var roadPrefab, out var roadRotation);
            CreateIndicator(position, roadPrefab, roadRotation);
        }
    }

    public void ClearMap()
    {
        foreach (GameObject go in _gameObjects.Values)
        {
            Destroy(go);
        }
        _gameObjects.Clear();
        if (animate) { DropTween.ResetTime(); }
        _parent.transform.position = Vector3.zero;
    }
}