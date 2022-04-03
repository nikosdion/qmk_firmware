/* Copyright 2021 wuquestudio
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

#include QMK_KEYBOARD_H

/* LAYOUT_75_ansi_split_rshift
 * ┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐
 * │00 ││01 │02 │03 │04 ││05 │06 │07 │08 ││09 │0a │0b │0c ││0d │
 * └───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐     ◯
 * │10 │11 │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ┌───┬───┐
 * │20   │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d   │ │2e │2f │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ ├───┼───┤
 * │30    │31 │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c      │ │3e │3f │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤ └───┴───┘
 * │40      │42 │43 │44 │45 │46 │47 │48 │49 │4a │4b │4c    │4d │ ┌───┐
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬┴───┘ │4e │
 * │50  │51  │52  │56                      │5a  │5b  │5c  │  ┌───┼───┼───┐
 * └────┴────┴────┴────────────────────────┴────┴────┴────┘  │5d │5e │5f │
 *                                                           └───┴───┴───┘
 */
#define LAYOUT_75_ansi_split_rshift_PAPANTZA( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D,    K53, K0E, K55,   \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,           \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,      K3E, K3F, \
    K40,      K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E,      \
    K50, K51, K52,                K56,                K5A, K5B, K5C, K5D, K5E, K5F  \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E,   KC_NO  }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   KC_NO, KC_NO  }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E,   K2F    }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   KC_NO, K3E,   K3F    }, \
    { K40,   KC_NO, K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   K4B,   K4C,   K4D,   K4E,   KC_NO  }, \
    { K50,   K51,   K52,   K53,   KC_NO, K55,   K56,   KC_NO, KC_NO, KC_NO, K5A,   K5B,   K5C,   K5D,   K5E,   K5F    }, \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_75_ansi_split_rshift_PAPANTZA(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_VOLD, KC_MUTE, KC_VOLU,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_HOME, KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                KC_END,  KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),        KC_UP,
        KC_LCTL, KC_LALT, KC_LGUI,                          KC_SPC,                               KC_RGUI, KC_RALT, KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_75_ansi_split_rshift_PAPANTZA(
        RESET,   KC_BRID, KC_BRIU, LAG(KC_SPC), KC_F13, LSG(KC_4), LSG(KC_5), KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_INS,  KC_MPRV, KC_MPLY, KC_MNXT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,
        DF(2),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,               _______, KC_SLEP,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      KC_PGUP,
        _______, _______, _______,                            _______,                            _______, _______, _______,      KC_HOME, KC_PGDN, KC_END
    ),
    [2] = LAYOUT_75_ansi_split_rshift_PAPANTZA(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_VOLD, KC_MUTE, KC_VOLU,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_HOME, KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                KC_END,  KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(3),        KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                               KC_RALT, KC_RGUI, KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [3] = LAYOUT_75_ansi_split_rshift_PAPANTZA(
        RESET,   KC_BRID, KC_BRIU, _______, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_INS,  KC_MPRV, KC_MPLY, KC_MNXT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,
        DF(0),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SYRQ,      KC_PSCR, KC_PAUS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,               KC_SCRL, KC_SLEP,
        _______,          KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_AGIN, KC_SLCT, _______, _______, _______, _______, _______, _______,      KC_PGUP,
        _______, _______, _______,                            _______,                            _______, KC_APP,  _______,      KC_HOME, KC_PGDN, KC_END
    ),
};
