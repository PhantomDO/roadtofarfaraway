using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace FFA
{
    public class UIController : MonoBehaviour
    {
        public static UIController instance;
        public Slider slider;
        public TextMeshProUGUI loadingText;
        public GameObject loadingPanel;

        private void Awake()
        {
            if (instance == null) { instance = this; }
            else if (instance != this) { Destroy(gameObject); }
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
    }
}