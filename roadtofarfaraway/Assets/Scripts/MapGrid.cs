using System.Text;
using UnityEngine;

namespace FFA.MapGeneration
{
    public class MapGrid
    {
        private int length, width;
        private Cell[,] cellGrid;

        public int Length { get => length; }
        public int Width { get => width; }

        public MapGrid(int length, int width)
        {
            this.length = length;
            this.width = width;
            CreateGrid();
        }

        private void CreateGrid()
        {
            cellGrid = new Cell[length, width];
            for (int row = 0; row < length; row++)
            {
                for (int col = 0; col < width; col++)
                {
                    cellGrid[row, col] = new Cell(col, row);
                }
            }
        }

        public void SetCell(int x, int z, CellObjectType objectType, bool isTaken = false)
        {
            cellGrid[z, x].ObjectType = objectType;
            cellGrid[z, x].IsTaken = isTaken;
        }
        public void SetCell(float x, float z, CellObjectType objectType, bool isTaken = false)
        {
            SetCell((int)x, (int)z, objectType, isTaken);
        }

        public bool IsCellTaken(int x, int z) { return cellGrid[z, x].IsTaken; }
        public bool IsCellTaken(float x, float z) { return cellGrid[(int)z, (int)x].IsTaken; }

        public bool IsCellValid(int x, int z) { return (x >= 0 && z >= 0 && x < width && z < length); }
        public bool IsCellValid(float x, float z) { return (x >= 0 && z >= 0 && x < width && z < length); }

        public Cell GetCell(int x, int z)
        {
            if (!IsCellValid(x, z)) { return null; }
            return cellGrid[z, x];
        }
        public Cell GetCell(float x, float z)
        {
            return GetCell((int)x, (int)z);
        }

        public int CalculateIndexFromCoordinates(int x, int z) { return x + z * width; }
        public int CalculateIndexFromCoordinates(float x, float z) { return (int)x + (int)z * width; }
        public Vector3 CalculateCoordinatesFromIndex(int index) { return new Vector3(index % width, 0, index / width); }

        public void CheckCoordinates()
        {
            for (int i = 0; i < cellGrid.GetLength(0); i++)
            {
                StringBuilder b = new StringBuilder();
                for (int j = 0; j < cellGrid.GetLength(1); j++)
                {
                    b.Append(j + "," + i + " ");
                }
                Debug.Log(b.ToString());
            }
        }
    }
}