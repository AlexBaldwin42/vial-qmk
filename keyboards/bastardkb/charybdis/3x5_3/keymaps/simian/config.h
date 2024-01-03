/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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
#pragma once

#ifdef VIA_ENABLE
/* VIA configuration. */
#    define DYNAMIC_KEYMAP_LAYER_COUNT 16
#    ifdef VIAL_ENABLE
#        define VIAL_KEYBOARD_UID \
          { 0x44, 0x9f,  0x26, 0x53, 0xD9, 0x7B, 0x72,  0x4F }
#        define  VIAL_UNLOCK_COMBO_ROWS \
            { 0, 4 }
#        define VIAL_UNLOCK_COMBO_COLS \
            { 0, 0 }
#    endif // VIAL_ENABLE
#endif // VIA_ENABLE

/* Disable unused features. */
#define NO_ACTION_ONESHOT


#undef MASTER_RIGHT

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define POINTER_LAYER_TIMEOUT_MS 5500
#ifndef TAPPING_TERM

//#    define TAPPING_FORCE_HOLD
#    define TAPPING_TERM 140
#    ifndef TAPPING_TERM_PER_KEY
#    		define TAPPING_TERM_PER_KEY
#    endif
#    define PERMISSIVE_HOLD
//#    define IGNORE_MOD_TAP_INTERRUPT
#endif // TAPPING_TERM

/* Charybdis-specific features. */
#define CHARYBDIS_CONFIG_SYNC

#ifdef POINTING_DEVICE_ENABLE
#    define POINTING_DEVICE_RIGHT
// Automatically enable the pointer layer when moving the trackball.  See also:
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#    define CHARYBDIS_POINTER_ACCELERATION_ENABLE
#    undef POINTING_DEVICE_INVERT_X
#    define POINTING_DEVICE_INVERT_Y
#    define CHARYBDIS_DRAGSCROLL_REVERSE_Y
#    define CHARYBDIS_MINIMUM_DEFAULT_DPI 1000
#    define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 50
#    ifndef CHARYBDIS_MINIMUM_SNIPING_DPI
#        define CHARYBDIS_MINIMUM_SNIPING_DPI 200
#    endif  // CHARYBDIS_MINIMUM_SNIPER_MODE_DPI
#    ifndef CHARYBDIS_DRAGSCROLL_DPI
#        define CHARYBDIS_DRAGSCROLL_DPI 100
#    endif  // CHARYBDIS_DRAGSCROLL_DPI
#    ifndef CHARYBDIS_DRAGSCROLL_BUFFER_SIZE
#        define CHARYBDIS_DRAGSCROLL_BUFFER_SIZE 6
#    endif  // !CHARYBDIS_DRAGSCROLL_BUFFER_SIZE
#    ifndef CHARYBDIS_POINTER_ACCELERATION_FACTOR
#        define CHARYBDIS_POINTER_ACCELERATION_FACTOR 50
#    endif  // !CHARYBDIS_POINTER_ACCELERATION_FACTOR
#endif // POINTING_DEVICE_ENABLE

// Industrial encoder
#define ENCODER_RESOLUTION 2
//#define ENCODER_RESOLUTION 4
//#define ENCODER_DIRECTION_FLIP

/* RGB Matrix. */

#ifdef RGB_MATRIX_ENABLE
// Limit maximum brightness to keep power consumption reasonable, and avoid
// disconnects.
//#    undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
//#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100

// Rainbow swirl as startup mode.
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT

#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGN_MATRIX_KEYPRESSES

// Slow swirl at startup.
#    define RGB_MATRIX_STARTUP_SPD 32

// Startup values.
#    define RGB_MATRIX_STARTUP_HUE 0
#    define RGB_MATRIX_STARTUP_SAT 255
//#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_STARTUP_HSV RGB_MATRIX_STARTUP_HUE, RGB_MATRIX_STARTUP_SAT, RGB_MATRIX_STARTUP_VAL
#    define RGB_MATRIX_KEYREACTIVE_ENABLED
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_BAND_SAT
#    define ENABLE_RGB_MATRIX_BAND_VAL
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_DUAL_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    define ENABLE_RGB_MATRIX_RAINDROPS
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_HUE_BREATHING
#    define ENABLE_RGB_MATRIX_HUE_PENDULUM
#    define ENABLE_RGB_MATRIX_HUE_WAVE
#    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#    define ENABLE_RGB_MATRIX_PIXEL_RAIN
#    define ENABLE_RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_MULTISPLASH
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#    define RGB_MATRIX_STARTUP_HSV RGB_MATRIX_STARTUP_HUE, RGB_MATRIX_STARTUP_SAT, RGB_MATRIX_STARTUP_VAL
#    define SPLIT_LAYER_STATE_ENABLE
#endif // RGB_MATRIX_ENABLE
