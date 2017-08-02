// === servo.cpp ===

#include "constants.h"
#include "servo.h"
#include <ax12.h>
#include "ui.h"
#include "Arduino.h"


// === PRIVATE PROTOTYPES ===


// === PUBLIC FUNCTIONS ===
// Sends servo to pos, between 0 and 1023
void servo_goto(int pos){
    writeData (SERVO_ID, AX_GOAL_POSITION_L, 2, pos);
    servo_pos = pos;
}

// NEEDED
 /*
void servo_set_speed(int speed){
    writeData (SERVO_ID, AX_GOAL_SPEED_L, 2, speed);
}*/

void servo_init(){
    RED_ON;
    ax12Init (115200);
    writeData (SERVO_ID, AX_TORQUE_ENABLE, 1, 1);       // Init servo
    servo_goto(SERVO_POS_CLOSED);
    VIBRATOR_OFF;
    RED_OFF;
}

void servo_shake(){
    RED_ON;
    int i=0;
    VIBRATOR_ON;
    delay(SERVO_SHAKE_TIME);
    VIBRATOR_OFF;
    RED_OFF;
}

void servo_deliver(){
    RED_ON;
    //VIBRATOR_ON;
    int i=0;
    for (i=0 ; i<NB_DELIVERIES ; ++i){
        servo_goto(SERVO_POS_OPENED-SERVO_POS_BLADE_OFFSET);   // Go far enough for the circular blade to get off the groove 
        delay(SERVO_DELIVER_DELAY/3);
        servo_goto(SERVO_POS_OPENED);                 // Move back to contact blade-grove 
        delay(SERVO_DELIVER_DELAY/3);
        VIBRATOR_ON;    
        delay(SERVO_DELIVER_DELAY*1.5);
        VIBRATOR_OFF;
        delay(SERVO_DELIVER_DELAY/3);
        //VIBRATOR_ON;
        servo_goto(SERVO_POS_CLOSED);
        delay(SERVO_DELIVER_DELAY/2);
        VIBRATOR_OFF; 
    }
    RED_OFF;
}

void servo_empty(){
    RED_ON;
    VIBRATOR_ON;
    servo_goto(SERVO_POS_EMPTYING);
    delay(2*SERVO_EMPTY_DELAY_LONG);
    servo_goto(SERVO_POS_CLOSED);
    delay(SERVO_EMPTY_DELAY_LONG);
    VIBRATOR_OFF;
    RED_OFF;
}
