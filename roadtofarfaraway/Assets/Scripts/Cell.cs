using UnityEngine;

namespace FFA.MapGeneration
{
    public class Cell
    {
        private int x, z;
        private bool isTaken;
        private CellObjectType objectType;

        public int X { get => x; }
        public int Z { get => z; }
        public bool IsTaken { get => isTaken; set => isTaken = value; }
        public CellObjectType ObjectType { get => objectType; set => objectType = value; }

        public Cell(int x, int z)
        {
            this.x = x;
            this.z = z;
            this.isTaken = false;
            this.objectType = CellObjectType.Empty;
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
}