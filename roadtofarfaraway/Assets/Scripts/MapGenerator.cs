using System.Collections.Generic;
using FFA.MapGeneration;
using UnityEngine;

public class MapGenerator : MonoBehaviour
{
    public GridVisualizer gridVisualizer;
    public MapVisualizer mapVisualizer;

    [Range(3, 20)]
    public int length = 10, width = 10;
    public Direction startEdge, endEdge;
    public bool randomStartAndEnd;
    [Range(1, 10)]
    public int numberOfPieces;
    [Range(0, 3)]
    public int numberOfTowers;
    public bool visualizeUsingPrefabs;
    public bool autoRepair = true;

    private MapGrid _grid;
    private CandidateMap _map;
    private Vector3 _startPosition, _endPosition;

    private void Start()
    {
        //gridVisualizer.VisualizeGrid(width, length);
        GenerateNewMap();
    }

    public void GenerateNewMap()
    {
        mapVisualizer.ClearMap();

        _grid = new MapGrid(length, width);

        MapHelper.SetStartAndEndPositions(_grid, ref _startPosition, ref _endPosition, randomStartAndEnd, startEdge, endEdge);

        _map = new CandidateMap(_grid, numberOfPieces, numberOfTowers);
        _map.CreateMap(_startPosition, _endPosition, autoRepair);
        mapVisualizer.VisualizeMap(_grid, _map.ReturnMapData(), visualizeUsingPrefabs);
    }

    public void TryRepair()
    {
        if (_map != null)
        {
            List<Vector3> obstaclesToRemove = _map.Repair();
            if (obstaclesToRemove.Count > 0)
            {
                mapVisualizer.ClearMap();
                mapVisualizer.VisualizeMap(_grid, _map.ReturnMapData(), visualizeUsingPrefabs);
            }
        }
    }
}