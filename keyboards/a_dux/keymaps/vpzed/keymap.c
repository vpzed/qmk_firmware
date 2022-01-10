#include QMK_KEYBOARD_H

const uint16_t PROGMEM esc_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM bksp_combo[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM enter_combo[] = {KC_E, KC_I, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(tab_combo, KC_TAB),
    COMBO(bksp_combo, KC_BSPC),
    COMBO(enter_combo, KC_ENTER),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,    KC_QUOTE, 
        KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,    KC_O, 
        KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,     KC_K,     KC_H,     KC_COMMA, KC_DOT,  KC_SLASH, 
                                      MO(2),    KC_LSFT,  KC_SPC,   MO(1)
        ),
    [1] = LAYOUT(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10, 
        KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,    KC_0, 
        KC_F11,   KC_GRAVE, KC_MINUS, KC_EQUAL, KC_DOT,   KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS, KC_F12, 
                                      MO(2),    KC_LSFT,  KC_NO,    MO(1)
        ),
    [2] = LAYOUT(
        KC_ESC,        LCTL(KC_S),    LCTL(KC_F),    LCTL(KC_A),    KC_CAPS,    KC_INS,  KC_HOME, KC_PGUP, KC_PSCR, KC_SLCK, 
        OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_BSPC,    KC_DEL,  KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, 
        LCTL(KC_Z),    LCTL(KC_X),    LCTL(KC_C),    KC_TAB,        LCTL(KC_V), KC_MUTE, KC_END,  KC_PGDN, KC_APP,  KC_PAUSE, 
                                      MO(2),         KC_NO,         KC_ENTER,   MO(1)
        )
};
