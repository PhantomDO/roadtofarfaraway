using System;
using System.Collections;
using System.Collections.Generic;
using Gameplay;
using Gameplay.UnitComponents;
using Managers;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class PlayerCanvasUI : MonoBehaviour
    {
        [field: SerializeField] public ScrollRect UnitSelectionScrollView { get; private set; }
        
        [field: SerializeField] public Image UnitInformationProfilePicture { get; private set; }
        [field: SerializeField] public Scrollbar UnitInformationHealthBar { get; private set; }
        [field: SerializeField] public Dropdown UnitInformationRadarSearchType { get; private set; }

        [SerializeField] private float healthBarLerpSpeed = 0.02f;
        
        private void Awake()
        {
            GameEventManager.OnUnitSelected += UnitSelected;
            GameEventManager.OnDamageUnit += UnitDamaged;
        }

        private void OnDestroy()
        {
            GameEventManager.OnUnitSelected -= UnitSelected;
            GameEventManager.OnDamageUnit -= UnitDamaged;
        }

        private void UnitDamaged(float damage, Unit damagedUnit)
        {
            if (GameManager.Instance && GameManager.Instance.Player)
            {
                if (GameManager.Instance.Player.SelectedUnit == damagedUnit && damagedUnit.TryGetComponent(out HealthComponent healthComponent))
                {
                    StartCoroutine(LerpHealthValue(healthComponent));
                }
            }
        }

        private void UnitSelected(Unit selectedUnit)
        {
            if (selectedUnit == null)
            {
                // cancel all the update and fade
            }

            if (selectedUnit.TryGetComponent(out HealthComponent health))
            {
                StartCoroutine(LerpHealthValue(health));
            }

            if (selectedUnit.TryGetComponent(out RadarComponent radar))
            {
                // set the current radar parameter, when the value change change it also on the unit
            }
        }

        private IEnumerator LerpHealthValue(HealthComponent healthComponent)
        {
            yield return new WaitForEndOfFrame();

            float newHealth = healthComponent.CurrentHealth / healthComponent.MaxHealth;
            float healthValueInProgress = UnitInformationHealthBar.value;

            while (UnitInformationHealthBar.value > newHealth)
            {
                healthValueInProgress = Mathf.Lerp(healthValueInProgress, newHealth, healthBarLerpSpeed);
                UnitInformationHealthBar.value = healthValueInProgress;
                yield return null;
            }
        }
    }
}