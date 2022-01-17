using System;
using Tools;
using Gameplay;

namespace Managers
{
    public class GameEventManager : MonoSingleton<GameEventManager>
    {
        public delegate void SpawnUnitDelegate(int updateCurrency, Unit spawnedUnit);
        public static event SpawnUnitDelegate OnSpawnUnit;

        public delegate void KillUnitDelegate(Unit killedUnit);
        public static event KillUnitDelegate OnKillUnit;

        public void SpawnUnit(int updateCurrency, Unit spawnedUnit)
        {
            OnSpawnUnit?.Invoke(updateCurrency, spawnedUnit);
        }

        public void KillUnit(Unit unit)
        {
            OnKillUnit?.Invoke(unit);
        }

    }
}