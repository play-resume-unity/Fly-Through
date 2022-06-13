using UnityEngine;
using GamerWolf.Utils;
[DefaultExecutionOrder(-1)]
public class PlayerInput : MonoBehaviour {
    [SerializeField] private Joystick joyStick;
    [SerializeField] private bool inputEnable = true,onPc = true;


    public static PlayerInput inputSystem;

    private void Awake(){
        inputSystem = this;
    }
    private void Start(){
        // #if UNITY_EDITOR
        //     onPc = true;
        // #else
        //     onPc = false;
        // #endif
        if(AudioManager.current != null){
            AudioManager.current.PlayMusic(Sounds.SoundType.BGM);
        }
    }
    public float GetSideWaysInput(){
        
        float horizontalAmount = 0f;
        if(inputEnable){
            if(onPc){
                horizontalAmount = Input.GetAxis("Horizontal");
            }else{
                horizontalAmount = joyStick.Horizontal;
            }
        }
        return horizontalAmount;
    }
    public float GetForwardInput(){
        float verticalAmount = 0f;
        if(inputEnable){
            if(onPc){
                verticalAmount = Input.GetAxis("Vertical");
            }else{
                verticalAmount = joyStick.Vertical;
            }
        }
        return verticalAmount;
    }
    

    public void ToggleInput(bool value){
        inputEnable = value;
        if(inputEnable){
            if(AudioManager.current != null){
                AudioManager.current.StopAudio(Sounds.SoundType.BGM);
                AudioManager.current.PlayMusic(Sounds.SoundType.PlaneSound);
            }
        }
    }
    public bool IsInputAvailable(){
        return inputEnable;
    }
    
}
