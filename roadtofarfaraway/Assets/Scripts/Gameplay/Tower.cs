using System;
using System.Collections;
using Gameplay.Components;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Gameplay
{
    public class Tower : Unit
    {
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
        }

        private void Start()
        {
            StartCoroutine(SpawnAfterTime());
        }

        private IEnumerator SpawnAfterTime()
        {
            yield return null;

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
                var rdmValue = Mathf.Min(Random.Range(minInclusive, 100), 100);

                int minPercentage = 0;
                foreach (var percentSpawningType in PercentSpawningTypes)
                {
                    if (percentSpawningType.Key <= rdmValue && percentSpawningType.Key > minPercentage)
                    {
                        minPercentage = percentSpawningType.Key;
                    }
                }
                
                Debug.Log($"RDM : {rdmValue}, Spawning tower percentage : {minPercentage}, Type {PercentSpawningTypes[minPercentage]}");

                var rdmInUnitSphere = transform.position + Random.insideUnitSphere * radiusSpawn;
                rdmInUnitSphere.y = 0;

                Spawner.SpawnUnit(PercentSpawningTypes[minPercentage], rdmInUnitSphere);
                yield return _waitForNextSpawn;
            }
        }
    }
}