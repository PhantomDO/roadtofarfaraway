using System.Collections.Generic;
using UnityEngine;

namespace FFA.MapGeneration
{
    public struct MapData
    {
        public bool[] obstacleArray;
        public List<KnightPiece> knightPieces;
        public Vector3 startPosition;
        public Vector3 endPosition;
        public List<Vector3> path;
        public List<Vector3> cornersPosition;
        public int repetitiveCornersCount;
    }
}