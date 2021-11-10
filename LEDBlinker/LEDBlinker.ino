#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hello!");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("World!");
  delay(1000);
}
