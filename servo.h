// === servo.h ===

// === EXT GLOBAL VARIABLES ===
extern int servo_pos;

// === MACROS ===
// Commanding the mosfett interruptor
#define VIBRATOR_ON digitalWrite(pin_vibrator,HIGH)
#define VIBRATOR_OFF digitalWrite(pin_vibrator,LOW)

// === PUBLIC FUNCTIONS ===
/** \brief Send a pos command on Serial
*/
void servo_goto(int pos);

/** \brief Init the servo and vibrator, sets it to closed pos
*/
void servo_init();

/** \brief Shake state function
*/
void servo_shake();

/** \brief Delivery state function
*/
void servo_deliver();

/** \brief Empty state function
*/
void servo_empty();


//void servo_set_speed(int speed);

