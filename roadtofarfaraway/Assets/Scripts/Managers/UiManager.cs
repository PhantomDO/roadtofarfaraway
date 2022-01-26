using System;
using System.Collections;
using System.Collections.Generic;
using Managers;
using TMPro;
using Tools;
using UI;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace Managers
{
    public class UiManager : MonoSingleton<UiManager>
    {
        public delegate void SelectSpawnableUnitDelegate(UnitTypeSelector unitTypeSelector);
        public static event SelectSpawnableUnitDelegate OnSelectSpawnableUnit;

        [field: SerializeField] public InputActionReference PointAction {get; private set; }
        [field: SerializeField] public InputActionReference ClickAction {get; private set; }

        public Camera currentCamera;
        
        [Header("Player UI")]
        [SerializeField] private PlayerCanvasUI playerCanvasUI;

        private GraphicRaycaster _graphicRaycaster;
        private PointerEventData _clickData;
        private List<RaycastResult> _clickResults;

        public Vector2 CursorPosition { get; private set; }
        public Ray CursorAsRay { get; private set; }

        private void Start()
        {
            if (currentCamera == null) currentCamera = Camera.main;
            if (playerCanvasUI?.TryGetComponent(out _graphicRaycaster) == false) return;
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

#if UNITY_EDITOR
        private void OnDrawGizmos()
        {
            Gizmos.color = Color.red;
            Gizmos.DrawRay(CursorAsRay.origin, CursorAsRay.direction.normalized * currentCamera.farClipPlane);
            Gizmos.DrawWireSphere(CursorAsRay.origin + CursorAsRay.direction.normalized * currentCamera.farClipPlane, 0.5f);
        }
#endif

        private void ReadPoint(InputAction.CallbackContext callbackContext)
        {
            CursorPosition = callbackContext.ReadValue<Vector2>();
            CursorAsRay = currentCamera.ScreenPointToRay(CursorPosition);
        }

        private void MouseClick(InputAction.CallbackContext callbackContext)
        {
            _clickData.position = CursorPosition;
            _clickResults.Clear();

            _graphicRaycaster.Raycast(_clickData, _clickResults);

            foreach (var result in _clickResults)
            {
                if (result.gameObject.TryGetComponent(out UnitTypeSelector selector))
                {
                    Debug.Log($"RaycastHit: {result.gameObject.name}");
                    OnSelectSpawnableUnit?.Invoke(selector);
                    break;
                }
            }
        }
    }
}