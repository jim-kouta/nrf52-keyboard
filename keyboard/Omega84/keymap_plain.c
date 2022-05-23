/*
Jim
*/

#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        KEYMAP(
	        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_JYEN, KC_BSPC, KC_NLCK,
	        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_P7  , KC_P8  , KC_P9  ,
	        KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT , KC_P4  , KC_P5  ,
	        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RO  , KC_RSFT, KC_P1  , KC_P2  , KC_P6  ,
	        KC_CAPS, KC_LGUI, KC_LALT, KC_MHEN, KC_SPC ,          KC_SPC ,          KC_HENK, KC_KANA, KC_RALT, KC_RGUI, KC_FN0 , KC_P0  , KC_PDOT, KC_P3  ),
       
	  
        KEYMAP(
	        KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_TRNS, KC_TRNS, KC_TRNS,
	        KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_HOME, KC_UP  , KC_PGUP,
	        KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NUBS, KC_TRNS, KC_LEFT, KC_TRNS,
                KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_BSLS, KC_NO  , KC_END , KC_DOWN, KC_RGHT,
	        KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,          KC_NO  ,          KC_NO  , KC_NO  , KC_RCTL, KC_APP , KC_NO  , KC_INS , KC_DEL , KC_PGDN),


};
	
const action_t fn_actions[] = {
	ACTION_LAYER_TAP(1, KC_RALT),ACTION_LAYER_TAP(2, KC_RCTL),ACTION_FUNCTION(7),
};
