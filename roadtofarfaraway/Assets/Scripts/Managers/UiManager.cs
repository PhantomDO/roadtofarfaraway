using System;
using System.Collections;
using System.Collections.Generic;
using Managers;
using Tools;
using UI;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace Assets.Scripts.Managers
{
    public class UiManager : MonoSingleton<UiManager>
    {
        [field: SerializeField] public List<UnitTypeSelector> UnitTypeSelectors { get; private set; }

        [field: SerializeField] public InputActionReference PointAction {get; private set; }
        [field: SerializeField] public InputActionReference ClickAction {get; private set; }
                
        public Canvas playerCanvas;
        public Camera currentCamera;
        
        private GraphicRaycaster _graphicRaycaster;
        private PointerEventData _clickData;
        private List<RaycastResult> _clickResults;

        public Vector2 CursorPosition { get; private set; }

        private void Start()
        {
            if (currentCamera == null) currentCamera = Camera.main;
            if (playerCanvas?.TryGetComponent(out _graphicRaycaster) == false) return;
            _clickData = new PointerEventData(EventSystem.current);
            _clickResults = new List<RaycastResult>();
        }

        private void OnEnable()
        {
            if (PointAction != null)
            {
                PointAction.action.Enable();
                PointAction.action.performed += ReadPoint;
            }

            if (ClickAction != null)
            {
                ClickAction.action.Enable();
                ClickAction.action.started += MouseClick;
            }
        }

        private void OnDisable()
        {
            if (PointAction != null)
            {
                PointAction.action.performed -= ReadPoint;
                PointAction.action.Disable();
            }

            if (ClickAction != null)
            {
                ClickAction.action.started -= MouseClick;
                ClickAction.action.Disable();
            }
        }

        private void ReadPoint(InputAction.CallbackContext obj)
        {
            CursorPosition = obj.ReadValue<Vector2>();
        }

        private void MouseClick(InputAction.CallbackContext obj)
        {
            _clickData.position = CursorPosition;
            _clickResults.Clear();

            _graphicRaycaster.Raycast(_clickData, _clickResults);

            foreach (var result in _clickResults)
            {
                if (result.gameObject.TryGetComponent(out UnitTypeSelector selector))
                {
                    Debug.Log($"RaycastHit: {result.gameObject.name}");
                    GameEventManager.Instance?.SelectSpawnabUnit(selector);
                    break;
                }
            }
        }
    }
}