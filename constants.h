// constants.h | tardyantoine

// === FOR DEAN ===
// ================
#define NB_DELIVERIES 10
// ================

// Serial
#define BAUD 9600

// UI
#define A HIGH
#define B LOW
#define pin_b1 5
#define pin_b2 6
#define pin_b3 7
#define pin_switch 8
#define pin_green 9
#define pin_red 10
#define pin_vibrator 12
#define STEP 15		// Manual step size

// States (deprecated)
#define ST_SHAKE 1
#define ST_DELIVER 2        
#define ST_EMPTY 0
#define NB_STATES 3

// Servo
#define SERVO_ID  1
#define SERVO_SPEED 200
#define SERVO_POS_OFFSET 100
#define SERVO_POS_BLADE_OFFSET 30
#define SERVO_POS_CLOSED 840+SERVO_POS_OFFSET
#define SERVO_POS_OPENED SERVO_POS_CLOSED-SERVO_DELIVER_AMPLITUDE
#define SERVO_POS_EMPTYING 0+SERVO_POS_OFFSET

#define SERVO_EMPTY_OFFSET 30
#define SERVO_EMPTY_NB 3

#define SERVO_DELIVER_DELAY 2000  
#define SERVO_EMPTY_DELAY 100
#define SERVO_EMPTY_DELAY_LONG 2000

//============================================
// Test bench parameters (deprecated)
#define SERVO_SHAKE_TIME 4000
#define SERVO_SHAKE_NB 10 
#define SERVO_SHAKE_OFFSET 30
#define SERVO_SHAKE_DELAY 100  

#define SERVO_DELIVER_AMPLITUDE 48
#define SERVO_DELIVER_OFFSET 10
#define SERVO_DELIVER_SHAKE_DELAY 80
#define SERVO_DELIVER_NB 1 
//============================================


