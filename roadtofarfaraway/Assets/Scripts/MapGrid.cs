using System.Text;
using FFA.MapGeneration;
using UnityEngine;

public class MapGrid
{
    private Cell[,] _cellGrid;

    public int Length { get; }
    public int Width { get; }

    public MapGrid(int length, int width)
    {
        this.Length = length;
        this.Width = width;
        CreateGrid();
    }

    private void CreateGrid()
    {
        _cellGrid = new Cell[Length, Width];
        for (int row = 0; row < Length; row++)
        {
            for (int col = 0; col < Width; col++)
            {
                _cellGrid[row, col] = new Cell(col, row);
            }
        }
    }

    private void SetCell(int x, int z, CellObjectType objectType, bool isTaken = false)
    {
        _cellGrid[z, x].ObjectType = objectType;
        _cellGrid[z, x].IsTaken = isTaken;
    }
    public void SetCell(float x, float z, CellObjectType objectType, bool isTaken = false)
    {
        SetCell((int)x, (int)z, objectType, isTaken);
    }

    public bool IsCellTaken(int x, int z) { return _cellGrid[z, x].IsTaken; }
    public bool IsCellTaken(float x, float z) { return _cellGrid[(int)z, (int)x].IsTaken; }

    private bool IsCellValid(int x, int z) { return (x >= 0 && z >= 0 && x < Width && z < Length); }
    public bool IsCellValid(float x, float z) { return (x >= 0 && z >= 0 && x < Width && z < Length); }

    public Cell GetCell(int x, int z)
    {
        if (!IsCellValid(x, z)) { return null; }
        return _cellGrid[z, x];
    }
    public Cell GetCell(float x, float z)
    {
        return GetCell((int)x, (int)z);
    }

    public int CalculateIndexFromCoordinates(int x, int z) { return x + z * Width; }
    public int CalculateIndexFromCoordinates(float x, float z) { return (int)x + (int)z * Width; }
    public Vector3 CalculateCoordinatesFromIndex(int index) { return new Vector3(index % Width, 0, index / Width); }

    public void CheckCoordinates()
    {
        for (int i = 0; i < _cellGrid.GetLength(0); i++)
        {
            StringBuilder b = new StringBuilder();
            for (int j = 0; j < _cellGrid.GetLength(1); j++)
            {
                b.Append(j + "," + i + " ");
            }
            Debug.Log(b.ToString());
        }
    }
}