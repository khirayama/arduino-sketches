#include <Arduino.h>

#define M1_A 8
#define M1_B 9

void setup() {
  Serial.begin(9600);
  pinMode(M1_A, OUTPUT);
  pinMode(M1_B, OUTPUT);
  Serial.println("Start!");
}

void loop() {
  digitalWrite(M1_A, HIGH); 
  digitalWrite(M1_B, LOW); 
  delay(1000);
  digitalWrite(M1_A, LOW); 
  digitalWrite(M1_B, LOW); 
  delay(1000);
}
