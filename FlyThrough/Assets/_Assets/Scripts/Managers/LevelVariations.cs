using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
using System.Collections.Generic;
public enum RingType{
    Static,Rotating
}
public class LevelVariations : MonoBehaviour ,IPooledObject {
    [SerializeField] private RingType ringType;

    [SerializeField] private float rotationSpeed;
    [SerializeField] private Transform newObstacleSpawnPoint;



    private void Update(){
        if(ringType == RingType.Rotating){
            transform.Rotate(Vector3.up * rotationSpeed * Time.deltaTime);
        }
    }
    
    public Transform GetNextObstacleSpawnPoint(){
        return newObstacleSpawnPoint;
    }
    public void DestroyMySelfWithDelay(float delay = 1f){
        Invoke(nameof(DestroyNow),delay);    
    }

    public void DestroyNow(){
        CancelInvoke(nameof(DestroyNow));
        gameObject.SetActive(false);
        transform.position = Vector3.zero;
    }

    public void OnObjectReuse(){
        gameObject.SetActive(true);
    }
    public RingType GetRing(){
        return ringType;
    }
    
}
