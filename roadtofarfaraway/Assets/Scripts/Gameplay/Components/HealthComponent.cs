using System;

namespace Gameplay.Components
{
    public class HealthComponent : CurrencyComponent<HealthComponent>
    {
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
                default:
                    throw new ArgumentOutOfRangeException(nameof(operation), operation, null);
            }

            return Current;
        }
    }
}