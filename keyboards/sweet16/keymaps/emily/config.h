#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// place overrides here
#define TAPPING_TERM 175

#ifdef RGB_DI_PIN
#ifdef RGBLED_NUM
#undef RGBLED_NUM
#endif
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
