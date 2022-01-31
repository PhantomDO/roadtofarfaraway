using System;
using Managers;
using TMPro;
using UnityEngine;

namespace UI
{
    public class EndGameUI : MonoBehaviour
    {
        [SerializeField] private TMP_Text tmpText;

        private void OnEnable()
        {
            GameManager.OnDefeat += Defeat;
            GameManager.OnWin += Win;
        }
        private void OnDisable()
        {
            GameManager.OnDefeat -= Defeat;
            GameManager.OnWin -= Win;
        }

        private void Defeat()
        {
            tmpText.text = "You loose..";
        }

        private void Win()
        {
            tmpText.text = "You win!";
        }
    }
}