using System.Collections.Generic;
using UnityEngine;

namespace FFA.MapGeneration
{
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
        public bool visualizeUsingPrefabs = false;
        public bool autoRepair = true;

        private MapGrid grid;
        private CandidateMap map;
        private Vector3 startPosition, endPosition;

        private void Start()
        {
            //gridVisualizer.VisualizeGrid(width, length);
            GenerateNewMap();
        }

        public void GenerateNewMap()
        {
            mapVisualizer.ClearMap();

            grid = new MapGrid(length, width);

            MapHelper.SetStartAndEndPositions(grid, ref startPosition, ref endPosition, randomStartAndEnd, startEdge, endEdge);

            map = new CandidateMap(grid, numberOfPieces);
            map.CreateMap(startPosition, endPosition, autoRepair);
            mapVisualizer.VisualizeMap(grid, map.ReturnMapData(), visualizeUsingPrefabs);
        }

        public void TryRepair()
        {
            if (map != null)
            {
                List<Vector3> obstaclesToRemove = map.Repair();
                if (obstaclesToRemove.Count > 0)
                {
                    mapVisualizer.ClearMap();
                    mapVisualizer.VisualizeMap(grid, map.ReturnMapData(), visualizeUsingPrefabs);
                }
            }
        }
    }
}