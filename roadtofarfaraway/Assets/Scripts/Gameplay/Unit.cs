
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Managers;
using Gameplay.UnitComponents;

namespace Gameplay
{
    public enum UnitType : int
    {
        Null = -1,
        Shrek = 0,
        Donkey = 1,
        Fiona = 2,
        Dragon = 3,
        // More to come
    }

    public class Unit : MonoBehaviour
    {
        [field: SerializeField] public UnitType Type { get; private set; }
        [field: SerializeField] public Sprite ProfilePicture { get; private set; }
    }
}