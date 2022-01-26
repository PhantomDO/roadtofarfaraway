using System;
using System.Collections;
using System.Collections.Generic;
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
        public static event UnitSelectedDelegate OnUnitSelected;

        [Header("Unit Selection")] 
        [SerializeField] private LayerMask unitSelectableLayerMask;
        
        private Unit _selectedUnit = null;
        public Unit SelectedUnit
        {
            get => _selectedUnit;
            private set
            {
                _selectedUnit = value;
                OnUnitSelected?.Invoke(_selectedUnit);
            }
        }

        [Header("Spawn & Drag")]
        [SerializeField] private float _dragSpeed = .10f;
        [SerializeField] private GameObject _crosshairPrefab;
        [field: SerializeField] public  SpawnerComponent Spawner { get; private set; }
        [field: SerializeField] public InputActionReference SelectAndSpawnUnitAction { get; private set; }

        private Vector3 _velocity = Vector3.zero;
        private WaitForFixedUpdate _waitForFixedUpdate = new WaitForFixedUpdate();

        private UnitType _spawningType = UnitType.Null;
        private GameObject _crosshairSpawn;
        
        #region Unity Methods


        private void Awake()
        {
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

            UiManager.OnSelectSpawnableUnit += SelectSpawnableUnit;
        }

        private void OnEnable()
        {
            if (SelectAndSpawnUnitAction != null)
            {
                SelectAndSpawnUnitAction.action.Enable();
                SelectAndSpawnUnitAction.action.performed += OnSelectAndSpawnUnitPerformed;
            }
        }

        private void OnDisable()
        {
            if (SelectAndSpawnUnitAction != null)
            {
                SelectAndSpawnUnitAction.action.performed -= OnSelectAndSpawnUnitPerformed;
                SelectAndSpawnUnitAction.action.Disable();
            }
        }

        private void OnDestroy()
        {
            UiManager.OnSelectSpawnableUnit -= SelectSpawnableUnit;
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
            if (_spawningType != UnitType.Null && _crosshairSpawn.activeInHierarchy)
            {
                Spawner.SpawnUnit(_spawningType, _crosshairSpawn.transform.position);
                _crosshairSpawn.transform.position = Vector3.zero;
                _crosshairSpawn.SetActive(false);
                _spawningType = UnitType.Null;
            }

            if (callback.ReadValueAsButton() && UiManager.Instance != null)
            {
                var cursorAsRay = UiManager.Instance.CursorAsRay;
                var farClip = UiManager.Instance.currentCamera.farClipPlane;

                // !!! IMPORTANT !!!
                // If you have a navmeshcomponent and a rigidbody,
                // you need the rigidbody detection to be Continuous, if not raycast will go throught
                var rayCastAll = Physics.RaycastAll(cursorAsRay, farClip);
                Array.Sort(rayCastAll, (x, y) => x.distance.CompareTo(y.distance));

                for (int i = 0; i < rayCastAll.Length; i++)
                {
                    var hitInfo = rayCastAll[i];

                    Debug.Log($"{hitInfo.transform.name}, distance : {hitInfo.distance}");

                    if (hitInfo.transform.gameObject.CompareTag("Ground") && UiManager.Instance.ClickResults.Count <= 0)
                    {
                        Debug.Log($"Unit Raycasted {hitInfo.transform}");
                    }
                    // Check if you find a UnitComponent in the hierarchy of the collider
                    var rootNotPlayer = hitInfo.transform;

                    while (rootNotPlayer != Spawner.UnitContainer)
                    {
                        // it can't be this unit, then ignore itself
                        if (rootNotPlayer.TryGetComponent(out Unit unit))
                        {
                            Debug.LogWarning($"SelectedUnit : {SelectedUnit}, FindUnit : {unit}");
                            if (SelectedUnit == null || 
                               (SelectedUnit != null && rootNotPlayer.GetInstanceID() != SelectedUnit.GetInstanceID()))
                            {
                                // if it does not contains the unit add it to the list then break
                                SelectedUnit = unit;
                                break;
                            }
                        }

                        // up the hierarchy
                        if (rootNotPlayer.parent == null) break;
                        rootNotPlayer = rootNotPlayer.parent;
                    }
                }
            }
        }
        
        #endregion

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