using System;
using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Managers;
using Managers;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Interactions;

namespace Gameplay
{
    public class Player : MonoBehaviour
    {
        [SerializeField] private int _startCurrency;
        [field: SerializeField] public int CurrentCurrency { get; private set; }

        public List<Unit> SpawnedUnits { get; private set; }
        
        [field: SerializeField] public InputActionReference SelectAndSpawnUnitAction { get; private set; }

        [SerializeField] private LayerMask _unitLayerMask;
        [SerializeField] private float _dragPhysicsSpeed = 10f;
        [SerializeField] private float _dragSpeed = .10f;
        private Vector3 _velocity = Vector3.zero;
        private WaitForFixedUpdate _waitForFixedUpdate = new WaitForFixedUpdate();

        private UnitType _spawningType = UnitType.Null;

        private void Awake()
        {
            SpawnedUnits = new List<Unit>();
            CurrentCurrency = _startCurrency;

            GameEventManager.OnSpawnUnit += AddSpawnedUnitFromArmy;
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
            GameEventManager.OnSpawnUnit -= AddSpawnedUnitFromArmy;
            GameEventManager.OnKillUnit -= RemoveKilledUnitFromArmy;
            GameEventManager.OnSelectSpawnableUnit -= SelectSpawnableUnit;
        }

        private void AddSpawnedUnitFromArmy(int updateCurrency, Unit spawnedUnit)
        {
            CurrentCurrency = updateCurrency;
            SpawnedUnits.Add(spawnedUnit);
        }

        private void RemoveKilledUnitFromArmy(Unit killedUnit)
        {
            SpawnedUnits.Remove(killedUnit);
        }

        private void SelectSpawnableUnit(UI.UnitTypeSelector unitTypeSelector)
        {
            if (unitTypeSelector == null) return;
            _spawningType = unitTypeSelector.Type;
            
            //var cursorPosition = UiManager.Instance.CursorPosition;
            //var cursorAsRay = UiManager.Instance.currentCamera.ScreenPointToRay(cursorPosition);
            //// Get UI button that gives you the UnitTypes to spawn
            //if (Physics.Raycast(cursorAsRay, out RaycastHit hitInfo, Mathf.Infinity))
            //{
            //    if (hitInfo.collider.CompareTag("Ground"))
            //    {
            //        GameManager.Instance?.SpawnUnit(CurrentCurrency, _spawningType, hitInfo.point, transform);
            //        _spawningType = UnitType.Null;
            //    }
            //}
        }

        private void OnSelectAndSpawnUnitPerformed(InputAction.CallbackContext callback)
        {
            var cursorPosition = UiManager.Instance.CursorPosition;
            var cursorAsRay = UiManager.Instance.currentCamera.ScreenPointToRay(cursorPosition);
            RaycastHit hitInfo;

            if (_spawningType != UnitType.Null)
            {
                // Get UI button that gives you the UnitTypes to spawn
                if (Physics.Raycast(cursorAsRay, out hitInfo, Mathf.Infinity))
                {
                    if (hitInfo.collider.CompareTag("Ground"))
                    {
                        GameManager.Instance?.SpawnUnit(CurrentCurrency, _spawningType, hitInfo.point, transform);
                        _spawningType = UnitType.Null;
                    }
                }
            }

            if (Physics.Raycast(cursorAsRay, out hitInfo, Mathf.Infinity, _unitLayerMask) && 
                hitInfo.collider != null)
            {
                bool unitDraguable = true;
                // Check if you find a UnitComponent in the hierarchy of the collider
                Transform rootNotPlayer = hitInfo.collider.transform;
                while (!rootNotPlayer.CompareTag("Player") || rootNotPlayer.parent != null)
                {
                    // it can't be this unit, then ignore itself
                    if (rootNotPlayer.TryGetComponent(out Unit unit))
                    {
                        unitDraguable = unit.isDraguable;
                        break;
                    }
                    // up the hierarchy
                    rootNotPlayer = rootNotPlayer.parent;
                }

                if (unitDraguable) StartCoroutine(DragUpdate(rootNotPlayer));
            }
            
        }

        private IEnumerator DragUpdate(Transform collidingObject)
        {
            float initialDistance = Vector3.Distance(collidingObject.position,
                UiManager.Instance.currentCamera.transform.position);
            
            while (SelectAndSpawnUnitAction.action.ReadValue<float>() != 0)
            {
                var cursorPosition = UiManager.Instance.CursorPosition;
                var cursorAsRay = UiManager.Instance.currentCamera.ScreenPointToRay(cursorPosition);
                

                if (Physics.Raycast(cursorAsRay, out RaycastHit hit, Mathf.Infinity) && 
                    hit.collider.CompareTag("Ground"))
                {
                    initialDistance = hit.distance;
                }

                Debug.DrawLine(cursorAsRay.origin, cursorAsRay.GetPoint(initialDistance), Color.red);


                if (collidingObject == null) yield break;

                if (collidingObject.TryGetComponent(out Rigidbody rb))
                {
                    Vector3 direction = cursorAsRay.GetPoint(initialDistance) - collidingObject.position;
                    rb.velocity = direction * _dragPhysicsSpeed;
                    yield return _waitForFixedUpdate;
                }
                else
                {
                    collidingObject.position = Vector3.SmoothDamp(collidingObject.position,
                        cursorAsRay.GetPoint(initialDistance), ref _velocity, _dragSpeed);
                    yield return null;
                }
            }

            if (collidingObject.TryGetComponent(out Unit unit))
            {
                GameEventManager.Instance?.DropUnitInWorld(unit);
            }
        }
    }
}