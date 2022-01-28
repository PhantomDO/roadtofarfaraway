using System;
using System.Collections;
using System.Collections.Generic;
using Controls;
using Gameplay.Components;
using Managers;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Interactions;
using Object = UnityEngine.Object;

namespace Gameplay
{
    public class Player : MonoBehaviour
    {
        public delegate void UnitSelectedDelegate(Unit selectedUnit);
        public static event UnitSelectedDelegate OnSelectUnit;

        public delegate void UnitHoverDelegate(Unit hoverUnit);
        public static event UnitHoverDelegate OnHoverUnit;

        [Header("Unit Selection")] 

        [SerializeField] private LayerMask unitSelectableLayerMask;
        [SerializeField, ColorUsage(true, true)] private Color unitSelectedColor;
        [SerializeField, ColorUsage(true, true)] private Color unitHoverColor;

        private int _hoverUnitId = int.MinValue;
        public Unit HoverUnit => GetUnitFromId(_hoverUnitId);

        private int _selectedUnitId = int.MinValue;
        public Unit SelectedUnit => GetUnitFromId(_selectedUnitId);
        
        private RaycastHit[] _raycastHits;
        private int _raycastAllCount;

        [Header("Spawn & Drag")]

        [SerializeField] private float _dragSpeed = .10f;
        [SerializeField] private GameObject _crosshairPrefab;
        [field: SerializeField] public  SpawnerComponent Spawner { get; private set; }
        [field: SerializeField] public PlayerControls PlayerControls { get; private set; }

        private Vector3 _velocity = Vector3.zero;
        private WaitForFixedUpdate _waitForFixedUpdate = new WaitForFixedUpdate();

        private UnitType _spawningType = UnitType.Null;
        private GameObject _crosshairSpawn;

        #region Unity Methods


        private void Awake()
        {
            PlayerControls = new PlayerControls();

            _crosshairSpawn = GameObject.Instantiate(_crosshairPrefab, Vector3.zero, Quaternion.identity, transform);
            _crosshairSpawn.SetActive(false);

            if (Spawner == null)
            {
                foreach (Transform child in transform)
                {
                    if (child.TryGetComponent(out SpawnerComponent spawner))
                    {
                        Spawner = spawner;
                        break;
                    }
                }
            }

            _raycastHits = new RaycastHit[3];

            UiManager.OnSelectSpawnableUnit += SelectSpawnableUnit;
        }

        private void OnEnable()
        {
            if (PlayerControls != null)
            {
                PlayerControls.Enable();
                PlayerControls.Player.SelectAndSpawnUnit.performed += OnSelectAndSpawnUnitPerformed;
            }
        }

        private void OnDisable()
        {
            if (PlayerControls != null)
            {
                PlayerControls.Player.SelectAndSpawnUnit.performed -= OnSelectAndSpawnUnitPerformed;
                PlayerControls.Disable();
            }
        }

        private void OnDestroy()
        {
            UiManager.OnSelectSpawnableUnit -= SelectSpawnableUnit;
        }

        private void FixedUpdate()
        {
            // !!! IMPORTANT !!!
            // If you have a navmeshcomponent and a rigidbody,
            // you need the rigidbody detection to be Continuous, if not raycast will go throught
            if (UiManager.Instance)
            {
                _raycastAllCount = Physics.RaycastNonAlloc(UiManager.Instance.CursorAsRay, _raycastHits, UiManager.Instance.currentCamera.farClipPlane);
                if (_raycastAllCount > 1) Array.Sort(_raycastHits, (x, y) => x.distance.CompareTo(y.distance));

                for (int i = 0; i < _raycastAllCount; i++)
                {
                    var hitInfo = _raycastHits[i];
                    if (TryGetHitUnitSelectable(hitInfo, out Unit hoverUnit) && hoverUnit != SelectedUnit)
                    {
                        SetUnitFromId(ref _hoverUnitId, hoverUnit.GetInstanceID());
                        OnHoverUnit?.Invoke(hoverUnit);
                        break;
                    }

                    //if (HoverUnit)
                    {
                        SetUnitFromId(ref _hoverUnitId);
                        OnHoverUnit?.Invoke(null);
                    }
                }
            }
        }

        #endregion

        #region Event Methods

        private void SelectSpawnableUnit(UI.UnitTypeSelector unitTypeSelector)
        {
            if (unitTypeSelector == null || Spawner.Money.Current <= 0) return;
            _spawningType = unitTypeSelector.Type;
            if (!_crosshairSpawn.activeInHierarchy)
            {
                StartCoroutine(MoveCrosshair());
            }
        }

