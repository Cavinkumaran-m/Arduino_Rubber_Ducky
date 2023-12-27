

#define KEY_MOD_LCTRL  0x01
#define KEY_MOD_LSHIFT 0x02
#define KEY_MOD_LALT   0x04
#define KEY_MOD_LMETA  0x08
#define KEY_MOD_RCTRL  0x10
#define KEY_MOD_RSHIFT 0x20
#define KEY_MOD_RALT   0x40
#define KEY_MOD_RMETA  0x80

#define KEY_NONE 0x00 // No key pressed
#define KEY_ERR_OVF 0x01 //  Keyboard Error Roll Over - used for all slots if too many keys are pressed ("Phantom key")
// 0x02 //  Keyboard POST Fail
// 0x03 //  Keyboard Error Undefined
#define KEY_A 0x04 // Keyboard a and A
#define KEY_B 0x05 // Keyboard b and B
#define KEY_C 0x06 // Keyboard c and C
#define KEY_D 0x07 // Keyboard d and D
#define KEY_E 0x08 // Keyboard e and E
#define KEY_F 0x09 // Keyboard f and F
#define KEY_G 0x0a // Keyboard g and G
#define KEY_H 0x0b // Keyboard h and H
#define KEY_I 0x0c // Keyboard i and I
#define KEY_J 0x0d // Keyboard j and J
#define KEY_K 0x0e // Keyboard k and K
#define KEY_L 0x0f // Keyboard l and L
#define KEY_M 0x10 // Keyboard m and M
#define KEY_N 0x11 // Keyboard n and N
#define KEY_O 0x12 // Keyboard o and O
#define KEY_P 0x13 // Keyboard p and P
#define KEY_Q 0x14 // Keyboard q and Q
#define KEY_R 0x15 // Keyboard r and R
#define KEY_S 0x16 // Keyboard s and S
#define KEY_T 0x17 // Keyboard t and T
#define KEY_U 0x18 // Keyboard u and U
#define KEY_V 0x19 // Keyboard v and V
#define KEY_W 0x1a // Keyboard w and W
#define KEY_X 0x1b // Keyboard x and X
#define KEY_Y 0x1c // Keyboard y and Y
#define KEY_Z 0x1d // Keyboard z and Z

#define KEY_1 0x1e // Keyboard 1 and !
#define KEY_2 0x1f // Keyboard 2 and @
#define KEY_3 0x20 // Keyboard 3 and #
#define KEY_4 0x21 // Keyboard 4 and $
#define KEY_5 0x22 // Keyboard 5 and %
#define KEY_6 0x23 // Keyboard 6 and ^
#define KEY_7 0x24 // Keyboard 7 and &
#define KEY_8 0x25 // Keyboard 8 and *
#define KEY_9 0x26 // Keyboard 9 and (
#define KEY_0 0x27 // Keyboard 0 and )

#define KEY_ENTER 0x28 // Keyboard Return (ENTER)
#define KEY_ESC 0x29 // Keyboard ESCAPE
#define KEY_BACKSPACE 0x2a // Keyboard DELETE (Backspace)
#define KEY_TAB 0x2b // Keyboard Tab
#define KEY_SPACE 0x2c // Keyboard Spacebar
#define KEY_MINUS 0x2d // Keyboard - and _
#define KEY_EQUAL 0x2e // Keyboard = and +
#define KEY_LEFTBRACE 0x2f // Keyboard [ and {
#define KEY_RIGHTBRACE 0x30 // Keyboard ] and }
#define KEY_BACKSLASH 0x31 // Keyboard \ and |
#define KEY_HASHTILDE 0x32 // Keyboard Non-US # and ~
#define KEY_SEMICOLON 0x33 // Keyboard ; and :
#define KEY_APOSTROPHE 0x34 // Keyboard ' and "
#define KEY_GRAVE 0x35 // Keyboard ` and ~
#define KEY_COMMA 0x36 // Keyboard , and <
#define KEY_DOT 0x37 // Keyboard . and >
#define KEY_SLASH 0x38 // Keyboard / and ?
#define KEY_CAPSLOCK 0x39 // Keyboard Caps Lock

#define KEY_F1 0x3a // Keyboard F1
#define KEY_F2 0x3b // Keyboard F2
#define KEY_F3 0x3c // Keyboard F3
#define KEY_F4 0x3d // Keyboard F4
#define KEY_F5 0x3e // Keyboard F5
#define KEY_F6 0x3f // Keyboard F6
#define KEY_F7 0x40 // Keyboard F7
#define KEY_F8 0x41 // Keyboard F8
#define KEY_F9 0x42 // Keyboard F9
#define KEY_F10 0x43 // Keyboard F10
#define KEY_F11 0x44 // Keyboard F11
#define KEY_F12 0x45 // Keyboard F12

