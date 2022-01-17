using Tools;
using Gameplay;
using UnityEngine;

namespace Managers
{
    public class UnitParameters : ScriptableObject
    {
        public uint Cost;
        public GameObject Prefab;
    }

    public class GameManager : MonoSingleton<GameManager>
    {
        [field: SerializeField] public GenericDictionary<UnitType, UnitParameters> TypesParameters { get; private set; }

        public Unit SpawnUnit(int currency, UnitType type, Vector3 position, Transform parent = null)
        {
            UnitParameters usedTypes = TypesParameters[type];
            int currencyAfterBuying = currency - (int)usedTypes.Cost;
            if (currencyAfterBuying < 0 || !usedTypes.Prefab.TryGetComponent(out Unit unit)) return null;

            GameObject unitGO = GameObject.Instantiate(usedTypes.Prefab, position, Quaternion.identity, parent);
            GameEventManager.Instance?.SpawnUnit(currencyAfterBuying, unit);
            return unit;
        }

        public bool TrySpawnUnit(int currency, UnitType type, Vector3 position, Transform parent, out Unit unit)
        {
            unit = SpawnUnit(currency, type, position, parent);
            return unit != null;
        }
    }
}