        private void OnSelectAndSpawnUnitPerformed(InputAction.CallbackContext callback)
        {
            if (UiManager.Instance?.IsOverUi == true) return;

            if (_spawningType != UnitType.Null && _crosshairSpawn.activeInHierarchy)
            {
                Spawner.SpawnUnit(_spawningType, _crosshairSpawn.transform.position);
                _crosshairSpawn.transform.position = Vector3.zero;
                _crosshairSpawn.SetActive(false);
                _spawningType = UnitType.Null;
            }

            if (callback.ReadValueAsButton()/* && _hoverUnitId > int.MinValue*/)
            {
                for (int i = 0; i < _raycastAllCount; i++)
                {
                    var hitInfo = _raycastHits[i];

                    int instanceId = int.MinValue;
                    if (TryGetHitUnitSelectable(hitInfo, out Unit selectableUnit) && selectableUnit != SelectedUnit)
                    {
                        instanceId = selectableUnit.GetInstanceID();
                    }

                    SetUnitFromId(ref _selectedUnitId, instanceId);
                    OnSelectUnit?.Invoke(SelectedUnit);

                    if (HoverUnit == SelectedUnit) break;
                }

            }
        }

        #endregion
        
        private Unit GetUnitFromId(int instanceId = int.MinValue)
        {
            return GameManager.Instance && _selectedUnitId > int.MinValue
                ? GameManager.Instance.InstanceIDUnits[_selectedUnitId] : null;
        }

        private void SetUnitFromId(ref int actionId, int unitId = int.MinValue)
        {
            actionId = int.MinValue;
            Unit unit = null;

            if (!GameManager.Instance || unitId == int.MinValue) return;

            if (GameManager.Instance.InstanceIDUnits.ContainsKey(unitId))
            {
                actionId = unitId;
                unit = GameManager.Instance.InstanceIDUnits[unitId];
            }
        }
        
        private bool TryGetHitUnitSelectable(RaycastHit hitInfo, out Unit selectableUnit)
        {
            selectableUnit = null;

            if (hitInfo.collider != null)
            {
                // Check if you find a UnitComponent in the hierarchy of the collider
                var rootUnderParent = hitInfo.transform;
                Unit selectedUnit = SelectedUnit;

                if (rootUnderParent.CompareTag("Ground"))
                {
                    if (selectedUnit != null)
                    {
                        selectedUnit.Outline.OutlineColor = Color.white;
                        selectedUnit.Outline.OutlineWidth = 0.0f;
                    }

                    selectedUnit = null;
                }

                while (true)
                {
                    if (rootUnderParent.parent == null) break;
                    if (!rootUnderParent.parent.CompareTag("UnitContainer"))
                    {
                        rootUnderParent = rootUnderParent.parent;
                        continue;
                    }

                    // if you can't find a Unit component, then ignore
                    if (rootUnderParent.TryGetComponent(out Unit unit))
                    {
                        Debug.LogWarning($"Selected Unit : {(selectedUnit?selectedUnit.name:"Null")}, Found Unit : {unit}");
                        if (selectedUnit == null || (selectedUnit != null && unit != selectedUnit))
                        {
                            // if it does not contains the unit add it to the list then break
                            selectableUnit = unit;
                        }
                    }
                    
                    break;
                }
            }

            return selectableUnit != null;
        }

        private IEnumerator MoveCrosshair()
        {
            if (!UiManager.Instance) yield break;

            yield return new WaitForSeconds(0.2f);
            _crosshairSpawn.SetActive(true);

            while (_spawningType != UnitType.Null)
            {
                var cursorAsRay = UiManager.Instance.CursorAsRay;
                var cursorEndPoint = cursorAsRay.origin + cursorAsRay.direction * 1000.0f;
                // Get UI button that gives you the UnitTypes to spawn
                if (Physics.Raycast(cursorAsRay, out RaycastHit hitInfo, Mathf.Infinity) &&
                    hitInfo.collider.CompareTag("Ground"))
                {
                    cursorEndPoint = cursorAsRay.GetPoint(hitInfo.distance);
                    _crosshairSpawn.transform.rotation = Quaternion.LookRotation(-Vector3.up);
                    _crosshairSpawn.transform.position = Vector3.SmoothDamp(_crosshairSpawn.transform.position,
                        cursorEndPoint, ref _velocity, _dragSpeed);
                }

                Debug.DrawLine(cursorAsRay.origin, cursorEndPoint, Color.red);

                yield return _waitForFixedUpdate;
            }
        }
        
    }
}