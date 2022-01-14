using UnityEngine;

namespace FFA.ChessMaze
{
    public class Cell
    {
        // Attributes
        private int _x, _z;
        private bool _isTaken;
        private CellObjectType _objectType;

        // Getters
        public int x { get => _x; }
        public int z { get => _z; }
        public bool isTaken { get => _isTaken; set => _isTaken = value; }
        public CellObjectType objectType { get => _objectType; set => _objectType = value; }

        // Constructor
        public Cell(int x, int z)
        {
            this._x = x;
            this._z = z;
            this._objectType = CellObjectType.Empty;
            this._isTaken = false;
        }
    }

    public enum CellObjectType
    {
        Empty,
        Road,
        Obstacle,
        Start,
        End
    }
}
