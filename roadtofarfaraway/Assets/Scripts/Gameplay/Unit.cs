
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Managers;
using Gameplay.Components;

namespace Gameplay
{
    public enum UnitType : int
    {
        Null = -1,
        Shrek = 0,
        Donkey = 1,
        Fiona = 2,
        Dragon = 3,
        Tower = 4,
        LowEnnemy = 5,
        HighEnnemy = 6,
        // More to come
    }

    public class Unit : MonoBehaviour
    {
        [field: SerializeField] public UnitType Type { get; protected set; }
        [field: SerializeField] public Sprite ProfilePicture { get; protected set; }

        protected virtual void Awake()
        {
            SpawnerComponent.OnRegisterUnit += RegisterUnit;
            SpawnerComponent.OnUnregisterUnit += UnregisterUnit;
        }

        protected virtual void OnDestroy()
        {
            SpawnerComponent.OnRegisterUnit -= RegisterUnit;
            SpawnerComponent.OnUnregisterUnit -= UnregisterUnit;
        }

        protected virtual void RegisterUnit(SpawnerComponent spawner, Unit unit)
        {
            if (this != unit) return;
            Debug.Log($"{unit.name} spawned from {spawner.name}");
        }

        protected virtual void UnregisterUnit(SpawnerComponent spawner, Unit unit)
        {
            if (this != unit) return;
            Debug.Log($"{unit.name} destroyed from {spawner.name}");
            Destroy(gameObject);
        }
    }
}