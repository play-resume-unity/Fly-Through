using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneAnimationHandler : MonoBehaviour {
   
    private Animator animator;


    private void Awake(){
        animator = GetComponent<Animator>();
    }


    public void Turn(float horizontal,float vertical){
        animator.SetFloat("Turn",horizontal);
        animator.SetFloat("Flap",vertical);
    }
    
}
