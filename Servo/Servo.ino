#include <Arduino.h>
#include <Servo.h>

Servo penguin;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  penguin.attach(8);
  Serial.println("Start!");
}

void loop() {
  Serial.println("-----");

  penguin.write(0);
  delay(400);
  penguin.write(120);
  delay(300);
  penguin.write(60);
  delay(200);
  penguin.write(180);
  delay(300);
}
