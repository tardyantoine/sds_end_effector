// === ui.cpp ===

#include "constants.h"
#include "ui.h"
#include "Arduino.h"

// === PRIVATE PROTOTYPES ===


// === PUBLIC FUNCTIONS ===
void ui_init(){
    pinMode(pin_b1,INPUT_PULLUP);
    pinMode(pin_b3,INPUT_PULLUP);
    pinMode(pin_b2,INPUT_PULLUP);
    pinMode(pin_switch,INPUT_PULLUP);
    pinMode(pin_green,OUTPUT);
    pinMode(pin_red,OUTPUT);
    pinMode(pin_vibrator,OUTPUT);
    ui_poll();
    GREEN_ON;
}

int ui_poll(){
    int ret = 0;
    b1 = !digitalRead(pin_b1);
    b2 = !digitalRead(pin_b2);
    b3 = !digitalRead(pin_b3);
    bswitch = digitalRead(pin_switch);

    if (b1 || b2 || b3){
        ret = 1;
        delay(300);
    }
    return ret;
}
