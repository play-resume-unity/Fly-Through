using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
using System.Collections.Generic;
public class PlayerCollisiion : MonoBehaviour {
    private Pilot pilot;
    private void Start(){
        pilot = GetComponent<Pilot>();
    }
    private void OnCollisionEnter(Collision coli){
        if(coli.transform.GetComponent<Pilot>() == null){
            GameObject Effect = ObjectPoolingManager.current.SpawnFromPool("FireExplosion",coli.GetContact(0).point,Quaternion.FromToRotation(Vector3.up,coli.GetContact(0).normal));
            if(Effect.TryGetComponent<ParticleSystem>(out ParticleSystem _effect)){
                _effect.Play();
            }
            if(AudioManager.current != null){
                AudioManager.current.StopAudio(Sounds.SoundType.PlaneSound);
                AudioManager.current.PlayOneShotMusic(Sounds.SoundType.distructionSound1);
            }
            if(pilot != null){
                pilot.Oncollide();
            }
            MasterController.current.SetGameOver();
        }

    }
    
}
