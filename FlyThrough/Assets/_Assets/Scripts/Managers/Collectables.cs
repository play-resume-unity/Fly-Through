using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
using System.Collections.Generic;
public class Collectables : MonoBehaviour,IPooledObject {
    
    private void OnTriggerEnter(Collider coli){
        if(coli.TryGetComponent<Pilot>(out Pilot pilot)){
            Interact(pilot);
        }
    }
    protected virtual void Interact(Pilot _pilot){
        DestroyNow();
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
    
}
