#include "DigiKeyboard.h"

int on_wait = 5000;
int off_wait = 5000;

void setup() {
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(57);
  delay(on_wait);
  DigiKeyboard.sendKeyStroke(57);
  delay(off_wait);
}
