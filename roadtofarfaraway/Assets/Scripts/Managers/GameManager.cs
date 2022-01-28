using System;
using System.Collections.Generic;
using System.Linq;
using Tools;
using Gameplay;
using Gameplay.Components;
using UnityEngine;

namespace Managers
{
    [DefaultExecutionOrder(-1)]
    public class GameManager : MonoSingleton<GameManager>
    {
        [SerializeField] private Player playerPrefab;
        [field: SerializeField] public Player Player { get; private set; }
        [field: SerializeField] public GenericDictionary<UnitType, UnitParameters> TypesParameters { get; private set; }
        [field: SerializeField] public GenericDictionary<int, Unit> InstanceIDUnits { get; private set; }
        [field: SerializeField] public List<SpawnerComponent> Spawners { get; private set; }

        protected override void Awake()
        {
            base.Awake();

            Spawners = new List<SpawnerComponent>();
            InstanceIDUnits = new GenericDictionary<int, Unit>();

            SpawnerComponent.OnRegisterSpawner += RegisterSpawner;
            SpawnerComponent.OnRegisterUnit += RegisterUnit;
            SpawnerComponent.OnUnregisterUnit += UnregisterUnit;
        }

        private void OnDestroy()
        {
            SpawnerComponent.OnRegisterSpawner -= RegisterSpawner;
        }

        private void Start()
        {
            if (Player == null)
            {
                Player = FindObjectOfType<Player>();
                if (Player == null && playerPrefab != null)
                {
                    Player = Instantiate(playerPrefab, Vector3.zero, Quaternion.identity);
                }
            }
        }

        private void RegisterSpawner(SpawnerComponent spawner)
        {
            if (!Spawners.Contains(spawner))
            {
                Spawners.Add(spawner);
            }
            else
            {
                Debug.LogWarning($"OwnerSpawnerDictionary already contains: {spawner}");
            }
        }

        private void RegisterUnit(SpawnerComponent spawner, Unit unit)
        {
            if (!InstanceIDUnits.ContainsKey(unit.GetInstanceID()))
            {
                InstanceIDUnits.Add(unit.GetInstanceID(), unit);
            }
        }

        private void UnregisterUnit(SpawnerComponent spawner, Unit unit)
        {
            if (InstanceIDUnits.ContainsKey(unit.GetInstanceID()))
            {
                InstanceIDUnits.Remove(unit.GetInstanceID());
            }
        }
    }
}