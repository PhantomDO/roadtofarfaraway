using UnityEngine;
using System.Collections.Generic;

namespace FFA.ChessMaze
{
    public class Knight
    {
        public static List<Vector3> possibleMoves = new List<Vector3>
        {
            new Vector3(-1, 0, 2),
            new Vector3( 1, 0, 2),
            new Vector3(-1, 0,-2),
            new Vector3( 1, 0,-2),
            new Vector3(-2, 0,-1),
            new Vector3( 2, 0,-1),
            new Vector3(-2, 0, 1),
            new Vector3( 2, 0, 1)
        };

        private Vector3 _position;

        public Vector3 position { get => _position; set => _position = value; }

        public Knight(Vector3 position)
        {
            this._position = position;
        }
    }
}
