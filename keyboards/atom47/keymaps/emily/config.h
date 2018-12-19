#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../rev3/config.h"

// place overrides here
#define RGBLIGHT_ANIMATIONS

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

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(ONE_UP_SOUND)
#endif

#endif
