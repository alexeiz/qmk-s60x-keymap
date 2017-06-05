#include "s60_x.h"

#define KC_RTOG  RGB_TOG
#define KC_RMOD  RGB_MOD
#define KC_RHUI  RGB_HUI
#define KC_RHUD  RGB_HUD
#define KC_RSAI  RGB_SAI
#define KC_RSAD  RGB_SAD
#define KC_RVAI  RGB_VAI
#define KC_RVAD  RGB_VAD

#define KC_BDEC  BL_DEC
#define KC_BINC  BL_INC
#define KC_BTOG  BL_TOGG

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
        ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
        │ ESC~│  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
        ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
        │ TAB │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │  \  │█████│
        ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
        │LCTRL│  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │▒▒▒▒▒│ENTER│█████│
        ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
        │LSHFT│▒▒▒▒▒│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
        ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
        │LCTRL│ Fn0 │L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│R_WIN│ Fn0 │RCTRL│█████│
        └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
    */
    KEYMAP(
            F(0),    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,   KC_NO, KC_BSPC, \
          KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS,          \
         KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,   KC_NO,  KC_ENT,          \
         KC_LSFT,   KC_NO,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   KC_NO, KC_RSFT,   KC_NO, \
         KC_LCTL,   MO(1),  KC_LALT,                            KC_SPC,                            KC_RALT, KC_RGUI,   MO(1), KC_RCTL),

    /* 1: Fn layer
       ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
       │  `  │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │▒▒▒▒▒│ Del │
       ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       │     │ VoD │ VoU │ End │     │     │     │PgUp │ Ins │ Psc │ Up  │ BL- │ BL+ │BLTOG│█████│
       ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       │CAPSL│Home │     │PgDwn│     │     │Left │Down │ Up  │Right│     │     │▒▒▒▒▒│     │█████│
       ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       │     │▒▒▒▒▒│RTOG │RMOD │RHUI │RHUD │RSAI │RSAD │RVAI │RVAD │     │     │▒▒▒▒▒│     │▒▒▒▒▒│
       ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       │     │     │     │█████│█████│█████│     │█████│█████│█████│     │ APP │     │     │█████│
       └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
    */
    KEYMAP(
          KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_TRNS,  KC_DEL, \
         KC_TRNS, KC_VOLD, KC_VOLU,  KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP,  KC_INS, KC_PSCR,   KC_UP, KC_BDEC, KC_BINC, KC_BTOG,          \
         KC_CAPS, KC_HOME, KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
         KC_TRNS, KC_TRNS, KC_RTOG, KC_RMOD, KC_RHUI, KC_RHUD, KC_RSAI, KC_RSAD, KC_RVAI, KC_RVAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
         KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS,  KC_APP, KC_TRNS, KC_TRNS),
};

enum function_id {
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t * record, uint8_t id, uint8_t opt) {
  static uint8_t shift_esc_shift_mask;
  switch (id) {
  case SHIFT_ESC:
    shift_esc_shift_mask = get_mods() & (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT));
    if (record->event.pressed) {
      if (shift_esc_shift_mask) {
        add_key(KC_GRV);
        send_keyboard_report();
      } else {
        add_key(KC_ESC);
        send_keyboard_report();
      }
    } else {
      if (shift_esc_shift_mask) {
        del_key(KC_GRV);
        send_keyboard_report();
      } else {
        del_key(KC_ESC);
        send_keyboard_report();
      }
    }
    break;
  }
}
