#include "sweet16.h"

#define _BL 0
#define _L1 1
#define _L2 2
#define _L3 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_ortho_4x4(
        TO(0),  TO(1),  TO(2),  TO(3), \
        KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_LEFT,  KC_DOWN,  KC_UP,  KC_RIGHT, \
        KC_NO,  KC_HOME,  KC_END,  KC_ENT
    ),
    [_L1] = LAYOUT_ortho_4x4(
        TO(0),  TO(1),  TO(2),  TO(3), \
        KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT, \
        KC_NO,  KC_MSTP,  KC_MPLY,  KC_TRNS
    ),
    [_L2] = LAYOUT_ortho_4x4(
        TO(0),  TO(1),  TO(2),  TO(3), \
        KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_TRNS
    ),
    [_L3] = LAYOUT_ortho_4x4(
        TO(0),  TO(1),  TO(2),  TO(3), \
        KC_NO,  RGB_HUD,  RGB_HUI,  KC_NO, \
        RGB_RMOD,  RGB_VAD,  RGB_VAI,  RGB_MOD, \
        KC_NO,  KC_NO,  RGB_TOG,  KC_TRNS
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    return true;
}
