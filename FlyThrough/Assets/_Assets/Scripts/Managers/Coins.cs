using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Coins : Collectables {
    
    protected override void Interact(Pilot _pilot){
        base.Interact(_pilot);
        MasterController.current.SetCoins(1);
    }
    
}
