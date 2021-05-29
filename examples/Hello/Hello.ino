#include "DigiKeyboard.h"

// This is to test, Digikeyboard feature.
// Digispark sends keystores as keyboard.

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000); 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("notepad.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.println("Hello hi, this is Digispark !!!");
}

void loop() {
  // put your main code here, to run repeatedly:

}

// Ceator:
// Aravind Swami
// name-is-cipher <Github>
