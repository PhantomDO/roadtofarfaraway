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
        [field: SerializeField] public List<SpawnerComponent> Spawners { get; private set; }

        protected override void Awake()
        {
            base.Awake();

            Spawners = new List<SpawnerComponent>();

            SpawnerComponent.OnRegisterSpawner += RegisterSpawner;
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
    }
}