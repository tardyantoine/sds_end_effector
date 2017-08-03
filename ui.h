// === ui.h ===

// === EXT GLOBAL VARIABLES ===
extern bool b1;
extern bool b2;
extern bool b3;
extern bool bswitch;

// === MACROS ===
#define GREEN_ON digitalWrite(pin_green,HIGH)
#define GREEN_OFF digitalWrite(pin_green,LOW)
#define RED_ON digitalWrite(pin_red,HIGH)
#define RED_OFF digitalWrite(pin_red,LOW)

// === PUBLIC FUNCTIONS ===

/** \brief Init the UI shield pins
*/
void ui_init();

/** \brief Poll the 4 buttons, return 0 if nothing, or button number
*
*	Not using interrupts, as the UNO has only 2 interrupt pins, and no computation
* 	done in loop
*/
int ui_poll();
