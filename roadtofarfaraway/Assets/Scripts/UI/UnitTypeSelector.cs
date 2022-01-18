
using Gameplay;
using Managers;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    [RequireComponent(typeof(Button))]
    public class UnitTypeSelector : MonoBehaviour
    {
        [field: SerializeField] public Button PressableButton { get; private set; }
        [field: SerializeField] public UnitType Type { get; private set; }

        private void Awake()
        {
            if (TryGetComponent(out Button btn))
            {
                PressableButton = btn;
            }
        }
    }
}