using UnityEngine;

namespace FFA.ChessMaze
{
    public class MapGenerator : MonoBehaviour
    {
        [Range(3,20)]
        public int width = 10, length = 10;
        public bool randomPlacement;
        public Direction startEdge, endEdge;

        private MapGrid _grid;
        private Vector3 _startPosition, _endPosition;

        private void Start()
        {
            _grid = new MapGrid(width, length);
            _grid.DebugCoordinates();
            MapHelper.RandomStartAndEnd(_grid, ref _startPosition, ref _endPosition, randomPlacement, startEdge, endEdge);
        }
    }
}
