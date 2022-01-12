/*
Copyright 2021 Sleepdealer

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6AE4
#define PRODUCT_ID      0xE349
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jing
#define PRODUCT         JingTKL

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9
/*                        0   1   2   3   4   5   6   7   8   9   10  11 */
#define MATRIX_ROW_PINS { B0, B1, B3, B7, B6, F5, F6, F7, D4, D3, D1, D0}
#define MATRIX_COL_PINS { B4, D7, D6, E6, F0, F1, F4, D5, D2 }
#define UNUSED_PINS


#define VIAL_KEYBOARD_UID {0xE1, 0x14, 0xD1, 0xEA, 0x78, 0x43, 0xF2, 0x4D}

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define LED_CAPS_LOCK_PIN B5
#define LED_SCROLL_LOCK_PIN B2


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
