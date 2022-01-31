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
        public delegate void DDefeat();
        public static event DDefeat OnDefeat;

        public delegate void DWin();
        public static event DWin OnWin;

        [SerializeField] private Player playerPrefab;
        [field: SerializeField] public Player Player { get; private set; }
        [field: SerializeField] public GenericDictionary<UnitType, UnitParameters> TypesParameters { get; private set; }
        [field: SerializeField] public List<SpawnerComponent> Spawners { get; private set; }
        [field: SerializeField] public List<Tower> Towers { get; private set; }
        public Dictionary<int, Unit> InstanceIDUnits { get; private set; }

        private bool isMapLoaded = false;

        protected override void Awake()
        {
            base.Awake();

            Towers = new List<Tower>();
            Spawners = new List<SpawnerComponent>();
            InstanceIDUnits = new Dictionary<int, Unit>();

            MapVisualizer.OnMapLoaded += MapLoaded;
            SpawnerComponent.OnRegisterSpawner += RegisterSpawner;
            Unit.OnRegisterUnit += RegisterUnit;
            Unit.OnUnregisterUnit += UnregisterUnit;
        }

        private void OnDestroy()
        {
            SpawnerComponent.OnRegisterSpawner -= RegisterSpawner;
            Unit.OnRegisterUnit -= RegisterUnit;
            Unit.OnUnregisterUnit -= UnregisterUnit;
            MapVisualizer.OnMapLoaded -= MapLoaded;
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

        private void LateUpdate()
        {
            if (!isMapLoaded) return;

            // lose conditions
            if (Player.Spawner.SpawnedUnits.Count <= 0 && Player.Spawner.Money.Current <= 0)
            {
                OnDefeat?.Invoke();
                return;
            }

            // win conditions
            if (Player.Spawner.Money.Current >= 0 && Towers.Count <= 0)
            {
                OnWin?.Invoke();
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

        private void RegisterUnit(Unit unit)
        {
            int key = unit.GetInstanceID();
            if (!InstanceIDUnits.ContainsKey(key))
            {
                InstanceIDUnits.Add(key, unit);
                if (unit.Parameters.UnitType == UnitType.Tower)
                {
                    Towers.Add((Tower)unit);
                }
            }
        }

        private void UnregisterUnit(Unit unit)
        {
            int key = unit.GetInstanceID();
            if (InstanceIDUnits.ContainsKey(key))
            {
                InstanceIDUnits.Remove(key);
                if (unit.Parameters.UnitType == UnitType.Tower)
                {
                    Towers.Remove((Tower)unit);
                }
            }
        }
        private void MapLoaded()
        {
            if (!isMapLoaded) isMapLoaded = true;
        }
    }
}