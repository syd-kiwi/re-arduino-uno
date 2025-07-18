#include "arduino_secrets.h"

int blinkCount = 0;
bool ready = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("How many times should I blink?");
}

void loop() {
  if (Serial.available()) {
    blinkCount = Serial.parseInt();
    if (blinkCount > 0) {
      ready = true;
    }
  }

  if (ready) {
    Serial.print("Blinking ");
    Serial.print(blinkCount);
    Serial.println(" times!");

    for (int i = 0; i < blinkCount; i++) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(300);
      digitalWrite(LED_BUILTIN, LOW);
      delay(300);
    }

    Serial.println("Done blinking!\n");
    Serial.println("Enter another number to blink again:");
    ready = false;
  }
}