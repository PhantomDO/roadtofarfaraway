using UnityEngine;

namespace GameState
{
    public class GameStateManager
    {
        private static GameStateManager _instance;
        [SerializeField] private UIController _uiController;

        public static GameStateManager Instance
        {
            get
            {
                if (_instance == null)
                    _instance = new GameStateManager();
                return _instance;
            }
        }

        private GameState _currentGameState;
        public GameState CurrentGameState
        {
            get => _currentGameState;
            set
            {
                if (value == CurrentGameState)
                    return;

                _currentGameState = value;
                OnGameStateChanged?.Invoke(value);
            }
        }

        public delegate void GameStateChangeHandler(global::GameState.GameState newGameState);
        public static event GameStateChangeHandler OnGameStateChanged;
    }
}
