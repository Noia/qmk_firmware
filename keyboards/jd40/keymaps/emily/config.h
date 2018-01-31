#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// place overrides here
#define TAPPING_TERM 175

#ifdef BACKLIGHT_ENABLE
  #define BACKLIGHT_BREATHING
#endif

#endif

#define KEYMAP_EMILY_VANAGON(\
	K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, \
	K13, K14, K15, K16, K17, K18, K19, K20, K21, K22, K23, \
	K24, K25, K26, K27, K28, K29, K30, K31, K32, K33, K34, \
	K35, K36, K37, K38, K39, K40, K41, K42, K43, K44 \
) { \
	{ K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12 }, \
	{ K13, K14, K15, K16, K17, K18, K19, K20, K21, K22, K23 }, \
	{ K24, K25, K26, K27, K28, K29, K30, K31, K32, K33, K34 }, \
	{ K35, K36, K37, K38, K39, KC_NO, K40, K41, K42, K43, K44 } \
}
