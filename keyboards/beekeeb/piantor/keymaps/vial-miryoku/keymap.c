// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
    vial_tap_dance_entry_t td0 = { KC_A,
                                  KC_LGUI,
                                  KC_NO,
                                  KC_A,
                                  TAPPING_TERM * 2 };
    dynamic_keymap_set_tap_dance(0, &td0); // the first value corresponds to the TD(i) slot


    vial_tap_dance_entry_t td1 = { KC_SCLN,
                                  KC_RGUI,
                                  KC_NO,
                                  KC_A,
                                  TAPPING_TERM * 2 };
    dynamic_keymap_set_tap_dance(1, &td1);

}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, MO(7), TD(0), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), TD(1), KC_NO, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LT(6,KC_ESC), LT(4,KC_SPC), LT(5,KC_TAB), LT(2,KC_ENT), LT(1,KC_BSPC), LT(3,KC_DEL)),
	[1] = LAYOUT_split_3x6_3(KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_QUOT, KC_4, KC_5, KC_6, KC_EQL, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DOT, KC_0, KC_MINS, KC_NO, KC_TRNS, KC_NO),
	[2] = LAYOUT_split_3x6_3(KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DQUO, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_UNDS, KC_TRNS, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x6_3(KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_APP, KC_SPC, KC_TAB, KC_NO, KC_NO, KC_TRNS),
	[4] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_AGIN, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_NO, KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_PSLS, KC_PMNS, KC_UNDS, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_PEQL, KC_PLUS, KC_PIPE, KC_QUES, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE),
	[7] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_AGIN, KC_NO, KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_BTN5, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_BTN3)
};

#ifdef RGBLIGHT_ENABLE

const rgblight_segment_t PROGMEM layer0_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 85, 255, 75}
);
const rgblight_segment_t PROGMEM layer1_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 170, 255, 75}
);
const rgblight_segment_t PROGMEM layer2_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 0, 255, 75}
);
const rgblight_segment_t PROGMEM layer3_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 191, 255, 75}
);
const rgblight_segment_t PROGMEM layer4_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 30, 218, 75}
);
const rgblight_segment_t PROGMEM layer5_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 11, 176, 75}
);
const rgblight_segment_t PROGMEM layer6_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 106, 255, 75}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer0_colors,
    layer1_colors,
    layer2_colors,
    layer3_colors,
    layer4_colors,
    layer5_colors,
    layer6_colors
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    return state;
}

#endif
