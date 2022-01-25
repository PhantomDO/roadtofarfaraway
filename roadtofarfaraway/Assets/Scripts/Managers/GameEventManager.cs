using System;
using Tools;
using Gameplay;
using UI;

namespace Managers
{
    public class GameEventManager : MonoSingleton<GameEventManager>
    {
        #region Unit Events
        
        public delegate void SpawnUnitDelegate(Unit spawnedUnit);
        public static event SpawnUnitDelegate OnSpawnUnit;

        public delegate void DamageUnitDelegate(float damage, Unit damagedUnit);
        public static event DamageUnitDelegate OnDamageUnit;

        public delegate void KillUnitDelegate(Unit killedUnit);
        public static event KillUnitDelegate OnKillUnit;

        public delegate void UnitLandedDelegate(Unit landedUnit);
        public static event UnitLandedDelegate OnUnitLanded;

        public delegate void UnitSelectedDelegate(Unit selectedUnit);
        public static event UnitSelectedDelegate OnUnitSelected;

        public void SpawnUnit(Unit spawnedUnit)
        {
            OnSpawnUnit?.Invoke(spawnedUnit);
        }

        public void DamageUnit(float damage, Unit damagedUnit)
        {
            OnDamageUnit?.Invoke(damage, damagedUnit);
        }

        public void KillUnit(Unit unit)
        {
            OnKillUnit?.Invoke(unit);
        }

        public void UnitLanded(Unit unit)
        {
            OnUnitLanded?.Invoke(unit);
        }

        public void UnitSelected(Unit unit)
        {
            OnUnitSelected?.Invoke(unit);
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