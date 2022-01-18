using System;
using Tools;
using Gameplay;
using UnityEngine;

namespace Managers
{
    public class GameManager : MonoSingleton<GameManager>
    {
        [field: SerializeField] public GenericDictionary<UnitType, UnitParameters> TypesParameters { get; private set; }
        [field: SerializeField] public Player Player { get; private set; }

        private void Start()
        {
            Player = GameObject.FindObjectOfType<Player>();

            if (Player == null)
            {
                GameObject go = new GameObject("Player", typeof(Player));
                if (go.TryGetComponent(out Player player)) Player = player;
            }
        }

        public Unit SpawnUnit(int currency, UnitType type, Vector3 position, Transform parent = null)
        {
            UnitParameters usedTypes = TypesParameters[type];
            int currencyAfterBuying = currency - (int)usedTypes.Cost;
            if (currencyAfterBuying < 0 || !usedTypes.Prefab) return null;

            var unit = Instantiate(usedTypes.Prefab, position, Quaternion.identity, parent);
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