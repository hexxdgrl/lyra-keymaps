#include QMK_KEYBOARD_H

enum layer_number {
  _BASE = 0,
  _NUMB,
  _NAV,
  _FUNC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
        KC_AT,      KC_Z,        KC_Y,        KC_O,           KC_U,         KC_QUOT,                        KC_DQUO,        KC_L,        KC_D,        KC_W,        KC_Q,        KC_GRV,
        KC_B,       LGUI_T(KC_C),LALT_T(KC_I),LCTL_T(KC_E),   LSFT_T(KC_A), KC_COMMA,                       KC_DOT,         RSFT_T(KC_H),RCTL_T(KC_T),RALT_T(KC_S),RGUI_T(KC_N),KC_V,
        KC_HASH,    KC_G,        KC_X,        KC_J,           KC_K,         KC_MINS,                        KC_UNDS,        KC_R,        KC_M,        KC_F,        KC_P,        KC_SLASH,
                                                LT(3, KC_ESC),LT(1, KC_SPC),LT(2, KC_TAB),            LT(2, KC_ENT),  LT(1, KC_BSPC),LT(3, KC_DEL)
    ),

    [_NUMB] = LAYOUT_split_3x6_3(
        KC_NO,     KC_NO,        KC_NO,       KC_QUES,         KC_LPRN,      KC_LBRC,                        KC_RBRC,        KC_RPRN,    KC_EXLM,    KC_NO,      KC_NO,      KC_NO,
        KC_NO,      LGUI_T(KC_1),LALT_T(KC_2),LCTL_T(KC_3),    LSFT_T(KC_4), KC_5,                           KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_NO,
        KC_DLR,     KC_PIPE,     KC_EQL,      KC_TILDE,        KC_PLUS,      KC_SCLN,                        KC_COLN,        KC_CIRC,    KC_AMPR,    KC_PERC,    KC_ASTR,    KC_BSLS,
                                                LT(3, KC_ESC),_______,LT(2, KC_TAB),            LT(2, KC_ENT),_______, LT(3, KC_DEL)
    ),

    [_NAV] = LAYOUT_split_3x6_3(
        KC_NO,      KC_NO,      KC_NO,        KC_NO,          KC_NO,        KC_NO,                          KC_AGIN,        KC_PAST,    KC_COPY,    KC_CUT,     KC_UNDO,      KC_NO,
        KC_NO,      KC_LGUI,    KC_LALT,      KC_LCTL,        KC_LSFT,      KC_NO,                          KC_CAPS,        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,     KC_NO,
        KC_NO,      KC_NO,      KC_NO,        KC_NO,          KC_NO,        KC_NO,                          KC_INS,         KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,       KC_NO,
                                                LT(3, KC_ESC),LT(1, KC_SPC),_______,            _______, LT(1, KC_BSPC), LT(3, KC_DEL)
    ),

    [_FUNC] = LAYOUT_split_3x6_3(
        KC_NO,      KC_F12,     KC_F7,        KC_F8,          KC_F9,         KC_PSCR,                        KC_NO,          KC_NO,      KC_NO,        KC_NO,       KC_NO,       KC_NO,
        KC_NO,      KC_F11,     KC_F4,        KC_F5,          KC_F6,         KC_SCRL,                        KC_NO,          KC_LGUI,    KC_LALT,      KC_LCTL,     KC_LSFT,     KC_NO,
        KC_NO,      KC_F10,     KC_F1,        KC_F2,          KC_F3,         KC_PAUS,                        KC_NO,          KC_NO,      KC_NO,        KC_NO,       KC_NO,       KC_NO,
                                                _______,LT(1, KC_SPC), LT(2, KC_TAB),           LT(2, KC_ENT), LT(1, KC_BSPC), _______
    )

};
