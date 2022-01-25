using System;
using System.Collections;
using System.Collections.Generic;
using Managers;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Interactions;
using Object = UnityEngine.Object;

namespace Gameplay
{
    public class Player : MonoBehaviour
    {
        [Header("Currency")]
        [SerializeField] private int _startCurrency;
        [field: SerializeField] public int CurrentCurrency { get; private set; }

        [Header("Unit Management")] 
        [SerializeField] private LayerMask unitSelectableLayerMask;
        [field: SerializeField] public List<Unit> SpawnedUnits { get; private set; }

        [SerializeField] private Unit _selectedUnit = null;
        public Unit SelectedUnit
        {
            get => _selectedUnit;
            private set
            {
                _selectedUnit = value;
                GameEventManager.Instance?.UnitSelected(_selectedUnit);
            }
        }

        [Header("Spawn & Drag")]
        [SerializeField] private float _dragSpeed = .10f;
        [SerializeField] private GameObject _crosshairPrefab;
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

            SpawnedUnits = new List<Unit>();
            CurrentCurrency = _startCurrency;
            
            GameEventManager.OnKillUnit += RemoveKilledUnitFromArmy;
            GameEventManager.OnSelectSpawnableUnit += SelectSpawnableUnit;
        }

        private void OnEnable()
        {
            if (SelectAndSpawnUnitAction != null)
            {
                SelectAndSpawnUnitAction.action.Enable();
                SelectAndSpawnUnitAction.action.performed += OnSelectAndSpawnUnitPerformed;
            }
        }

        private void Update()
        {
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
            GameEventManager.OnKillUnit -= RemoveKilledUnitFromArmy;
            GameEventManager.OnSelectSpawnableUnit -= SelectSpawnableUnit;
        }


        #endregion

        #region Event Methods
        
        private void RemoveKilledUnitFromArmy(Unit killedUnit)
        {
            SpawnedUnits.Remove(killedUnit);
        }

        private void SelectSpawnableUnit(UI.UnitTypeSelector unitTypeSelector)
        {
            if (unitTypeSelector == null) return;
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
                SpawnUnit(_spawningType, _crosshairSpawn.transform.position);
                _crosshairSpawn.transform.position = Vector3.zero;
                _crosshairSpawn.SetActive(false);
                _spawningType = UnitType.Null;
            }
            else
            {
                var cursorPosition = UiManager.Instance.CursorPosition;
                var cursorAsRay = UiManager.Instance.currentCamera.ScreenPointToRay(cursorPosition);
                if (!Physics.Raycast(cursorAsRay, out RaycastHit hitInfo, Mathf.Infinity, unitSelectableLayerMask))
                {
                    SelectedUnit = null;
                }
                else
                {
                    // Check if you find a UnitComponent in the hierarchy of the collider
                    Transform rootNotPlayer = hitInfo.transform;
                    while (!rootNotPlayer.CompareTag("Player"))
                    {
                        // it can't be this unit, then ignore itself
                        if (rootNotPlayer.TryGetComponent(out Unit unit) &&
                            rootNotPlayer.GetInstanceID() != SelectedUnit?.GetInstanceID())
                        {
                            // if it does not contains the unit add it to the list then break
                            SelectedUnit = unit;
                            break;
                        }

                        // up the hierarchy
                        if (rootNotPlayer.parent == null) break;
                        rootNotPlayer = rootNotPlayer.parent;
                    }
                }
            }
        }
        
        #endregion

        private void SpawnUnit(UnitType type, Vector3 spawnPosition)
        {
            if (GameManager.Instance)
            {
                var usedTypes = GameManager.Instance.TypesParameters[type];
                var spawnerPosition = GameManager.Instance.Spawner.SpawnTransform.position;
                var currencyAfterBuying = CurrentCurrency - (int)usedTypes.Cost;

                if (currencyAfterBuying >= 0 && usedTypes.Prefab)
                {
                    CurrentCurrency = currencyAfterBuying;
                    var unit = Instantiate(usedTypes.Prefab, spawnerPosition, Quaternion.identity, transform);
                    GameManager.Instance.Spawner.ShootWithGravity(unit, spawnPosition);
                    GameEventManager.Instance?.SpawnUnit(unit);
                    SpawnedUnits.Add(unit);
                }
            }
        }

        private IEnumerator MoveCrosshair()
        {
            yield return new WaitForSeconds(0.2f);
            _crosshairSpawn.SetActive(true);

            while (_spawningType != UnitType.Null)
            {
                var cursorPosition = UiManager.Instance.CursorPosition;
                var cursorAsRay = UiManager.Instance.currentCamera.ScreenPointToRay(cursorPosition);
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