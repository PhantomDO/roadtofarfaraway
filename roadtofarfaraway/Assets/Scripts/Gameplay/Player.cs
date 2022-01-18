using System.Collections.Generic;
using Managers;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Gameplay
{
    [RequireComponent(typeof(PlayerInput))]
    public class Player : MonoBehaviour
    {
        [SerializeField] private int _startCurrency;
        public int CurrentCurrency { get; private set; }

        public List<Unit> SpawnedUnits { get; private set; }

        private PlayerInput _playerInput;
        private InputAction _cursorPointAction;
        private InputAction _cursorClickAction;

        private void Awake()
        {
            SpawnedUnits = new List<Unit>();
            CurrentCurrency = _startCurrency;

            GameEventManager.OnSpawnUnit += AddSpawnedUnitFromArmy;
            GameEventManager.OnKillUnit += RemoveKilledUnitFromArmy;
        }

        private void Update()
        {
            if (_playerInput == null)
            {
                _playerInput = GetComponent<PlayerInput>();
                _cursorPointAction = _playerInput.actions["Point"];
                _cursorClickAction = _playerInput.actions["ClickDown"];
            }

            // when click append
            if (_cursorClickAction.triggered)
            {
                var cursorPosition = _cursorPointAction.ReadValue<Vector2>();
                var cursorAsRay = Camera.main.ScreenPointToRay(cursorPosition);

                if (Physics.Raycast(cursorAsRay, out RaycastHit hitInfo, Mathf.Infinity) && 
                    hitInfo.collider.gameObject.CompareTag("Ground"))
                {
                    GameManager.Instance?.SpawnUnit(CurrentCurrency, UnitType.Shrek, hitInfo.point, transform);
                }
            }
        }

        private void OnDestroy()
        {
            GameEventManager.OnSpawnUnit -= AddSpawnedUnitFromArmy;
            GameEventManager.OnKillUnit -= RemoveKilledUnitFromArmy;
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
    }
}