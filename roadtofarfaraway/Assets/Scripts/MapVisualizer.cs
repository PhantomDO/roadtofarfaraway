using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

namespace FFA.MapGeneration
{
    public class MapVisualizer : MonoBehaviour
    {
        private Transform parent;
        public Color startColor, endColor, knightColor, obstacleColor;
        public bool animate = true;

        public GameObject roadStraightTile, roadCornerTile, towerTile, emptyTile, startTile, endTile;
        public GameObject[] environmentTiles;

        private Dictionary<Vector3, GameObject> obstaclesDictonary = new Dictionary<Vector3, GameObject>();

        private void Awake()
        {
            parent = this.transform;
        }

        public void VisualizeMap(MapGrid grid, MapData data, bool visualizeUsingPrefabs)
        {
            if (visualizeUsingPrefabs)
            {
                VisualizeUsingPrefabs(grid, data);
            }
            else
            {
                VisualizeUsingPrimitives(grid, data);
            }
            parent.transform.position = new Vector3(-grid.Length/2, 0, -grid.Width/2);
        }

        private void VisualizeUsingPrefabs(MapGrid grid, MapData data)
        {
            // Setting towers
            foreach (Vector3 towerPosition in data.towers)
            {
                grid.SetCell(towerPosition.x, towerPosition.z, CellObjectType.Tower, true);
            }
            // Setting path roads
            for (int i = 0; i < data.path.Count; i++)
            {
                Vector3 position = data.path[i];
                if (position != data.endPosition && grid.GetCell(position.x, position.z).ObjectType == CellObjectType.Empty)
                {
                    grid.SetCell(position.x, position.z, CellObjectType.Road);
                }
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
                    Quaternion rotation = Quaternion.identity;
                    switch (cell.ObjectType)
                    {
                        case CellObjectType.Empty:
                            CreateIndicator(position, emptyTile, rotation);
                            break;
                        case CellObjectType.Road:
                            if (data.path.Count > 0)
							{
								previousDirection = GetPreviousDirection(position, data);
								nextDirection = GetDirectionOfNextCell(position, data);
							}
							if(previousDirection == Direction.Up && nextDirection == Direction.Right || previousDirection == Direction.Right && nextDirection == Direction.Up)
							{
								CreateIndicator(position, roadCornerTile, Quaternion.Euler(0,90,0));
							}
							else if (previousDirection == Direction.Right && nextDirection == Direction.Down || previousDirection == Direction.Down && nextDirection == Direction.Right)
							{
								CreateIndicator(position, roadCornerTile, Quaternion.Euler(0, 180, 0));
							}
							else if (previousDirection == Direction.Down && nextDirection == Direction.Left || previousDirection == Direction.Left && nextDirection == Direction.Down)
							{
								CreateIndicator(position, roadCornerTile, Quaternion.Euler(0, -90, 0));
							}
							else if (previousDirection == Direction.Left && nextDirection == Direction.Up || previousDirection == Direction.Up && nextDirection == Direction.Left)
							{
								CreateIndicator(position, roadCornerTile);
							}
							else if (previousDirection == Direction.Right && nextDirection == Direction.Left || previousDirection == Direction.Left && nextDirection == Direction.Right)
							{
								CreateIndicator(position, roadStraightTile, Quaternion.Euler(0, 90, 0));
							}
							else
							{
								CreateIndicator(position, roadStraightTile);
							}
                            break;
                        case CellObjectType.Obstacle:
                            int randomIndex = Random.Range(0, environmentTiles.Length);
                            CreateIndicator(position, environmentTiles[randomIndex], rotation);
                            break;
                        case CellObjectType.Tower:
                            CreateIndicator(position, towerTile, rotation);
                            break;
                        case CellObjectType.Start:
                            if (data.path.Count > 0)
                            {
                                nextDirection = GetDirectionFromVectors(position, data.path[0]);
                                if (nextDirection == Direction.Right) { rotation = Quaternion.Euler(0, 90, 0); }
                                else if (nextDirection == Direction.Left) { rotation = Quaternion.Euler(0, -90, 0); }
                                else if (nextDirection == Direction.Down) { rotation = Quaternion.Euler(0, 180, 0); }
                            }
                            CreateIndicator(position, startTile, rotation);
                            break;
                        case CellObjectType.End:
                            CreateIndicator(position, endTile, rotation);
                            break;
                        default:
                            break;
                    }
                }
            }
        }

        private Direction GetDirectionOfNextCell(Vector3 position, MapData data)
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
            Vector3 previousPosition = Vector3.zero;
            if (index > 0) { previousPosition = data.path[index - 1]; }
            else { previousPosition = data.startPosition; }
            return GetDirectionFromVectors(position, previousPosition);
        }

        private void VisualizeUsingPrimitives(MapGrid grid, MapData data)
        {
            PlaceStartAndEndPositions(data);
            for (int i = 0; i < data.obstacleArray.Length; i++)
            {
                if (data.obstacleArray[i])
                {
                    Vector3 position = grid.CalculateCoordinatesFromIndex(i);
                    if (position == data.startPosition || position == data.endPosition) { continue; }
                    grid.SetCell(position.x, position.z, CellObjectType.Obstacle);
                    if (PlaceKnightObstacle(data, position)) { continue; }
                    if (obstaclesDictonary.ContainsKey(position) == false)
                    {
                        CreateIndicator(position, obstacleColor, PrimitiveType.Cube);
                    }
                }
            }
        }

        private bool PlaceKnightObstacle(MapData data, Vector3 position)
        {
            foreach (KnightPiece knight in data.knightPieces)
            {
                if (knight.Position == position)
                {
                    CreateIndicator(position, knightColor, PrimitiveType.Cube);
                    return true;
                }
            }
            return false;
        }

        private void PlaceStartAndEndPositions(MapData data)
        {
            CreateIndicator(data.startPosition, startColor, PrimitiveType.Sphere);
            CreateIndicator(data.endPosition, endColor, PrimitiveType.Sphere);
        }

        private void CreateIndicator(Vector3 position, Color color, PrimitiveType primitiveType)
        {
            GameObject element = GameObject.CreatePrimitive(primitiveType);
            obstaclesDictonary.Add(position, element);
            element.transform.position = position + new Vector3(0.5f, 0.5f, 0.5f);
            element.transform.parent = parent;
            Renderer renderer = element.GetComponent<Renderer>();
            renderer.material.SetColor("_Color", color);
            if (animate)
            {
                element.AddComponent<DropTween>();
                DropTween.IncreaseDropTime();
            }
        }

        private void CreateIndicator(Vector3 position, GameObject prefab, Quaternion rotation = new Quaternion())
        {
            Vector3 worldPosition = position + new Vector3(0.5f, 0f, 0.5f);
            GameObject element = Instantiate(prefab, worldPosition, rotation);
            element.transform.parent = parent;
            obstaclesDictonary.Add(position, element);
            if (animate)
            {
                element.AddComponent<DropTween>();
                DropTween.IncreaseDropTime();
            }
        }

        public void ClearMap()
        {
            foreach (GameObject obstacle in obstaclesDictonary.Values)
            {
                Destroy(obstacle);
            }
            obstaclesDictonary.Clear();
            if (animate) { DropTween.ResetTime(); }
            parent.transform.position = Vector3.zero;
        }
    }
}