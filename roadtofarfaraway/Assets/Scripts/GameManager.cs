using System;
using Tools;
using UnityEngine;

namespace Managers
{
    public class GameManager : MonoSingleton<GameManager>
    {
        [field: SerializeField] public GenericDictionary<Units.UnitType, int> CostToSpawnClasses { get; private set; }
        [field: SerializeField] public GenericDictionary<Units.UnitType, GameObject> PrefabClasses { get; private set; }
    }
}