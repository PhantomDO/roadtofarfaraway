using UnityEngine;

public static class MapHelper
{
    public static void SetStartAndEndPositions(MapGrid grid, ref Vector3 startPosition, out Vector3 endPosition, bool randomPlacement, Direction startPositionEdge = Direction.Left, Direction endPositionEdge = Direction.Right)
    {
        if (randomPlacement)
        {
            startPosition = RandomPositionOnEdge(grid, startPosition);
            endPosition = RandomPositionOnEdge(grid, startPosition);
        }
        else
        {
            startPosition = RandomPositionOnEdge(grid, startPosition, startPositionEdge);
            endPosition = RandomPositionOnEdge(grid, startPosition, endPositionEdge);
        }
        grid.SetCell(startPosition.x, startPosition.z, CellObjectType.Start, true);
        grid.SetCell(endPosition.x, endPosition.z, CellObjectType.End, true);
    }

    private static Vector3 RandomPositionOnEdge(MapGrid grid, Vector3 positionToAvoid, Direction direction = Direction.None)
    {
        if (direction == Direction.None) { direction = (Direction)Random.Range(1, 5); }
        Vector3 position = Vector3.zero;
        switch(direction)
        {
            case Direction.Right:
                do {
                    position = new Vector3(grid.Width - 1, 0, Random.Range(0, grid.Length));
                } while (Vector3.Distance(position, positionToAvoid) <= 1);
                break;
            case Direction.Left:
                do {
                    position = new Vector3(0, 0, Random.Range(0, grid.Length));
                } while (Vector3.Distance(position, positionToAvoid) <= 1);
                break;
            case Direction.Up:
                do {
                    position = new Vector3(Random.Range(0, grid.Width), 0, grid.Length - 1);
                } while (Vector3.Distance(position, positionToAvoid) <= 1);
                break;
            case Direction.Down:
                do {
                    position = new Vector3(Random.Range(0, grid.Width), 0, 0);
                } while (Vector3.Distance(position, positionToAvoid) <= 1);
                break;
        }
        return position;
    }
}