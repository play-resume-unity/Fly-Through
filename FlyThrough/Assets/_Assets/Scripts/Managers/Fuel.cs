using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
using System.Collections.Generic;
public class Fuel : Collectables {
    [SerializeField] private float rotationSpeed;

    private void Update(){
        transform.Rotate(Vector3.up * rotationSpeed * Time.deltaTime);
    }
    protected override void Interact(Pilot _pilot){
        base.Interact(_pilot);
        GameObject EffectObj = ObjectPoolingManager.current.SpawnFromPool("FuelExplosion",transform.position,Quaternion.identity);
        if(EffectObj.TryGetComponent<ParticleSystem>(out ParticleSystem effect)){
            effect.Play();
        }
        _pilot.IncreaseFuelAmount(20);
    }
    
}
