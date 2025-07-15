void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turn LED on
  delay(5000);                      // Wait 5 seconds
  // Simulated breakpoint
  Serial.println("== BREAKPOINT HERE ==");
  digitalWrite(LED_BUILTIN, LOW);   // Turn LED off
  delay(5000);                      // Wait 5 seconds

  // Integer addition
  int a = 5;
  int b = 12;
  int sum = a + b;

  Serial.print("Integer sum: ");
  Serial.print(a);
  Serial.print(" + ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(sum);

  // Hex additions
  int hex1 = 0x03;
  int hex2 = 0x07;
  int hex_sum1 = hex1 + hex2;

  Serial.print("Hex sum 1: 0x");
  Serial.print(hex1, HEX);
  Serial.print(" + 0x");
  Serial.print(hex2, HEX);
  Serial.print(" = 0x");
  Serial.println(hex_sum1, HEX);

  int hex3 = 0x04;
  int hex4 = 0x0A;
  int hex_sum2 = hex3 + hex4;

  Serial.print("Hex sum 2: 0x");
  Serial.print(hex3, HEX);
  Serial.print(" + 0x");
  Serial.print(hex4, HEX);
  Serial.print(" = 0x");
  Serial.println(hex_sum2, HEX);

}
