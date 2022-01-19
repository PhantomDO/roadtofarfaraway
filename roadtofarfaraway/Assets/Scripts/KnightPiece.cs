using System.Collections.Generic;
using UnityEngine;

public class KnightPiece
{
    public static readonly List<Vector3> PossibleMoves = new List<Vector3>
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

    public Vector3 Position { get; set; }

    public KnightPiece(Vector3 position)
    {
        this.Position = position;
    }
}