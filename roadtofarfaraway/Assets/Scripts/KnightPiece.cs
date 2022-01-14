using UnityEngine;
using System.Collections.Generic;

namespace FFA.MapGeneration
{
    public class KnightPiece
    {
        private Vector3 position;
        public static List<Vector3> possibleMoves = new List<Vector3>
        {
            new Vector3(-1, 0, 2),
            new Vector3( 1, 0, 2),
            new Vector3(-1, 0,-2),
            new Vector3( 1, 0,-2),
            new Vector3(-2, 0, 1),
            new Vector3( 2, 0, 1),
            new Vector3(-2, 0,-1),
            new Vector3( 2, 0,-1)
        };

        public Vector3 Position { get => position; set => position = value; }

        public KnightPiece(Vector3 position)
        {
            this.position = position;
        }
    }
}