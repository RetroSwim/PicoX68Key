// Uncomment to print messages to stdio
// #define DEBUG
#define USBKEY_PRESSED  1
#define USBKEY_HELD     2
#define USBKEY_RELEASED 4

#define SUBBOARD_LED_KANA      0x01
#define SUBBOARD_LED_CAPS      0x02
#define SUBBOARD_LED_ROMAN     0x04
#define SUBBOARD_LED_INS       0x08
#define SUBBOARD_LED_HIRAGANA  0x10
#define SUBBOARD_LED_CHORD     0x20
#define SUBBOARD_LED_WIDE      0x40
#define SUBBOARD_LED_STATUS    0x80

#define SHARP_LED_KANA         0x01
#define SHARP_LED_ROMAN        0x02
#define SHARP_LED_CHORD        0x04
#define SHARP_LED_CAPS         0x08
#define SHARP_LED_INS          0x10
#define SHARP_LED_HIRAGANA     0x20
#define SHARP_LED_WIDE         0x40
#define SHARP_LED_STATUS       0x80


// Camel case in my new code
void handleKey(uint8_t keycode, uint8_t state);
void handleMouse(uint8_t buttons, int8_t x, int8_t y);
void setSpecial(bool enabled);
uint8_t sharpToSubBoard(uint8_t led_mask);

// Debugging tools
void ledOn(bool isOn);
void littleBlink();

// This case used in hid_app.c to keep style consistent
void set_leds(uint8_t led_mask);
