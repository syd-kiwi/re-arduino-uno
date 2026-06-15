// Slightly advanced blink project:
// 1) warm-up speed ramp
// 2) heartbeat pattern
// 3) countdown flashes

const uint16_t WARMUP_STEPS_MS[] = {400, 260, 160, 90};
const uint8_t WARMUP_COUNT = sizeof(WARMUP_STEPS_MS) / sizeof(WARMUP_STEPS_MS[0]);

void flashLed(uint16_t onMs, uint16_t offMs) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onMs);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offMs);
}

uint16_t buildSignature() {
  uint16_t signature = 0x1234;
  for (uint8_t i = 0; i < WARMUP_COUNT; i++) {
    signature = (uint16_t)((signature << 1) ^ WARMUP_STEPS_MS[i]);
  }
  return signature;
}

void runWarmup() {
  for (uint8_t i = 0; i < WARMUP_COUNT; i++) {
    flashLed(WARMUP_STEPS_MS[i], (uint16_t)(WARMUP_STEPS_MS[i] / 2));
  }
}

void runHeartbeat(uint8_t beats) {
  for (uint8_t i = 0; i < beats; i++) {
    flashLed(120, 120);
    flashLed(120, 450);
    flashLed(250, 900);
  }
}

void runCountdown(uint8_t startAt) {
  for (int level = startAt; level >= 1; level--) {
    for (int i = 0; i < level; i++) {
      flashLed(70, 80);
    }
    delay(500);
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.print("Blink signature: 0x");
  Serial.println(buildSignature(), HEX);
}

void loop() {
  runWarmup();
  runHeartbeat(6);
  runCountdown(5);
  delay(2000);
}
