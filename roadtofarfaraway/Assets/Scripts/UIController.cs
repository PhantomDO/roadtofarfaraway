using System;
using GameState;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public static UIController instance;
    public Slider slider;
    public TextMeshProUGUI loadingText;
    public GameObject loadingPanel;

    public GameObject pausePanel;
    public TextMeshProUGUI pauseButtonText;

    private void Awake()
    {
        if (instance == null) { instance = this; }
        else if (instance != this) { Destroy(gameObject); }

        GameStateManager.OnGameStateChanged += OnGameStateChanged;
    }

    private void OnDestroy()
    {
        GameStateManager.OnGameStateChanged -= OnGameStateChanged;
    }

    public void ResetScreen()
    {
        loadingPanel.SetActive(true);
        loadingText.text = "0 %";
        slider.value = 0;
    }

    public void SetLoadingValue(float value)
    {
        loadingText.text = (int)(value * 100) + " %";
        slider.value = value;
    }

    public void HideLoadingScreen()
    {
        loadingPanel.SetActive(false);
    }

    public void OnClickPauseButton()
    {
        GameState.GameState currentGameState = GameStateManager.Instance.CurrentGameState;
        GameState.GameState newGameState = currentGameState == GameState.GameState.Paused ? GameState.GameState.Gameplay : GameState.GameState.Paused;
        GameStateManager.Instance.CurrentGameState = newGameState;
    }

    public void OnClickRestartButton()
    {
        SceneManager.LoadScene(0);
    }

    private void OnGameStateChanged(GameState.GameState newGameState)
    {
        pausePanel.SetActive(GameStateManager.Instance.CurrentGameState == GameState.GameState.Paused);
        pauseButtonText.text = GameStateManager.Instance.CurrentGameState == GameState.GameState.Gameplay ? "Pause" : "Resume";
        Debug.Log(GameStateManager.Instance.CurrentGameState);
    }
}