using System;
using System.Collections;
using System.Collections.Generic;
using Gameplay;
using Gameplay.Components;
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
            Player.OnSelectUnit += UnitSelected;
            HealthComponent.OnCurrencyUpdate += HealthUpdate;
            
            if (UnitInformationRadarSearchType != null)
            {
                var optionNames = new List<string>();
                foreach (var name in Enum.GetNames(typeof(SearchingMethod)))
                {
                    optionNames.Add(name);
                }

                UnitInformationRadarSearchType.ClearOptions();
                UnitInformationRadarSearchType.AddOptions(optionNames);
                UnitInformationRadarSearchType.interactable = false;
            }
        }

        private void OnDestroy()
        {
            Player.OnSelectUnit -= UnitSelected;
            HealthComponent.OnCurrencyUpdate -= HealthUpdate;
        }

        private void HealthUpdate(HealthComponent healthComponent, float update)
        {
            if (GameManager.Instance?.Player?.SelectedUnit?.Health == healthComponent)
            {
                StartCoroutine(LerpHealthValue(healthComponent));
            } 
        }

        private void UnitSelected(Unit selectedUnit)
        {
            if (selectedUnit == null)
            {
                // cancel all the update and fade
                UnitInformationHealthBar.value = 1;
                UnitInformationProfilePicture.sprite = null;
                UnitInformationRadarSearchType.onValueChanged.RemoveAllListeners();
                return;
            }

            UnitInformationProfilePicture.sprite = selectedUnit.ProfilePicture;

            if (selectedUnit.Health != null)
            {
                StartCoroutine(LerpHealthValue(selectedUnit.Health));
            }

            if (selectedUnit.Radar != null)
            {
                // set the current radar parameter, when the value change change it also on the unit
                UnitInformationRadarSearchType.value = (int)selectedUnit.Radar.SearchingMethod;
                UnitInformationRadarSearchType.interactable = selectedUnit.CompareTag("Allies");
                if (UnitInformationRadarSearchType.interactable)
                {
                    UnitInformationRadarSearchType.onValueChanged.AddListener(RadarSearchingChange);
                }
            }
        }

        private void RadarSearchingChange(int val)
        {
            var selectedUnit = GameManager.Instance?.Player?.SelectedUnit;
            if (selectedUnit?.Radar != null)
            {
                GameManager.Instance.Player.SelectedUnit.Radar.SearchingMethod = (SearchingMethod) val;
            }
        }

        private IEnumerator LerpHealthValue(HealthComponent healthComponent)
        {
            yield return new WaitForEndOfFrame();

            float newHealth = healthComponent.CurrentPercent;
            float healthValueInProgress = UnitInformationHealthBar.value;

            while (UnitInformationHealthBar.value > newHealth)
            {
                healthValueInProgress = Mathf.Lerp(healthValueInProgress, newHealth, healthBarLerpSpeed);
                UnitInformationHealthBar.value = healthValueInProgress;
                yield return null;
            }

            yield break;
        }
        
    }
}