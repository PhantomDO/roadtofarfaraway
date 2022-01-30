using System;

namespace Gameplay.Components
{
    public class MoneyComponent : CurrencyComponent<MoneyComponent>
    {
        public bool HasEnoughCurrency(float cost) => (Current - cost) >= 0;
        
        public override float UpdateCurrency(float val, CurrencyOperation operation)
        {
            switch (operation)
            {
                case CurrencyOperation.Increase:
                    Current += val;
                    break;
                case CurrencyOperation.Decrease:
                    if (HasEnoughCurrency(val))
                    {
                        Current -= val;
                    }
                    break;
                case CurrencyOperation.Define:
                    Current = max = val;
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(operation), operation, null);
            }

            return Current;
        }
    }
}