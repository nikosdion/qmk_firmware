/*
Base Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>
Modified 2017 Andrew Novak <ndrw.nvk@gmail.com>
Modified 2018 Wayne Jones (WarmCatUK) <waynekjones@gmail.com>

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

// Changed the USB Vendor ID (VID) and Product ID (PID) to pretend this is an Apple keyboard
// See: https://github.com/qmk/qmk_firmware/issues/2179#issuecomment-569851038
// I used the PID of the Apple Aluminium Keyboard (ANSI) to trick macOS into giving me the same shortcuts
// See: https://elixir.bootlin.com/linux/latest/source/drivers/hid/hid-ids.h#L93
//#define VENDOR_ID       0x20A0
//#define PRODUCT_ID      0x422D
#define VENDOR_ID       0x05AC
#define PRODUCT_ID      0x024F

#define MANUFACTURER    YMDK
// Changed the USB Product string to a custom version
//#define PRODUCT         YMD75 / MT84
#define PRODUCT         YMD75 (Apple Mod)

#define BACKLIGHT_LEVELS 12

#define LED_CAPS_LOCK_PIN D1

#define RGB_DI_PIN E2
#define RGBLED_NUM 16
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 12
#define RGBLIGHT_SAT_STEP 15
#define RGBLIGHT_VAL_STEP 18
#define DYNAMIC_KEYMAP_LAYER_COUNT 3

// Enable Apple fn key support
#define APPLE_FN_ENABLE
