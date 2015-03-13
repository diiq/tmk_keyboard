static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(  // layer 0 : default
        // left hand
         GRV, FN1, FN2, FN3, FN4, FN5, ESC,
        FN20,   Q,   D,   R,   W,   B,FN16,
        LGUI,   A,   S,   H,   T,   G,
        LSFT,   Z,   X,   M,   C,   V,LBRC,
        MUTE,VOLD,VOLU,   1,   2,
                                       F12, F13,
                                           FN18,
                                 FN11,BSPC,FN18,
        // right hand
                                                         FN14, FN6, FN7, FN8,MINS, EQL,BSLS,
                                                         FN15,   J,   F,   U,   P,SCLN,QUOT,
                                                                 Y,   N,   E,   O,   I, ENT,
                                                         RBRC,   K,   L,COMM, DOT,SLSH,RSFT,
                                                                   FN11, F17, F19, F20,SLEP,
                                                     F10, F11,
                                                     F11,
                                                     ENT,FN11, SPC
    ),

    KEYMAP(  // layer 1 : function and symbol keys
        // left hand
        TRNS,TRNS,   7,   8,   9,TRNS,TRNS,
        TRNS,TRNS,   4,   5,   6,TRNS,TRNS,
        TRNS,TRNS,   1,   2,   3,TRNS,
        TRNS,TRNS,TRNS,   0,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
                                                    // right hand
                                                         F12, F6,  F7,  F8,  F9,  F10, TRNS,
                                                         TRNS,TRNS,TRNS,  UP,TRNS,TRNS,TRNS,
                                                               F18,LEFT,DOWN,RGHT,TRNS,TRNS,
                                                         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                                                                   TRNS,TRNS,TRNS,TRNS,TRNS,
                                                    TRNS,TRNS,
                                                    TRNS,
                                                    TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 2 : keyboard functions
        // left hand
        FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             FN4, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 3: numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             SLCK,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 4: Steno for Plover
        // left hand
        FN4, NO,  NO,  NO,  NO,  NO,  NO,
        NO,  1,   2,   3,   4,   5,   NO,
        NO,  Q,   W,   E,   R,   T,
        NO,  A,   S,   D,   F,   G,   NO,
        NO,  NO,  NO,  NO,  NO,
                                      FN4, NO,
                                           NO,
                                 C,   V,   NO,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             NO,  6,   7,   8,   9,   0,   TRNS,
                  Y,   U,   I,   O,   P,   LBRC,
           TRNS,  H,   J,   K,   L,   SCLN,QUOT,
                       TRNS,TRNS,NO,  NO,  NO,
        TRNS,TRNS,
        TRNS,
        NO,  N,   M
    ),

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_MODS_KEY(MOD_LSFT, KC_0),
    ACTION_MODS_KEY(MOD_LSFT, KC_1),
    ACTION_MODS_KEY(MOD_LSFT, KC_2),
    ACTION_MODS_KEY(MOD_LSFT, KC_3),
    ACTION_MODS_KEY(MOD_LSFT, KC_4),
    ACTION_MODS_KEY(MOD_LSFT, KC_5),
    ACTION_MODS_KEY(MOD_LSFT, KC_6),
    ACTION_MODS_KEY(MOD_LSFT, KC_7),
    ACTION_MODS_KEY(MOD_LSFT, KC_8),
    ACTION_MODS_KEY(MOD_LSFT, KC_9),
    ACTION_FUNCTION(TEENSY_KEY),                    // FN10 - Teensy key
    ACTION_LAYER_MOMENTARY(1),                      // FN11 - switch to Layer1
    ACTION_LAYER_TOGGLE(1),                         // FN12 - toggle Layer1
    ACTION_LAYER_TOGGLE(4),                         // FN13 - toggle Layer4 - Plover!
    ACTION_MODS_KEY(MOD_LCTL, KC_G),                // FN14 - C-g
    ACTION_MODS_KEY(MOD_LGUI, KC_Z),                // FN15 - Undo
    ACTION_MODS_KEY(MOD_LGUI, KC_C),                // FN16 - Copy
    ACTION_MODS_KEY(MOD_LGUI, KC_V),                // FN17 - Paste
    ACTION_MODS_KEY(MOD_LGUI, KC_TAB),              // FN18 - Cmd-Tab
    ACTION_MODS_TAP_KEY(MOD_LCTL, KC_F18),          // FN19 - Ctrl/F18
    ACTION_MODS_TAP_KEY(MOD_LALT, KC_TAB),         // FN20 - Alt/Tab
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}


// Backspace, enter/ctrl, comm    ACTION_MODS_KEY(MOD_LCTL, KC_Z),                // FN16 - C-Z
