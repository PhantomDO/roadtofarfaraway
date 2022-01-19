using System.Collections.Generic;
using UnityEngine;

public struct MapData
{
    public bool[] obstacleArray;
    public List<KnightPiece> knightPieces;
    public List<Vector3> towers;
    public int numberOfTowers;
    public Vector3 startPosition;
    public Vector3 endPosition;
    public List<Vector3> path;
    public List<Vector3> cornersPosition;
    public int repetitiveCornersCount;
}