// Values
int keyValues[] = {KEY_A, KEY_B, KEY_C, KEY_D, KEY_E, KEY_F, KEY_G, KEY_H, KEY_I, KEY_J, KEY_K, KEY_L, KEY_M, KEY_N, KEY_O,
KEY_P, KEY_Q, KEY_R, KEY_S, KEY_T, KEY_U, KEY_V, KEY_W, KEY_X, KEY_Y, KEY_Z};
int numValues[] = {KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6, KEY_7, KEY_8, KEY_9, KEY_0};
int miscValues[] = {KEY_ENTER, KEY_ESC, KEY_BACKSPACE, KEY_TAB, KEY_CAPSLOCK};
int annoteValues[] = {KEY_SPACE, KEY_MINUS, KEY_EQUAL, KEY_LEFTBRACE,
KEY_RIGHTBRACE, KEY_BACKSLASH, KEY_SEMICOLON, KEY_APOSTROPHE, KEY_GRAVE, KEY_COMMA, KEY_DOT,
KEY_SLASH};

// Characters
int Nums[] = {'1','2','3','4','5','6','7','8','9','0'};
char SpecialChars[] = {'!','@','#','$','%','^','&','*','(',')'};
char Keys[] = {'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char CapsKeys[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char misc[][10] = {"enter", "escape", "backspace", "tab", "caps"};
char annotes[] = {' ', '-', '=', '[', ']', '\\', ';', '\'','`', ',', '.', '/'};
char specialAnnotes[] = {'_','+','{','}','|',':','"', '~','<','>','?'};

//  For getting hex values of small alphabet letters
unsigned int getHex(char letter) {
  for(int i = 0; i <= 25; i++) {
    if(letter == Keys[i]) {
      // Serial.print(Keys[i]);
      return keyValues[i];
    }
  }
}
//  For getting hex values of capital alphabet letters
void getCapsHex(char letter,  uint8_t* buf_0, uint8_t* buf_2) {
  for(int i = 0; i <= 25; i++) {
    if(letter == CapsKeys[i]) {
      // Serial.print(CapsKeys[i]);
      *buf_0 = KEY_MOD_LSHIFT;
      *buf_2 = keyValues[i];
      return;
    }
  }
}

//  For getting hex values of numbers
unsigned int getNumHex(char letter) {
  for(int i = 0; i <= 9; i++) {
    if(letter == Nums[i]) {
      // Serial.print(Nums[i]);
      return numValues[i];
    }
  }
}


//  For getting hex values of all misc values
void getMiscHex(char* key, uint8_t* buf_0, uint8_t* buf_2) {

  if(strcmp(key, "windows") == 0) {
    *buf_0 = KEY_MOD_LMETA;
    return;
  }
  if(strcmp(key, "OpenRun") == 0) {
    *buf_0 = KEY_MOD_LMETA;
    *buf_2 = KEY_R;
    return;
  }
  if(strcmp(key, "grantPermission") == 0) {
    *buf_0 = KEY_MOD_LALT;
    *buf_2 = KEY_Y;
    return;
  }
  if(strcmp(key, "closeWindow") == 0) {
    *buf_0 = KEY_MOD_LALT;
    *buf_2 = KEY_F4;
    return;
  }

  //  For getting hex values of miscs
  for(int i = 0; i <= 4; i++) {
    if(strcmp(key, misc[i]) == 0) {
      // Serial.print(misc[i]);
      *buf_2 = miscValues[i];
      return;
    }
  }

  //  For getting hex values of special characters i.e: !,@,#,$,%,^,&,*,(,)
  for(int i = 0; i <= 9; i++) {
    if(key == SpecialChars[i]) {
      // Serial.print(SpecialChars[i]);
      *buf_0 = KEY_MOD_LSHIFT;
      *buf_2 = numValues[i];
      return;
    }
  }

  //  For getting hex values of special annotes i.e: -,=,[,],\,;,'
  for(int i = 0; i <= 11; i++) {
    if(key == annotes[i]) {
      // Serial.print(annotes[i]);
      *buf_2 = annoteValues[i];
      return;
    }
  }

  //  For getting hex values of special annotes i.e: _,+,{,},|,:,",<,>,?
  for(int i = 0; i <= 10; i++) {
    if(key == specialAnnotes[i]) {
      // Serial.print(specialAnnotes[i]);
      *buf_0 = KEY_MOD_LSHIFT;
      *buf_2 = annoteValues[i + 1];
      return;
    }
  }
  
  Serial.print("Unmapped value - ");
  Serial.print(key);
  Serial.print("\n");

  
}
