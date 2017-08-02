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
void ui_init();
int ui_poll();
