/* Copyright 2015-2023 Jack Humbert
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

enum planck_layers { _LAYER0, _LAYER1, _LAYER2, _LAYER3, _LAYER4, _LAYER5, _EMACSLAYER, _I3LAYER };

/*
enum planck_keycodes {LAYER0 = SAFE_RANGE, LAYER1, LAYER2, LAYER3, LAYER4, LAYER5, LAYER6, LAYER7 };
*/

bool allow_led_toggle = true;

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_LAYER0] = LAYOUT_planck_grid(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_ENT, TG(7), KC_LCTL, KC_LALT, KC_NO, MO(3), KC_SPC, KC_SPC, MO(4), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER1] = LAYOUT_planck_grid(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_UP, KC_ENT, TG(7), KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER2] = LAYOUT_planck_grid(KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_UP, KC_ENT, TG(7), KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_Z, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER3] = LAYOUT_planck_grid(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, LSFT(KC_NUHS), LSFT(KC_NUBS), KC_HOME, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

[_LAYER4] = LAYOUT_planck_grid(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

[_LAYER5] = LAYOUT_planck_grid(KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, TO(0), KC_NO, KC_NO, KC_C, KC_V, KC_NO, KC_NO, KC_N, KC_M, KC_NO, KC_NO, KC_NO),

[_EMACSLAYER] = LAYOUT_planck_grid(KC_NO, LCTL(KC_C), KC_NO, LCTL(KC_E), KC_NO, KC_NO, KC_NO, KC_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_A), LCTL(KC_S), KC_NO, LCTL(KC_F), KC_NO, KC_NO, KC_NO, LCTL(KC_K), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_X), KC_NO, KC_NO, MI_ON, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT),

[_I3LAYER] = LAYOUT_planck_grid(KC_NO, LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), LALT(KC_6), LALT(KC_7), LALT(KC_8), LALT(KC_9), LALT(KC_0), KC_NO, QK_BOOTLOADER, LALT(KC_Q), LALT(KC_ENT), LALT(KC_N), KC_NO, KC_NO, LALT(KC_H), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_V), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_UP), KC_ENT, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_LEFT), LALT(KC_DOWN), LALT(KC_RGHT))

};
/* clang-format on */

layer_state_t layer_state_set_user(layer_state_t state) {
  switch (get_highest_layer(state)){
    case _I3LAYER:
      if (LAYER_LIGHTS && allow_led_toggle){
	rgblight_enable();
	rgblight_setrgb(106,90,205);
      }
      break;
    default:
      rgblight_disable();
      break;
  }
  return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void keyboard_pre_init_user(){
  rgblight_disable();
  rgblight_setrgb(255,255,255);
}

void keyboard_post_init_user(){
}
