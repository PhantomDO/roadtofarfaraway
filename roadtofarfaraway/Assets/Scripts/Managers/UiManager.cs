using System;
using System.Collections;
using System.Collections.Generic;
using Controls;
using Gameplay.Components;
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
    [DefaultExecutionOrder(-1)]
    public class UiManager : MonoSingleton<UiManager>
    {
        public delegate void DSelectRadarSearchingType(SearchingMethod searchingMethod);
        public static event DSelectRadarSearchingType OnSelectRadarSearchingType;

        public delegate void SelectSpawnableUnitDelegate(UnitTypeSelector unitTypeSelector);
        public static event SelectSpawnableUnitDelegate OnSelectSpawnableUnit;

        [field: SerializeField] public Controls.BaseUIControls BaseUiControls {get; private set; }

        public Camera currentCamera;
        
        [Header("Player UI")]
        [SerializeField] private PlayerCanvasUI playerCanvasUI;

        private GraphicRaycaster _graphicRaycaster;
        private PointerEventData _clickData;
        public List<RaycastResult> ClickResults { get; private set; }

        public Vector2 CursorPosition { get; private set; }
        public Ray CursorAsRay { get; private set; }

        public bool IsOverUi
        {
            get
            {
                ClickResults.Clear();
                EventSystem.current.RaycastAll(_clickData, ClickResults);
                return ClickResults.Count > 0;
            }
        }

        protected override void Awake()
        {
            base.Awake();
            BaseUiControls = new BaseUIControls();
        }

        private void Start()
        {
            if (currentCamera == null) currentCamera = Camera.main;
            if (playerCanvasUI?.TryGetComponent(out _graphicRaycaster) == false) return;
            _clickData = new PointerEventData(EventSystem.current);
            ClickResults = new List<RaycastResult>();
        }

        private void OnEnable()
        {
            if (BaseUiControls != null)
            {
                BaseUiControls.Enable();
                BaseUiControls.UI.Point.performed += ReadPoint;
                BaseUiControls.UI.PressOnly.started += MouseClick;
            }
        }

        private void OnDisable()
        {
            if (BaseUiControls != null)
            {
                BaseUiControls.UI.Point.performed -= ReadPoint;
                BaseUiControls.UI.PressOnly.started -= MouseClick;
                BaseUiControls.Disable();
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
            CursorPosition = _clickData.position = callbackContext.ReadValue<Vector2>();
            CursorAsRay = currentCamera.ScreenPointToRay(CursorPosition);
        }

        private void MouseClick(InputAction.CallbackContext callbackContext)
        {
            Debug.Log($"Mouse click");
            if (IsOverUi)
            {
                foreach (var result in ClickResults)
                {
                    Debug.Log($"RaycastHit: {result.gameObject.name}");
                    if (result.gameObject.TryGetComponent(out UnitTypeSelector selector))
                    {
                        OnSelectSpawnableUnit?.Invoke(selector);
                        break;
                    }
                }
            }
        }
    }
}