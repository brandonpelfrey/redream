#ifndef KEYCODE_H
#define KEYCODE_H

enum keycode {
  K_UNKNOWN,
  K_RETURN,
  K_ESCAPE,
  K_BACKSPACE,
  K_TAB,

  K_SPACE = 32,
  K_CAPSLOCK = 127,

  K_F1,
  K_F2,
  K_F3,
  K_F4,
  K_F5,
  K_F6,
  K_F7,
  K_F8,
  K_F9,
  K_F10,
  K_F11,
  K_F12,

  K_PRINTSCREEN,
  K_SCROLLLOCK,
  K_PAUSE,
  K_INSERT,
  K_HOME,
  K_PAGEUP,
  K_DELETE,
  K_END,
  K_PAGEDOWN,
  K_RIGHT,
  K_LEFT,
  K_DOWN,
  K_UP,

  K_NUMLOCKCLEAR,
  K_KP_DIVIDE,
  K_KP_MULTIPLY,
  K_KP_MINUS,
  K_KP_PLUS,
  K_KP_ENTER,
  K_KP_1,
  K_KP_2,
  K_KP_3,
  K_KP_4,
  K_KP_5,
  K_KP_6,
  K_KP_7,
  K_KP_8,
  K_KP_9,
  K_KP_0,
  K_KP_PERIOD,

  K_APPLICATION,
  K_POWER,
  K_KP_EQUALS,
  K_F13,
  K_F14,
  K_F15,
  K_F16,
  K_F17,
  K_F18,
  K_F19,
  K_F20,
  K_F21,
  K_F22,
  K_F23,
  K_F24,
  K_EXECUTE,
  K_HELP,
  K_MENU,
  K_SELECT,
  K_STOP,
  K_AGAIN,
  K_UNDO,
  K_CUT,
  K_COPY,
  K_PASTE,
  K_FIND,
  K_MUTE,
  K_VOLUMEUP,
  K_VOLUMEDOWN,
  K_KP_COMMA,
  K_KP_EQUALSAS400,

  K_ALTERASE,
  K_SYSREQ,
  K_CANCEL,
  K_CLEAR,
  K_PRIOR,
  K_RETURN2,
  K_SEPARATOR,
  K_OUT,
  K_OPER,
  K_CLEARAGAIN,
  K_CRSEL,
  K_EXSEL,

  K_KP_00,
  K_KP_000,
  K_THOUSANDSSEPARATOR,
  K_DECIMALSEPARATOR,
  K_CURRENCYUNIT,
  K_CURRENCYSUBUNIT,
  K_KP_LEFTPAREN,
  K_KP_RIGHTPAREN,
  K_KP_LEFTBRACE,
  K_KP_RIGHTBRACE,
  K_KP_TAB,
  K_KP_BACKSPACE,
  K_KP_A,
  K_KP_B,
  K_KP_C,
  K_KP_D,
  K_KP_E,
  K_KP_F,
  K_KP_XOR,
  K_KP_POWER,
  K_KP_PERCENT,
  K_KP_LESS,
  K_KP_GREATER,
  K_KP_AMPERSAND,
  K_KP_DBLAMPERSAND,
  K_KP_VERTICALBAR,
  K_KP_DBLVERTICALBAR,
  K_KP_COLON,
  K_KP_HASH,
  K_KP_SPACE,
  K_KP_AT,
  K_KP_EXCLAM,
  K_KP_MEMSTORE,
  K_KP_MEMRECALL,
  K_KP_MEMCLEAR,
  K_KP_MEMADD,
  K_KP_MEMSUBTRACT,
  K_KP_MEMMULTIPLY,
  K_KP_MEMDIVIDE,
  K_KP_PLUSMINUS,
  K_KP_CLEAR,
  K_KP_CLEARENTRY,
  K_KP_BINARY,
  K_KP_OCTAL,
  K_KP_DECIMAL,
  K_KP_HEXADECIMAL,

  K_LCTRL,
  K_LSHIFT,
  K_LALT,
  K_LGUI,
  K_RCTRL,
  K_RSHIFT,
  K_RALT,
  K_RGUI,

  K_MODE,

  K_AUDIONEXT,
  K_AUDIOPREV,
  K_AUDIOSTOP,
  K_AUDIOPLAY,
  K_AUDIOMUTE,
  K_MEDIASELECT,
  K_WWW,
  K_MAIL,
  K_CALCULATOR,
  K_COMPUTER,
  K_AC_SEARCH,
  K_AC_HOME,
  K_AC_BACK,
  K_AC_FORWARD,
  K_AC_STOP,
  K_AC_REFRESH,
  K_AC_BOOKMARKS,

  K_BRIGHTNESSDOWN,
  K_BRIGHTNESSUP,
  K_DISPLAYSWITCH,
  K_KBDILLUMTOGGLE,
  K_KBDILLUMDOWN,
  K_KBDILLUMUP,
  K_EJECT,
  K_SLEEP,

  K_CONSOLE,

  K_MOUSE1,
  K_MOUSE2,
  K_MOUSE3,
  K_MOUSE4,
  K_MOUSE5,

  K_MWHEELUP,
  K_MWHEELDOWN,

  K_JOY0,
  K_JOY1,
  K_JOY2,
  K_JOY3,
  K_JOY4,
  K_JOY5,
  K_JOY6,
  K_JOY7,
  K_JOY8,
  K_JOY9,
  K_JOY10,
  K_JOY11,
  K_JOY12,
  K_JOY13,
  K_JOY14,
  K_JOY15,
  K_JOY16,
  K_JOY17,
  K_JOY18,
  K_JOY19,
  K_JOY20,
  K_JOY21,
  K_JOY22,
  K_JOY23,
  K_JOY24,
  K_JOY25,
  K_JOY26,
  K_JOY27,
  K_JOY28,
  K_JOY29,
  K_JOY30,
  K_JOY31,

  K_HAT0,
  K_HAT1,
  K_HAT2,
  K_HAT3,
  K_HAT4,
  K_HAT5,
  K_HAT6,
  K_HAT7,
  K_HAT8,
  K_HAT9,
  K_HAT10,
  K_HAT11,
  K_HAT12,
  K_HAT13,
  K_HAT14,
  K_HAT15,

  K_AXIS0,
  K_AXIS1,
  K_AXIS2,
  K_AXIS3,
  K_AXIS4,
  K_AXIS5,
  K_AXIS6,
  K_AXIS7,
  K_AXIS8,
  K_AXIS9,
  K_AXIS10,
  K_AXIS11,
  K_AXIS12,
  K_AXIS13,
  K_AXIS14,
  K_AXIS15,
  K_AXIS16,
  K_AXIS17,
  K_AXIS18,
  K_AXIS19,
  K_AXIS20,
  K_AXIS21,
  K_AXIS22,
  K_AXIS23,
  K_AXIS24,
  K_AXIS25,

  K_NUM_KEYS
};

enum keycode get_key_by_name(const char *keyname);
const char *get_name_by_key(enum keycode keycode);

#endif
