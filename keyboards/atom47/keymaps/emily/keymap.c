#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _BL 0
#define _FN1 1
#define _FN2 2
#define KC_ KC_TRNS
#define _______ KC_TRNS
#define xxxxxxx KC_NO
#define KC_BL_S BL_STEP

#define FN1_ESC LT(_FN1, KC_ESC)
#define FN1_QUOT LT(_FN1, KC_QUOT)
#define FN2 MO(_FN2)
#define S___P__A__C___E KC_SPC
#define E___N__T__E___R KC_ENT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = LAYOUT(
  KC_TAB,		KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_BSPC,	KC_DEL,\
  FN1_ESC,		KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,				FN1_QUOT,  	\
  KC_LSFT,					KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_RSFT,	\
  KC_LCTL, KC_LALT, FN2,     KC_LGUI, E___N__T__E___R,  S___P__A__C___E,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT),	\

[_FN1] = LAYOUT(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_DEL,  _______,		\
  _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL,  KC_BSLS, _______,		\
  _______,					_______,	_______,	_______,	_______,	_______, _______,	_______,	KC_LBRC,	KC_RBRC,	KC_BSLS,	_______,	\
  _______, _______, _______, _______,  E___N__T__E___R,  S___P__A__C___E,  KC_HOME, _______, _______, KC_END),

[_FN2] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12, KC_F12, \
  _______, BL_TOGG, BL_STEP, BL_INC,  BL_DEC,  BL_BRTG, _______, _______, _______, _______,  _______, _______,		\
  _______,					RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,	_______,	_______,	RESET,	\
  _______,		_______,	_______,	_______,				_______, 				_______,				_______,	_______,	_______,	_______),	\

};

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // Turn capslock on
 	   	PORTE &= ~(1 << 6);


    } else {
        // Turn capslock off
    	PORTE |= (1 << 6);
    }
}
