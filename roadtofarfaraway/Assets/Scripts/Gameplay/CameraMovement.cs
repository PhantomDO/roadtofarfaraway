
using System;
using System.Collections;
using Controls;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(Camera))]
public class CameraMovement : MonoBehaviour
{
    [field: SerializeField] public Controls.CameraControls CameraControls { get; private set; }
    [field: SerializeField] public Controls.TouchControls TouchControls { get; private set; }
    
    private Camera _camera;
    public Camera Camera => _camera;

    [SerializeField] private AnimationCurve moveCurve;
    [SerializeField] private float moveSpeed = 5f;
    [SerializeField] private float zoomSpeed = 5f;
    [SerializeField] private float minZoomDistance = 5f;
    [SerializeField] private float maxZoomDistance = 25f;
    
    private Vector2 _movementAxis;
    private Vector2 _currentMovementAxis;

    private Coroutine _zoomCoroutine;

    private void Awake()
    {
        CameraControls = new CameraControls();
        TouchControls = new TouchControls();

        _camera = GetComponent<Camera>();
    }

    private void OnEnable()
    {
        if (CameraControls != null)
        {
            CameraControls.Enable();

            CameraControls.Camera.Movement.performed += PressMovement2DVector;
            CameraControls.Camera.Movement.canceled += PressMovement2DVector;
            
            CameraControls.Camera.Zoom.started += ZoomStart;
            CameraControls.Camera.Zoom.canceled += ZoomEnd;
        }

        if (TouchControls != null)
        {
            TouchControls.Enable();

            TouchControls.Touch.SecondaryTouchContact.started += ZoomStart;
            TouchControls.Touch.SecondaryTouchContact.canceled += ZoomEnd;
        }
    }

    private void OnDisable()
    {
        if (CameraControls != null)
        {
            CameraControls.Camera.Movement.performed -= PressMovement2DVector;
            CameraControls.Camera.Movement.canceled -= PressMovement2DVector;

            CameraControls.Camera.Zoom.started -= ZoomStart;
            CameraControls.Camera.Zoom.canceled -= ZoomEnd;

            CameraControls.Disable();
        }

        if (TouchControls != null)
        {
            TouchControls.Disable();

            TouchControls.Touch.SecondaryTouchContact.started -= ZoomStart;
            TouchControls.Touch.SecondaryTouchContact.canceled -= ZoomEnd;
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

    private void ZoomStart(InputAction.CallbackContext callbackContext)
    {
        _zoomCoroutine = StartCoroutine(ZoomDetection());
    }

    private void ZoomEnd(InputAction.CallbackContext callbackContext)
    {
        StopCoroutine(_zoomCoroutine);
    }

    private IEnumerator ZoomDetection()
    {
        float previousDistance = 0.0f;
        float distance = 0.0f;
        RaycastHit[] raycastHits = new RaycastHit[3];
        int size = 0;

        while (true)
        {
            Vector3 currentPosition = Camera.transform.position;
            Vector3 targetPosition = currentPosition;

            switch (SystemInfo.deviceType)
            {
                case DeviceType.Handheld:
                    distance = Vector2.Distance(TouchControls.Touch.PrimaryFingerPosition.ReadValue<Vector2>(),
                        TouchControls.Touch.SecondaryFingerPosition.ReadValue<Vector2>());

                    if (distance > previousDistance)
                    {
                        targetPosition -= Camera.transform.forward;
                        distance = -1;
                    }
                    else if (distance < previousDistance)
                    {
                        targetPosition += Camera.transform.forward;
                        distance = 1;
                    }

                    break;
                case DeviceType.Console:
                case DeviceType.Desktop:
                    distance = Mathf.Clamp(CameraControls.Camera.Zoom.ReadValue<float>(), -1, 1);

                    if (distance > previousDistance) targetPosition += Camera.transform.forward;
                    else if (distance < previousDistance) targetPosition -= Camera.transform.forward;

                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
            
            // Warning: Z is negative
            size = Physics.RaycastNonAlloc(currentPosition, Camera.transform.forward, raycastHits);
            for (int i = 0; i < size; i++)
            {
                var hitInfo = raycastHits[i];
                if (!hitInfo.collider.CompareTag("Ground")) continue;
                
                var slerp = Vector3.Slerp(currentPosition, targetPosition, Time.deltaTime * zoomSpeed);
                var offset = slerp - currentPosition;
                var overMinDistance = hitInfo.distance - offset.magnitude > minZoomDistance;
                var underMaxDistance = hitInfo.distance + offset.magnitude < maxZoomDistance;
                var dot = Vector3.Dot(Camera.transform.forward, offset.normalized);
                
                if (overMinDistance && dot > 0.0f)
                {
                    Camera.transform.position = slerp;
                }
                else if (underMaxDistance && dot < 0.0f)
                {
                    Camera.transform.position = slerp;
                }
            }

            previousDistance = distance;
            yield return null;
        }
    }
}
