using System.Collections.Generic;
using Managers;
using UnityEngine;

namespace Gameplay
{
    public class Player : MonoBehaviour
    {
        [SerializeField] private int _startCurrency;
        public int CurrentCurrency { get; private set; }

        public List<Unit> SpawnedUnits { get; private set; }



        private void Awake()
        {
            SpawnedUnits = new List<Unit>();

            GameEventManager.OnSpawnUnit += AddSpawnedUnitFromArmy;
            GameEventManager.OnKillUnit += RemoveKilledUnitFromArmy;
        }

        private void OnDestroy()
        {
            GameEventManager.OnSpawnUnit -= AddSpawnedUnitFromArmy;
            GameEventManager.OnKillUnit -= RemoveKilledUnitFromArmy;
        }

        private void AddSpawnedUnitFromArmy(int updateCurrency, Unit spawnedUnit)
        {
            if (!SpawnedUnits.Contains(spawnedUnit))
            {
                CurrentCurrency = updateCurrency;
                SpawnedUnits.Add(spawnedUnit);
            }
        }

        private void RemoveKilledUnitFromArmy(Unit killedUnit)
        {
            if (SpawnedUnits.Contains(killedUnit)) SpawnedUnits.Remove(killedUnit);
        }
    }
}