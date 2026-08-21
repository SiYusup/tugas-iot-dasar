#include <Wire.h>

// C++ code
//

const int PUSH_BUTTON = 7;
const int LED = 12;

int buttonState = 0;

void setup()
{
  pinMode(PUSH_BUTTON, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop()
{
	buttonState = digitalRead(PUSH_BUTTON);
  
    if (buttonState != HIGH) {
      digitalWrite(LED, HIGH);
    } else {
      digitalWrite(LED, LOW);
    }
}