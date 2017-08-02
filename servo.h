// === servo.h ===

// === EXT GLOBAL VARIABLES ===
extern int servo_pos;

// === MACROS ===
#define VIBRATOR_ON digitalWrite(pin_vibrator,HIGH)
#define VIBRATOR_OFF digitalWrite(pin_vibrator,LOW)

// === PUBLIC FUNCTIONS ===
void servo_goto(int pos);
//void servo_set_speed(int speed);
void servo_init();
void servo_shake();
void servo_deliver();
void servo_empty();
