using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class Pilot : MonoBehaviour {
    
    [Header("Fuel")]
    [SerializeField] private float maxFuelAmount;
    [SerializeField,Range(0f,10f)] private float reduceAmount;
    [SerializeField] private float pitchAmountMax;
    [SerializeField] private float yawAmount,rotaionSmoothTime;
    [SerializeField] private float moveSpeed;
    [SerializeField] private PlaneAnimationHandler animationHandler;
    private float _yaw,horizontalInput;


    private float currentFuelAmount;
    private Rigidbody rb;
    private PlayerInput playerInputs;
    private bool noFuel;
    private bool alreadyCalledGameOver;

    #region Events........
    public Action<float> OnFuelAmountChange;

    #endregion
    
    private void Awake(){
        rb = GetComponent<Rigidbody>();
    }
    private void Start(){
        playerInputs = PlayerInput.inputSystem;
        currentFuelAmount = maxFuelAmount;
    }
    public void ReduceFuelAmount(float reduceAmount){
        currentFuelAmount -= reduceAmount * Time.deltaTime;
        if(currentFuelAmount <= 0){
            noFuel = true;
            currentFuelAmount = 0;
        }
        OnFuelAmountChange?.Invoke(GetFuelAmountNormazlied());
    }
    public void IncreaseFuelAmount(float amount){
        currentFuelAmount += amount;
        if(currentFuelAmount >= maxFuelAmount){
            currentFuelAmount = maxFuelAmount;

        }
        OnFuelAmountChange?.Invoke(GetFuelAmountNormazlied());
    }
    private float GetFuelAmountNormazlied(){
        return currentFuelAmount/maxFuelAmount;
    }
    private void Update(){
        
        if(playerInputs.IsInputAvailable()){
            if(noFuel){
                moveSpeed -= 0.1f;
                if(!alreadyCalledGameOver){
                    Oncollide();
                    rb.AddTorque(transform.forward * 20f,ForceMode.Impulse);
                    MasterController.current.SetGameOver();
                    alreadyCalledGameOver = true;
                }
            }
            ReduceFuelAmount(reduceAmount);
            Vector3 moveDir = transform.forward * moveSpeed * Time.deltaTime;
            transform.position += moveDir;

            float vertical = playerInputs.GetForwardInput();
            horizontalInput = playerInputs.GetSideWaysInput();
            if(animationHandler != null){
                animationHandler.Turn(-playerInputs.GetSideWaysInput(),-playerInputs.GetForwardInput());
            }
            _yaw += horizontalInput * yawAmount * Time.deltaTime;
            float _pitch = Mathf.Lerp(0,pitchAmountMax,Mathf.Abs(vertical)) * -Mathf.Sign(vertical);

            float _roll = Mathf.Lerp(0,30,Mathf.Abs(horizontalInput)) * -Mathf.Sign(horizontalInput);            
            Quaternion currentRot = Quaternion.Euler(Vector3.up * _yaw + Vector3.right * _pitch + Vector3.forward * _roll);
            Quaternion smoothRot = Quaternion.Slerp(transform.localRotation,currentRot,rotaionSmoothTime *  Time.deltaTime);
            transform.localRotation = smoothRot;
            
        }
        
    }
    public void Oncollide(){
        rb.useGravity = true;
        rb.freezeRotation = false;
    }
}
