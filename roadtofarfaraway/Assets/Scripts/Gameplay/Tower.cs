using System;
using System.Collections;
using System.Collections.Generic;
using Gameplay.Components;
using GameState;
using UnityEngine;
using UnityEngine.AI;
using Random = UnityEngine.Random;

namespace Gameplay
{
    public class Tower : Unit
    {
        [SerializeField] private List<GameObject> upgrades;
        [SerializeField] private GenericDictionary<int, Animator> tierAnimators;
        private readonly List<float> _healthTiers = new List<float>() { 100.0f, 150.0f, 200.0f };
        private static readonly int UpgradeTrigger = Animator.StringToHash("Upgrade");
        private int _currentTier;
        private Coroutine _spawningCoroutine;

        [field: SerializeField] public GenericDictionary<int, UnitType> PercentSpawningTypes { get; private set; }
        [field: SerializeField] public SpawnerComponent Spawner { get; private set; }

        [SerializeField] private float rateBetweenSpawn = .75f;
        [SerializeField] private float radiusSpawn = 10f;
        private WaitForSeconds _waitForNextSpawn;


        protected override void Awake()
        {
            base.Awake();

            _waitForNextSpawn = new WaitForSeconds(rateBetweenSpawn);

            if (Spawner == null)
            {
                foreach (Transform child in transform)
                {
                    if (child.TryGetComponent(out SpawnerComponent spawner))
                    {
                        Spawner = spawner;
                        break;
                    }
                }
            }
            
            _currentTier = 0;
        }


        private void Start()
        {
            Health?.UpdateCurrency(_healthTiers[_currentTier], CurrencyOperation.Define);
            _spawningCoroutine = StartCoroutine(SpawnAfterTime());
        }

        private IEnumerator SpawnAfterTime()
        {
            yield return _waitForNextSpawn;

            if (PercentSpawningTypes.Count <= 0) yield break;
            
            int minInclusive = 100;
            foreach (var percentSpawningType in PercentSpawningTypes)
            {
                if (percentSpawningType.Key <= minInclusive)
                {
                    minInclusive = percentSpawningType.Key;
                }
            }

            while (Spawner.Money.Current > 0.0f)
            {
                while (GameStateManager.Instance?.CurrentGameState == GameState.GameState.Paused)
                    yield return null;
                var rdmValue = Mathf.Min(Random.Range(minInclusive, 100), 100);

                int minPercentage = 0;
                foreach (var percentSpawningType in PercentSpawningTypes)
                {
                    if (percentSpawningType.Key <= rdmValue && percentSpawningType.Key > minPercentage)
                    {
                        minPercentage = percentSpawningType.Key;
                    }
                }
                
                //Debug.Log($"RDM : {rdmValue}, Spawning tower percentage : {minPercentage}, Parameters {PercentSpawningTypes[minPercentage]}");

                var randomSphere = Random.insideUnitSphere * radiusSpawn;
                randomSphere.y = 0;
                randomSphere.z = Mathf.Abs(randomSphere.z);
                var rdmInUnitSphere = Spawner.LaunchTransform.position + Spawner.LaunchTransform.forward + randomSphere;

                Spawner.SpawnUnit(PercentSpawningTypes[minPercentage], rdmInUnitSphere);
                //Debug.LogWarning($"Wait next spawn..");
                yield return _waitForNextSpawn;
            }
        }

        public void Upgrade()
        {
            upgrades[_currentTier].SetActive(false);
        
            if (_currentTier >= 0 && _currentTier + 1 == upgrades.Count) return;
        
            _currentTier++;

            Health?.UpdateCurrency(_healthTiers[_currentTier], CurrencyOperation.Define);
        
            upgrades[_currentTier].SetActive(true);
            
            tierAnimators[_currentTier].SetTrigger(UpgradeTrigger);

            StartCoroutine(Something(tierAnimators[_currentTier]));
        }

        private IEnumerator Something(Animator animator)
        {
            yield return null;

            var stateInfo = animator.GetCurrentAnimatorStateInfo(0);
            if (TryGetComponent(out NavMeshSurface surface))
            {
                yield return new WaitUntil(() => stateInfo.length > stateInfo.normalizedTime);
                surface.BuildNavMesh();
            }
        }
    }
}