/*
Copyright (C)
*/

#include "keymap_common.h"
#include "keyboard_fn.h"

#define KC_____ KC_TRNS

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     */
    KEYMAP(
        ESC , 1   , 2   , 3   , 4   , 5   , 6   , 7   , 8   , 9   , 0   , MINS, EQL , JYEN, BSPC, NLCK,
        TAB , Q   , W   , E   , R   , T   , Y   , U   , I   , O   , P   , LBRC, RBRC, P7  , P8  , P9  ,
        LCTL, A   , S   , D   , F   , G   , H   , J   , K   , L   , SCLN, QUOT, NUHS, ENT , P4  , P5  ,
        LSFT, Z   , X   , C   , V   , B   , N   , M   , COMM, DOT , SLSH, RO  , RSFT, P1  , P2  , P6  ,
        CAPS, LGUI, LALT, MHEN, SPC ,       SPC ,       HENK, KANA, RALT, RGUI, FN0 , P0  , PDOT, P3  ),

    KEYMAP(
        GRV , F1  , F2  , F3  , F4  , F5  , F6  , F7  , F8  , F9  , F10 , F11 , F12 , TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, UP  , PGUP,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, NUBS, TRNS, LEFT, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, BSLS, TRNS, END , DOWN, RGHT,
        TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS,       TRNS, TRNS, RCTL, APP , TRNS, INS , DEL , PGDN),

};

const action_t fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),
};
