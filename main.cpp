    
#include "constants.h"
#include "ui.h"
#include "servo.h"
#include <ax12.h>

// Prototypes
void scoop_shake();
void scoop_deliver();
void scoop_empty();
void servo_init();
void servo_goto(int pos);

// Global vars
int servo_pos;
bool b1;
bool b2;
bool b3;
bool bswitch;

void setup() {
    // UI Setup
    ui_init();
    ui_poll();
    
    // Init servo
    servo_init();
}

void loop() {
    // Wait on ui
    if(ui_poll()){
        if(bswitch == A){
            if(b1)
                servo_shake();
    
            else if(b2)
                servo_deliver();
    
            else if(b3)
                servo_empty();
        }
        else{
            if(b1)
                servo_goto(servo_pos + 15);
   
            else if(b2)
               servo_goto(servo_pos - 15);
        }
    }
}





