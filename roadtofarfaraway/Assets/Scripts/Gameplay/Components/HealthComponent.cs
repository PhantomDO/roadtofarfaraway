using System;

namespace Gameplay.Components
{
    public class HealthComponent : CurrencyComponent<HealthComponent>
    {
        public delegate void DDestroyUnit(Unit unit);
        public static event DDestroyUnit OnDestroyUnit;

        public float CurrentPercent => Current / max;
        
        public override float UpdateCurrency(float val, CurrencyOperation operation)
        {
            switch (operation)
            {
                case CurrencyOperation.Increase:
                    Current += val;
                    break;
                case CurrencyOperation.Decrease:
                    Current -= val;
                    break;
                case CurrencyOperation.Define:
                    Current = max = val;
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(operation), operation, null);
            }

            return Current;
        }

        private void OnEnable()
        {
            OnCurrencyUpdate += CurrencyUpdate;
        }

        private void OnDisable()
        {
            OnCurrencyUpdate -= CurrencyUpdate;
        }

        private void CurrencyUpdate(HealthComponent component, float update)
        {
            if (component == this)
            {
                if (Current <= 0.0f && TryGetComponent(out Unit unit))
                {
                    OnDestroyUnit?.Invoke(unit);
                }
            }
        }
    }
}