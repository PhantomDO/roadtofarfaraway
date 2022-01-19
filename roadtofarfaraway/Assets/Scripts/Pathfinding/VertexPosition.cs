using System;
using System.Collections.Generic;
using UnityEngine;

namespace Pathfinding
{
    public class VertexPosition : IEquatable<VertexPosition>, IComparable<VertexPosition>
    {
        public static readonly List<Vector2Int> PossibleNeighbours = new List<Vector2Int>
        {
            new Vector2Int( 0,-1),
            new Vector2Int( 0, 1),
            new Vector2Int(-1, 0),
            new Vector2Int( 1, 0)
        };

        public float totalCost, estimatedCost;
        public VertexPosition previousVertex = null;
        private readonly Vector3 _position;

        public int X => (int)_position.x;
        public int Z => (int)_position.z;
        public Vector3 Position => _position;
        public bool IsTaken { get; }

        public VertexPosition(Vector3 position, bool isTaken = false)
        {
            this._position = position;
            this.IsTaken = isTaken;
            this.totalCost = 1;
            this.estimatedCost = 0;
        }

        public int GetHashCode(VertexPosition vertex)
        {
            return vertex.GetHashCode();
        }

        public override int GetHashCode()
        {
            return _position.GetHashCode();
        }

        public int CompareTo(VertexPosition other)
        {
            if (this.estimatedCost < other.estimatedCost) { return -1; }
            if (this.estimatedCost > other.estimatedCost) { return 1; }
            return 0;
        }

        public bool Equals(VertexPosition other)
        {
            return other != null && _position == other.Position;
        }
    }
}