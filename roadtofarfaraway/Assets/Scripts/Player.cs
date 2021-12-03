using System;
using System.Collections.Generic;
using Managers;
using UnityEngine;

namespace Units
{
    public class Player : MonoBehaviour
    {
        [SerializeField] private int _startCurrency;
        public int CurrentCurrency { get; private set; }

        public List<Unit> SpawnedUnits { get; private set; }

        private void Awake()
        {
            SpawnedUnits = new List<Unit>();
        }

        public void SpawnUnit(UnitType type, Vector3 position)
        {
            if (GameManager.Instance == null) return;

            var cost = GameManager.Instance.CostToSpawnClasses[type];
            var prefab = GameManager.Instance.PrefabClasses[type];
            CurrentCurrency = Mathf.Max(CurrentCurrency - cost, 0);
            var unitObject = GameObject.Instantiate(prefab, position, Quaternion.identity, transform);
            if (unitObject.TryGetComponent(out Unit unit))
            {
                SpawnedUnits.Add(unit);
                unit.OnUnitAsLostLife += DestroyUnit;
            }
        }

        public void DestroyUnit(Unit unit)
        {
            unit.OnUnitAsLostLife -= DestroyUnit;
            SpawnedUnits.Remove(unit);
            Destroy(unit.gameObject);
        }
    }
}