
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Managers;
using Gameplay.Components;
using GameState;

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
        public delegate void DRegisterUnit(Unit unit);
        public static event DRegisterUnit OnRegisterUnit;

        public delegate void DUnregisterUnit(Unit unit);
        public static event DUnregisterUnit OnUnregisterUnit;

        [field: SerializeField] public UnitParameters Parameters { get; protected set; }

        public Outline Outline { get; protected set; }

        public HealthComponent Health { get; protected set; }
        public DamageComponent Damage { get; protected set; }
        public MovementComponent Movement { get; protected set; }
        public RadarComponent Radar { get; protected set; }

        private bool _isCursorHover = false;
        private bool _isCurrentlySelected = false;
        private Vector3 _cachedVelocity = Vector3.zero;

        protected virtual void Awake()
        {
            OnRegisterUnit?.Invoke(this);
            Player.OnHoverUnit += HoverUnit;
            Player.OnSelectUnit += SelectUnit;
            HealthComponent.OnDestroyUnit += DestroyUnit;

            CheckComponentOnUnit();

            if (Outline == null ) Outline = gameObject.AddComponent<Outline>();
            Outline.OutlineWidth = 0.0f;
            GameStateManager.OnGameStateChanged += OnGameStateChanged;
        }

        protected virtual void OnDestroy()
        {
            Player.OnHoverUnit -= HoverUnit;
            Player.OnSelectUnit -= SelectUnit;
            HealthComponent.OnDestroyUnit -= DestroyUnit;
            GameStateManager.OnGameStateChanged -= OnGameStateChanged;
        }
        
        protected virtual void HoverUnit(Unit hoverUnit)
        {
            _isCursorHover = this == hoverUnit;
            UpdateOutline();
        }

        protected virtual void SelectUnit(Unit selectedUnit)
        {
            _isCurrentlySelected = this == selectedUnit;
            UpdateOutline();
        }
        protected virtual void DestroyUnit(Unit unit)
        {
            if (this != unit) return;
            
            OnUnregisterUnit?.Invoke(this);
            Debug.Log($"{name} destroyed");
            Destroy(gameObject);
        }

        private void UpdateOutline()
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

        private void CheckComponentOnUnit()
        {
            if (TryGetComponent(out Outline outline)) Outline = outline;
            if (TryGetComponent(out HealthComponent healthComponent)) Health = healthComponent;
            if (TryGetComponent(out DamageComponent damageComponent)) Damage = damageComponent;
            if (TryGetComponent(out MovementComponent movementComponent)) Movement = movementComponent;
            if (TryGetComponent(out RadarComponent radarComponent)) Radar = radarComponent;
        }
        
        public void OnGameStateChanged(GameState.GameState newGameState)
        {
            if (TryGetComponent<Rigidbody>(out var rb))
            {
                if (GameStateManager.Instance.CurrentGameState == GameState.GameState.Paused)
                {
                    _cachedVelocity = rb.velocity;
                    rb.isKinematic = true;
                }
                else
                {
                    rb.isKinematic = false;
                    rb.velocity = _cachedVelocity;
                }
            }
        }
    }
}