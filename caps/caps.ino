#include "DigiKeyboard.h"

int on_wait = 1000;
int off_wait = 1000;

void setup() {
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(57);
  delay(on_wait);
  DigiKeyboard.sendKeyStroke(57);
  delay(off_wait);
}
