
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
        [field: SerializeField] public Outline Outline { get; protected set; }

        private bool _isCursorHover = false;
        private bool _isCurrentlySelected = false;

        protected virtual void Awake()
        {
            SpawnerComponent.OnRegisterUnit += RegisterUnit;
            SpawnerComponent.OnUnregisterUnit += UnregisterUnit;
            Player.OnHoverUnit += HoverUnit;
            Player.OnSelectUnit += SelectUnit;

            if (Outline == null )
            {
                if (TryGetComponent(out Outline outline)) Outline = outline;
                if (Outline == null) Outline = gameObject.AddComponent<Outline>();
            }

            Outline.OutlineWidth = 0.0f;
        }

        private void Update()
        {
            switch (_isCurrentlySelected)
            {
                case true:
                    Outline.OutlineColor = Color.red;
                    Outline.OutlineWidth = 10.0f;
                    break;
                case false when _isCursorHover:
                    Outline.OutlineColor = Color.green;
                    Outline.OutlineWidth = 10.0f;
                    break;
                case false when !_isCursorHover:
                    Outline.OutlineColor = Color.white;
                    Outline.OutlineWidth = 0.0f;
                    break;
            }
        }

        protected virtual void OnDestroy()
        {
            SpawnerComponent.OnRegisterUnit -= RegisterUnit;
            SpawnerComponent.OnUnregisterUnit -= UnregisterUnit;
            Player.OnHoverUnit -= HoverUnit;
            Player.OnSelectUnit -= SelectUnit;
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
        
        protected void HoverUnit(Unit hoverUnit)
        {
            _isCursorHover = this == hoverUnit;
        }

        protected void SelectUnit(Unit selectedUnit)
        {
            _isCurrentlySelected = this == selectedUnit;
        }
    }
}