/* Copyright 2015-2017 Jack Humbert
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
// #include "muse.h"

enum uud73_layers {
  _DVORAK,
  _QWERTY,
  _LOWER,
  _RAISE
};

enum uud73_keycodes {
  DVORAK = SAFE_RANGE,
  QWERTY,
  LOWER,
  RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    /* DVORAK
    * .--------------------------------------------------------------------------------------------------------------------------------------.
    * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
    * | TAB    | '      | ,      | .      | P      | Y      | [      | \      | ]      | F      | G      | C      | R      | L      | /      |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
    * | CAP LK | A      | O      | E      | U      | I      | HOME   | DEL    | PG UP  | D      | H      | T      | N      | S      | ENTER  |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
    * | LSHIFT | ;      | Q      | J      | K      | X      | END    | up     | PG DN  | B      | M      | W      | V      | Z      | RSHIFT |
    * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
    * | LCTRL  | LGUI   | LALT   | FN     |      SPACE      | LEFT   | DOWN   | RIGHT  |      SPACE      | FN     | RALT   | MENU   | RCTRL  |
    * '--------------------------------------------------------------------------------------------------------------------------------------'
    */

	[_DVORAK] = LAYOUT_uud73_grid(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_GRV,  KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_LBRC, KC_BSLS, KC_RBRC, KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
        KC_CAPS, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_HOME, KC_DEL,  KC_PGUP, KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT, 
        KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_END,  KC_UP,   KC_PGDN, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, TT(2),   KC_SPC,  KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_SPC,  TT(3),   KC_RALT, KC_APP,  KC_RCTL),
    
    /* QWERTY
    * .--------------------------------------------------------------------------------------------------------------------------------------.
    * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
    * | TAB    | Q      | W      | E      | R      | T      | [      | \      | ]      | Y      | U      | I      | O      | P      | '      |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
    * | CAP LK | A      | S      | D      | F      | G      | HOME   | DEL    | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
    * | LSHIFT | Z      | X      | C      | V      | B      | END    | up     | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
    * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
    * | LCTRL  | LGUI   | LALT   | FN     |      SPACE      | LEFT   | DOWN   | RIGHT  |      SPACE      | FN     | RALT   | MENU   | RCTRL  |
    * '--------------------------------------------------------------------------------------------------------------------------------------'
    */

   [_QWERTY] = LAYOUT_uud73_grid(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_GRV,  KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, KC_DEL,  KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_UP,   KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, TT(2),   KC_SPC,  KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_SPC,  TT(3),   KC_RALT, KC_RGUI, KC_RCTL),

    /* LOWER
    * .--------------------------------------------------------------------------------------------------------------------------------------.
    * | ESC    | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | NUMLCK | /      | *      | TRNS   | TRNS   | TRNS   | [      | ]      | DEL    |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
    * | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | 7      | 8      | 9      | +      | HOME   | UP     | PG UP  | TRNS   | \      |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
    * | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | 4      | 5      | 6      | -      | LEFT   | DOWN   | RIGHT  | =      | -      |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
    * | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | 1      | 2      | 3      | ENTER  | END    | TRNS   | PG DN  | TRNS   | TRNS   |
    * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
    * | TRNS   | TRNS   | TRNS   | LOWER  |      SPACE      | 0      | 0      | .      |      SPACE      | FN     | TRNS   | TRNS   | TRNS   |
    * '--------------------------------------------------------------------------------------------------------------------------------------'
    */
   
	[_LOWER] = LAYOUT_uud73_grid(
        KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NLCK, KC_PSLS, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_DEL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_HOME, KC_UP,   KC_PGUP, KC_TRNS, KC_BSLS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PMNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_EQL,  KC_MINS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_END,  KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, TT(2),   KC_SPC,  KC_NO,   KC_P0,   KC_P0,   KC_PDOT, KC_NO,   KC_SPC,  KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS),

    /* UPPER
    * .--------------------------------------------------------------------------------------------------------------------------------------.
    * | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | PRTSCR | SCRLCK | PAUSE  |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
    * | TRNS   | MPRV   | MPLY   | MNXT   | TRNS   | DVORAK | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
    * | TRNS   | VOLD   | MUTE   | VOLU   | TRNS   | QWERTY | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
    * | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   | RESET  | TRNS   | TRNS   | TRNS   | ENTER  | TRNS   | TRNS   | TRNS   | TRNS   | TRNS   |
    * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
    * | TRNS   | TRNS   | TRNS   | LOWER  |      SPACE      | TRNS   | TRNS   | TRNS   |      ENTER      | FN     | TRNS   | TRNS   | TRNS   |
    * '--------------------------------------------------------------------------------------------------------------------------------------'
    */
   
	[_RAISE] = LAYOUT_uud73_grid(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS,
        KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, DVORAK,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, QWERTY,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS, TT(3),   KC_TRNS, KC_TRNS, KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case DVORAK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_DVORAK);
          }
          return false;
          break;
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        // case DVORAK:
        //   if (record->event.pressed) {
        //     set_single_persistent_default_layer(_DVORAK);
        //   }
        //   return false;
        //   break;
        // case LOWER:
        //   if (record->event.pressed) {
        //     layer_on(_LOWER);
        //     update_tri_layer(_LOWER, _RAISE, _ADJUST);
        //   } else {
        //     layer_off(_LOWER);
        //     update_tri_layer(_LOWER, _RAISE, _ADJUST);
        //   }
        //   return false;
        //   break;
        // case RAISE:
        //   if (record->event.pressed) {
        //     layer_on(_RAISE);
        //     update_tri_layer(_LOWER, _RAISE, _ADJUST);
        //   } else {
        //     layer_off(_RAISE);
        //     update_tri_layer(_LOWER, _RAISE, _ADJUST);
        //   }
        //   return false;
        //   break;
        // case BACKLIT:
        //   if (record->event.pressed) {
        //     register_code(KC_RSFT);
        //     #ifdef BACKLIGHT_ENABLE
        //       backlight_step();
        //     #endif
        //     #ifdef __AVR__
        //     writePinLow(E6);
        //     #endif
        //   } else {
        //     unregister_code(KC_RSFT);
        //     #ifdef __AVR__
        //     writePinHigh(E6);
        //     #endif
        //   }
        //   return false;
        //   break;
      }
    return true;
};

