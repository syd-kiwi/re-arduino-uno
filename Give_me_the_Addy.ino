#include "arduino_secrets.h"

void setup() {
  Serial.begin(9600);
}

void loop() {                   
  // Integer addition
  int a = 5;
  int b = 12;
  int sum = a + b;

  Serial.print("a + b = ");
  Serial.println(sum);

  // Hex additions
  int d = 0xBD;
  int e = 0xA1;
  int hex_sum = d + e;

  Serial.print("d + e = 0x");
  Serial.println(hex_sum);

  delay(60000);  // Wait for 60,000 milliseconds = 1 minute


}
