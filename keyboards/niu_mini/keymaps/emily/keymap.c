#include "niu_mini.h"

#define _BL 0
#define _FN1 1
#define _FN2 2
#define KC_ KC_TRNS
#define _______ KC_TRNS
#define xxxxxxx KC_NO
#define KC_BL_S BL_STEP

#define FN_ESC LT(_FN1, KC_ESC)
#define FN1 LT(_FN1, KC_QUOT)
#define FN2 MO(_FN2)
#define S___P__A__C___E KC_SPC

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BL] = EMILY_ORTHO(
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		FN_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, FN1,
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
	//--------+--------+--------+--------+--------+--------.--------+--------+--------+--------+--------+--------+
		KC_LCTL, xxxxxxx, KC_LALT, KC_LGUI, KC_ENT,  S___P__A__C___E,  FN2,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT),

	[_FN1] = EMILY_ORTHO(
  //--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_DEL,
  //--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		_______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL,  KC_BSLS, _______,
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		_______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, _______, _______,
	//--------+--------+--------+--------+--------+--------.--------+--------+--------+--------+--------+--------+
		_______, _______, _______, _______, _______,     _______,      _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

	[_FN2] = EMILY_ORTHO(
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
	  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		_______, BL_TOGG, BL_STEP, BL_INC,  BL_DEC,  BL_BRTG, _______, _______, _______, _______, _______, _______,
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		_______, RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _______, _______, _______,
	//--------+--------+--------+--------+--------+--------.--------+--------+--------+--------+--------+--------+
		RESET, _______, _______, _______, _______,      _______,       _______, _______, _______, _______, _______),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

enum function_id {
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
  [0]  = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  static uint8_t shift_esc_shift_mask;
  switch (id) {
    case SHIFT_ESC:
      shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
      if (record->event.pressed) {
        if (shift_esc_shift_mask) {
          add_key(KC_GRV);
          send_keyboard_report();
        } else {
          add_key(KC_ESC);
          send_keyboard_report();
        }
      } else {
        if (shift_esc_shift_mask) {
          del_key(KC_GRV);
          send_keyboard_report();
        } else {
          del_key(KC_ESC);
          send_keyboard_report();
        }
      }
      break;
  }
}
