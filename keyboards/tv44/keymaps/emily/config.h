#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// place overrides here
#ifdef BACKLIGHT_ENABLE
    #define BACKLIGHT_PIN B7
    #define BACKLIGHT_LEVELS 7
    #define BACKLIGHT_BREATHING
#endif
#endif
