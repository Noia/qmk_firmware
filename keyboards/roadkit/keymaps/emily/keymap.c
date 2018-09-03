#include "roadkit.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _BL 0
#define _L1 1
#define _L2 2
#define _L3 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = ORTHO_BIG_ENTER(
      // +--------+--------+--------+--------+
          TO(0),   TO(1),   TO(2),   KC_F12,  \
      // +--------+--------+--------+--------+
          KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO,   KC_KP_ENTER, \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO
  ),
  [_L1] = ORTHO_BIG_ENTER(
      // +--------+--------+--------+--------+
          TO(0),   TO(1),   TO(2),   _______,  \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO,   KC_NO, \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO,   _______, \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO
  ),
  [_L2] = ORTHO_BIG_ENTER(
      // +--------+--------+--------+--------+
          TO(0),   TO(1),   TO(2),   _______,  \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO,   KC_NO, \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO,   _______, \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO
  ),
  [_L3] = ORTHO_BIG_ENTER(
      // +--------+--------+--------+--------+
          TO(0),   TO(1),   TO(2),   _______,  \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO,   KC_NO, \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO,   _______, \
      // +--------+--------+--------+--------+
          KC_NO,   KC_NO,   KC_NO
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    return true;
}
