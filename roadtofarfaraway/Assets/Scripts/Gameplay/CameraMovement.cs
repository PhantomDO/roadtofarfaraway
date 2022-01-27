
using System;
using Controls;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Controls;

public class CameraMovement : MonoBehaviour
{
    [field: SerializeField] public Controls.CameraControls CameraControls { get; private set; }

    [SerializeField] private AnimationCurve moveCurve;
    [SerializeField] private float moveSpeed = 5f;
    [SerializeField] private float minZoomDistance;
    [SerializeField] private float maxZoomDistance;
    
    private Vector2 _movementAxis;
    private Vector2 _currentMovementAxis;

    private void Awake()
    {
        CameraControls = new CameraControls();
    }

    private void OnEnable()
    {
        if (CameraControls != null)
        {
            CameraControls.Enable();
            CameraControls.Camera.Movement.performed += PressMovement2DVector;
            CameraControls.Camera.Movement.canceled += PressMovement2DVector;
        }
    }

    private void OnDisable()
    {
        if (CameraControls != null)
        {
            CameraControls.Camera.Movement.performed -= PressMovement2DVector;
            CameraControls.Camera.Movement.canceled -= PressMovement2DVector;
            CameraControls.Disable();
        }
    }

    private void Update()
    {
        var frameMoveSpeed = moveSpeed * Time.fixedDeltaTime;
        _currentMovementAxis = Vector2.MoveTowards(_currentMovementAxis, _movementAxis, frameMoveSpeed);

        var currentPosition = transform.position;
        var nextPosition = currentPosition + (new Vector3(_movementAxis.x, 0, _movementAxis.y) * frameMoveSpeed);
        transform.position = Vector3.Lerp(currentPosition, nextPosition, moveCurve.Evaluate(_currentMovementAxis.magnitude / 2));
    }

    private void PressMovement2DVector(InputAction.CallbackContext callbackContext)
    {
        _movementAxis = callbackContext.ReadValue<Vector2>();
    }
}
