using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CodeExample : MonoBehaviour
{
    // declaration de variable public
    public int myVar;

    // declaration de variable private/protected
    private int _myPrivateVar;

    // au lieu d'utiliser des get/set utilisation de propriétés
    public int MyProperties { get; set; }

    protected int _properties;
    public int MyProperties2
    {
        get => _properties;
        protected set
        {
            _properties = value;
            // invoke event to give owners info when the var is updated
        }
    }

    // declaration de methode
    public void Method()
    {
        return;
    }
}
