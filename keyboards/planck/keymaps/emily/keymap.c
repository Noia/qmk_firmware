/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "planck.h"
#include "action_layer.h"
#include "muse.h"

extern keymap_config_t keymap_config;

#define _BL 0
#define _FN1 1
#define _FN2 2
#define _ADJUST 3
#define KC_ KC_TRNS
#define _______ KC_TRNS
#define ______________ KC_TRNS
#define xxxxxxx KC_NO
#define KC_BL_S BL_STEP

#define FN_ESC LT(_FN1, KC_ESC)
#define FN1 LT(_FN1, KC_QUOT)
#define FN2 MO(_FN2)
#define S___P__A__C___E KC_SPC
#define E___N__T__E___R KC_ENT

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BL] = LAYOUT_planck_2x2u(
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		FN_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, FN1,
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
	//--------+--------+--------+--------+--------+--------.--------+--------+--------+--------+--------+--------+
		KC_LCTL, KC_LALT, FN2,     KC_LGUI, E___N__T__E___R,  S___P__A__C___E,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT),

	[_FN1] = LAYOUT_planck_2x2u(
  //--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_DEL,
  //--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		_______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL,  KC_BSLS, _______,
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		_______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, _______, _______,
	//--------+--------+--------+--------+--------+--------.--------+--------+--------+--------+--------+--------+
		_______, _______, _______, _______, ______________,   ______________,   KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

	[_FN2] = LAYOUT_planck_2x2u(
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
	  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		_______, BL_TOGG, BL_STEP, BL_INC,  BL_DEC,  BL_BRTG, _______, _______, _______, _______, _______, _______,
	//--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
		_______, RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _______, _______, RESET,
	//--------+--------+--------+--------+--------+--------.--------+--------+--------+--------+--------+--------+
		_______, _______, _______, _______, ______________,   ______________,   _______, _______, _______, _______),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Plover|      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_2x2u(
    _______, RESET,   DEBUG,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, _______,  _______, _______,  _______,  _______,
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, _______, _______, _______,
    _______, _______, _______, _______, ______________,   ______________,   _______, _______, _______, _______
)


};
