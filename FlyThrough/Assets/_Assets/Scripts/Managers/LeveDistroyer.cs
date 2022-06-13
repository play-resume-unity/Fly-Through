using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LeveDistroyer : MonoBehaviour {
    
    [SerializeField] private LevelVariations varitions;

    
    private void OnTriggerExit(Collider coli){
        if(coli.TryGetComponent<Pilot>(out Pilot pilot)){
            if(MasterController.current.isGamePlaying){
                switch(varitions.GetRing()){
                    case RingType.Static:
                        pilot.IncreaseFuelAmount(5);
                        MasterController.current.SetCoins(10);

                    break;
                    case RingType.Rotating:
                        MasterController.current.SetCoins(20);
                        pilot.IncreaseFuelAmount(10);
                    break;
                }
                SpawnManager.current.InvokeSpawnNewSection();
                varitions.DestroyMySelfWithDelay(1);
            }
        }
    }
}
