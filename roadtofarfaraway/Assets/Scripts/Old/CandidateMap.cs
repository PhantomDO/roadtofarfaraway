using UnityEngine;
using System.Collections.Generic;
using Random = UnityEngine.Random;

namespace FFA.ChessMaze
{
    public class CandidateMap
    {
        private MapGrid _grid;
        private int _numberOfPieces = 0;
        private bool[] _obstaclesArray = null;
        private Vector3 _startPoint, _endPoint;
        private List<Knight> _knightPieces;

        public MapGrid grid { get => _grid; }
        public bool[] obstactlesArray { get => _obstaclesArray; }

        public CandidateMap(MapGrid grid, int numberOfPieces)
        {
            this._grid = grid;
            this._numberOfPieces = numberOfPieces;
            this._knightPieces = new List<Knight>();
        }

        public void CreateMap(Vector3 startPosition, Vector3 endPosition)
        {
            this._startPoint = startPosition;
            this._endPoint = endPosition;
            RandomlyPlaceKnights(this._numberOfPieces);
        }

        private bool CanBeObstacle(Vector3 position)
        {
            if (position == _startPoint || position == _endPoint)
            {
                return false;
            }
            int index = _grid.CoordinatesToIndex(position.x, position.z);
            return !_obstaclesArray[index];
        }

        private void RandomlyPlaceKnights(int numberOfPieces)
        {
            int count = numberOfPieces;
            int tryLimit = 100;
            while (count > 0 && tryLimit > 0)
            {
                int randomIndex = Random.Range(0, _obstaclesArray.Length);
                Vector3 randomPosition = grid.IndexToCoordinates(randomIndex);
                if (CanBeObstacle(randomPosition))
                {
                    _obstaclesArray[randomIndex] = true;
                    _knightPieces.Add(new Knight(randomPosition));
                    count--;
                }
                tryLimit--;
            }
        }
    }
}
