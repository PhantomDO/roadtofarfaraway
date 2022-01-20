using System;
using Tools;
using Gameplay;
using UnityEngine;

namespace Managers
{
    public class GameManager : MonoSingleton<GameManager>
    {
        [field: SerializeField] public GenericDictionary<UnitType, UnitParameters> TypesParameters { get; private set; }
        [field: SerializeField] public Player Player { get; private set; }
        [field: SerializeField] public Spawner Spawner { get; private set; }

        private void Start()
        {
            if (Player == null)
            {
                Player = GameObject.FindObjectOfType<Player>();
                if (Player == null)
                {
                    GameObject go = new GameObject("Player", typeof(Player));
                    if (go.TryGetComponent(out Player player)) Player = player;
                }
            }

            if (Spawner == null)
            {
                Spawner = GameObject.FindObjectOfType<Spawner>();
                if (Player == null)
                {
                    GameObject go = new GameObject("Spawner", typeof(Spawner));
                    if (go.TryGetComponent(out Spawner spawner)) Spawner = spawner;
                }
            }
        }
    }
}