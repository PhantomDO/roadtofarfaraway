using UnityEngine;
using System.Collections.Generic;
using Random = UnityEngine.Random;
using System.Linq;

namespace FFA.MapGeneration
{
    public class CandidateMap
    {
        private MapGrid grid;
        private int numberOfPieces = 0;
        private bool[] obstaclesArray;
        private Vector3 startPosition, endPosition;
        private List<KnightPiece> knightPieces;
        private List<Vector3> path;

        public MapGrid Grid { get => grid; }
        public bool[] ObstaclesArray { get => obstaclesArray; }

        public CandidateMap(MapGrid grid, int numberOfPieces)
        {
            this.grid = grid;
            this.numberOfPieces = numberOfPieces;
            obstaclesArray = null;
            knightPieces = new List<KnightPiece>();
            path = new List<Vector3>();
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
        }

        private void FindPath()
        {
            this.path = Astar.Astar.GetPath(startPosition, endPosition, obstaclesArray, grid);
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
            foreach (Vector3 position in KnightPiece.possibleMoves)
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
                startPosition = this.startPosition,
                endPosition = this.endPosition,
                path = this.path
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
    }
}