// bool muse_mode = false;
// uint8_t last_muse_note = 0;
// uint16_t muse_counter = 0;
// uint8_t muse_offset = 70;
// uint16_t muse_tempo = 50;

// void encoder_update_user(uint8_t index, bool clockwise) {
//   if (muse_mode) {
//     if (IS_LAYER_ON(_RAISE)) {
//       if (clockwise) {
//         muse_offset++;
//       } else {
//         muse_offset--;
//       }
//     } else {
//       if (clockwise) {
//         muse_tempo+=1;
//       } else {
//         muse_tempo-=1;
//       }
//     }
//   } else {
//     if (clockwise) {
//       register_code(KC_PGDN);
//       unregister_code(KC_PGDN);
//     } else {
//       register_code(KC_PGUP);
//       unregister_code(KC_PGUP);
//     }
//   }
// }

// void dip_switch_update_user(uint8_t index, bool active) {
//     switch (index) {
//         case 0:
//             if (active) {
//                 layer_on(_ADJUST);
//             } else {
//                 layer_off(_ADJUST);
//             }
//             break;
//         case 1:
//             if (active) {
//                 muse_mode = true;
//             } else {
//                 muse_mode = false;
//             }
//     }
// }


// void matrix_scan_user(void) {
// #ifdef AUDIO_ENABLE
//     if (muse_mode) {
//         if (muse_counter == 0) {
//             uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
//             if (muse_note != last_muse_note) {
//                 stop_note(compute_freq_for_midi_note(last_muse_note));
//                 play_note(compute_freq_for_midi_note(muse_note), 0xF);
//                 last_muse_note = muse_note;
//             }
//         }
//         muse_counter = (muse_counter + 1) % muse_tempo;
//     } else {
//         if (muse_counter) {
//             stop_all_notes();
//             muse_counter = 0;
//         }
//     }
// #endif
// }

// bool music_mask_user(uint16_t keycode) {
//   switch (keycode) {
//     case RAISE:
//     case LOWER:
//       return false;
//     default:
//       return true;
//   }
// }
