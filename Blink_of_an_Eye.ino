#include "arduino_secrets.h"

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  unsigned long startTime = millis();
  unsigned long duration = 30000; // 0.5 minute in milliseconds

  while (millis() - startTime < duration) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200); // 200 ms on
    digitalWrite(LED_BUILTIN, LOW);
    delay(200); // 200 ms off
  }

  // Optional: turn LED off and stop further blinking
  digitalWrite(LED_BUILTIN, LOW);
  while (true); // stop looping
}
