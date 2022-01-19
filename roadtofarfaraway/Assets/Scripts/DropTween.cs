using System.Collections;
using UnityEngine;

public class DropTween : MonoBehaviour
{
    private static float _timeOffset;
    public float scaleTime = 0.05f;
    private Vector3 _destination;

    private void Start()
    {
        var o = gameObject;
        var position = o.transform.position;
        _destination = position;
        position += new Vector3(0, 10, 0);
        o.transform.position = position;
        scaleTime += _timeOffset;
        _timeOffset += 0.01f;
        StartCoroutine(Grow());
    }

    private IEnumerator Grow()
    {
        Vector3 position = gameObject.transform.position;
        float currentTime = 0f;
        do
        {
            gameObject.transform.position = Vector3.Lerp(position, _destination, currentTime / scaleTime);
            currentTime += Time.deltaTime;
            yield return null;
        } while (currentTime <= scaleTime);
        gameObject.transform.position = _destination;
    }

    public static void IncreaseDropTime()
    {
        _timeOffset += 0.01f;
    }

    public static void ResetTime()
    {
        _timeOffset = 0f;
    }
}