using UnityEngine;

namespace FFA.ChessMaze
{
    public static class MapHelper
    {
        public static void RandomStartAndEnd(MapGrid grid,
            ref Vector3 startPosition,
            ref Vector3 endPosition,
            bool randomPlacement,
            Direction startEdge = Direction.Left,
            Direction endEdge = Direction.Right)
        {
            if (randomPlacement)
            {
                startPosition = RandomPositionOnEdge(grid, startPosition);
                endPosition = RandomPositionOnEdge(grid, startPosition);
            }
            else
            {
                startPosition = RandomPositionOnEdge(grid, startPosition, startEdge);
                endPosition = RandomPositionOnEdge(grid, startPosition, endEdge);
            }
            grid.SetCell(startPosition.x, startPosition.z, CellObjectType.Start);
            grid.SetCell(endPosition.x, endPosition.z, CellObjectType.End);
        }

        private static Vector3 RandomPositionOnEdge(MapGrid grid, Vector3 startPosition, Direction direction = Direction.None)
        {
            if (direction == Direction.None)
            {
                direction = (Direction)Random.Range(1, 5);
            }
            Vector3 position = Vector3.zero;
            switch(direction)
            {
                case Direction.Left:
                    do
                    {
                        position = new Vector3(0, 0, Random.Range(0, grid.length));
                    } while(Vector3.Distance(position, startPosition) <= 1);
                    break;
                case Direction.Right:
                    do
                    {
                        position = new Vector3(grid.width-1, 0, Random.Range(0, grid.length));
                    } while(Vector3.Distance(position, startPosition) <= 1);
                    break;
                case Direction.Up:
                    do
                    {
                        position = new Vector3(Random.Range(0, grid.width), 0, grid.length-1);
                    } while(Vector3.Distance(position, startPosition) <= 1);
                    break;
                case Direction.Down:
                    do
                    {
                        position = new Vector3(Random.Range(0, grid.width), 0, 0);
                    } while(Vector3.Distance(position, startPosition) <= 1);
                    break;
            }
            return position;
        }
    }
}
