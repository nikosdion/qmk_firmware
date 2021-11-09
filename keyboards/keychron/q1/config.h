/* Copyright 2021 @ Keychron(https://www.keychron.com)
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


/* USB Device descriptor parameter */
// Changed the USB Vendor ID (VID) and Product ID (PID) to pretend this is an Apple keyboard
// See: https://github.com/qmk/qmk_firmware/issues/2179#issuecomment-569851038
// I used the PID of the Apple Aluminium Keyboard (ISO) to trick macOS into giving me the same shortcuts
// See: https://elixir.bootlin.com/linux/latest/source/drivers/hid/hid-ids.h#L93
#define VENDOR_ID       0x05AC
#define PRODUCT_ID      0x0250

//#define VENDOR_ID       0x3434
#define MANUFACTURER    Keychron
#define PRODUCT         Keychron Q1

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* RGB Matrix Driver Configuration */
#define DRIVER_COUNT 2
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1011111

/* DIP switch */
#define DIP_SWITCH_MATRIX_GRID  { {0,1} }

/* Disable DIP switch in matrix data */
#define MATRIX_MASKED

/* NKRO */
//#define FORCE_NKRO

// Enable Apple fn key support
#define APPLE_FN_ENABLE

/* Disable a single effect */
#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_VAL
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_HUE_BREATHING
#define DISABLE_RGB_MATRIX_HUE_PENDULUM
#define DISABLE_RGB_MATRIX_HUE_WAVE
