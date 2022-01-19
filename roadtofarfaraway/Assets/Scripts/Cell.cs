public class Cell
{
    public int X { get; }
    public int Z { get; }
    public bool IsTaken { get; set; }

    public CellObjectType ObjectType { get; set; }

    public Cell(int x, int z)
    {
        this.X = x;
        this.Z = z;
        this.IsTaken = false;
        this.ObjectType = CellObjectType.Empty;
    }
}

public enum CellObjectType
{
    Empty,
    Road,
    Obstacle,
    Tower,
    Start,
    End
}