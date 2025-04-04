#include <Arduino.h>

void setup() {
  Serial1.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Serial1.println("Hello, World!");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
