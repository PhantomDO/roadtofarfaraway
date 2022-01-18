using System;
using Tools;
using Gameplay;
using UI;

namespace Managers
{
    public class GameEventManager : MonoSingleton<GameEventManager>
    {
        #region Unit Events
        
        public delegate void SpawnUnitDelegate(int updateCurrency, Unit spawnedUnit);
        public static event SpawnUnitDelegate OnSpawnUnit;

        public delegate void DamageUnitDelegate(float damage, Unit damagedUnit);
        public static event DamageUnitDelegate OnDamageUnit;

        public delegate void KillUnitDelegate(Unit killedUnit);
        public static event KillUnitDelegate OnKillUnit;

        public void SpawnUnit(int updateCurrency, Unit spawnedUnit)
        {
            OnSpawnUnit?.Invoke(updateCurrency, spawnedUnit);
        }

        public void DamageUnit(float damage, Unit damagedUnit)
        {
            OnDamageUnit?.Invoke(damage, damagedUnit);
        }

        public void KillUnit(Unit unit)
        {
            OnKillUnit?.Invoke(unit);
        }

        #endregion

        #region UI Events
        
        public delegate void SelectSpawnableUnitDelegate(UnitTypeSelector unitTypeSelector);
        public static event SelectSpawnableUnitDelegate OnSelectSpawnableUnit;
        
        public void SelectSpawnabUnit(UnitTypeSelector unitTypeSelector)
        {
            OnSelectSpawnableUnit?.Invoke(unitTypeSelector);
        }

        #endregion

    }
}