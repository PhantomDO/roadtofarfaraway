using System.Collections.Generic;
using UnityEngine;

namespace Pathfinding
{
    public static class Astar
    {
        public static List<Vector3> GetPath(Vector3 startPosition, Vector3 endPosition, bool[] obstaclesArray, MapGrid grid)
        {
            VertexPosition startVertex = new VertexPosition(startPosition);
            VertexPosition endVertex = new VertexPosition(endPosition);

            List<Vector3> path = new List<Vector3>();

            List<VertexPosition> openedList = new List<VertexPosition>();
            HashSet<VertexPosition> closedList = new HashSet<VertexPosition>();

            startVertex.estimatedCost = ManhattanDistance(startVertex, endVertex);
            openedList.Add(startVertex);

            while (openedList.Count > 0)
            {
                openedList.Sort();
                var currentVertex = openedList[0];

                if (currentVertex.Equals(endVertex))
                {
                    while (currentVertex != startVertex)
                    {
                        path.Add(currentVertex.Position);
                        currentVertex = currentVertex.previousVertex;
                    }
                    path.Reverse();
                    break;
                }

                VertexPosition[] neighbours = FindNeighbours(currentVertex, grid, obstaclesArray);
                foreach (VertexPosition neighbour in neighbours)
                {
                    if (neighbour == null || closedList.Contains(neighbour)) { continue; }
                    if (neighbour.IsTaken) { continue; }
                    float totalCost = currentVertex.totalCost + 1;
                    float estimatedCost = ManhattanDistance(neighbour, endVertex);
                    neighbour.totalCost = totalCost;
                    neighbour.estimatedCost = totalCost + estimatedCost;
                    neighbour.previousVertex = currentVertex;
                    if (!openedList.Contains(neighbour))
                    {
                        openedList.Add(neighbour);
                    }
                }
                closedList.Add(currentVertex);
                openedList.Remove(currentVertex);
            }
            return path;
        }

        private static VertexPosition[] FindNeighbours(VertexPosition currentVertex, MapGrid grid, bool[] obstaclesArray)
        {
            VertexPosition[] neighbours = new VertexPosition[4];
            int arrayIndex = 0;
            foreach (Vector2Int relativePosition in VertexPosition.PossibleNeighbours)
            {
                Vector3 position = new Vector3(currentVertex.X + relativePosition.x, 0, currentVertex.Z + relativePosition.y);
                if (grid.IsCellValid(position.x, position.z))
                {
                    int index = grid.CalculateIndexFromCoordinates(position.x, position.z);
                    neighbours[arrayIndex] = new VertexPosition(position, obstaclesArray[index]);
                    arrayIndex++;
                }
            }
            return neighbours;
        }

        private static float ManhattanDistance(VertexPosition first, VertexPosition second)
        {
            return Mathf.Abs(first.X - second.X) + Mathf.Abs(first.Z - second.Z);
        }
    }
}