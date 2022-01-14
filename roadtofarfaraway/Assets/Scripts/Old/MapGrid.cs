using UnityEngine;

namespace FFA.ChessMaze
{
    public class MapGrid
    {
        private int _width, _length;
        private Cell[,] cellGrid;

        public int width { get => _width; }
        public int length { get => _length; }

        public MapGrid(int width, int length)
        {
            this._width = width;
            this._length = length;
            CreateGrid();
        }

        private void CreateGrid()
        {
            cellGrid = new Cell[length, width];
            for (int row = 0; row < length; row++)
            {
                for (int col = 0;  col < width; col++)
                {
                    cellGrid[col, row] = new Cell(row, col);
                }
            }
        }

        public void SetCell(int x, int z, CellObjectType objectType, bool isTaken = true)
        {
            cellGrid[z, x].objectType = objectType;
            cellGrid[z, x].isTaken = isTaken;
        }
        public void SetCell(float x, float z, CellObjectType objectType, bool isTaken = true) { SetCell((int)x, (int)z, objectType, isTaken); }

        public bool IsCellTaken(int x, int z) { return cellGrid[z, x].isTaken; }
        public bool IsCellTaken(float x, float z) { return IsCellTaken((int)x, (int)z); }

        public bool IsCellValid(int x, int z) { return (x >= 0 && x < width && z >= 0 && z < length); }
        public bool IsCellValid(float x, float z) { return IsCellValid((int)x, (int)z); }

        public Cell GetCell(int x, int z)
        {
            if (!IsCellValid(x, z))
            {
                Debug.LogFormat("Cell [x:{0}, z:{1}] is not valid.");
                return null;
            }
            return cellGrid[z, x];
        }
        public Cell GetCell(float x, float z) { return GetCell((int)x, (int)z); }

        public int CoordinatesToIndex(int x, int z) { return z * width + x; }
        public int CoordinatesToIndex(float x, float z) { return (int)z * width + (int)x; }

        public Vector3 IndexToCoordinates(int index) { return new Vector3(index % width, 0, index / width); }

        // Useless
        public void DebugCoordinates()
        {
            for (int i = 0; i < cellGrid.GetLength(0); i++)
            {
                string log = "";
                for (int j = 0; j < cellGrid.GetLength(1); j++)
                {
                    log += string.Format("{0},{1} ", j, i);
                }
                Debug.Log(log);
            }
        }
    }
}
