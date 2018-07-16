#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// place overrides here
#define TAPPING_TERM 175

#ifdef BACKLIGHT_ENABLE
  #define BACKLIGHT_BREATHING
#endif

//#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/


//#define MIDI_BASIC

#define EMILY_ORTHO( \
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
    K300, K301, K302, K303, K304,    K305,    K307, K308, K309, K310, K311  \
) { \
    { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111 }, \
    { K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211 }, \
    { K300,  K301,  K302,  K303,  K304,  K305,  K305,  K307,  K308,  K309,  K310,  K311 }  \
}

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(ONE_UP_SOUND)
#endif

#endif
