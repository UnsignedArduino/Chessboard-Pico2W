#include <Arduino.h>

void setup() {
  Serial1.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  
  Serial2.begin(9600);
  Serial1.println("Serial Chessboard passthrough");
}

void loop() {
  if (Serial1.available()) {
    Serial2.write(Serial1.read());
  }
  if (Serial2.available()) {
    Serial1.write(Serial2.read());
  }
}
