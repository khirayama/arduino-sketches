#include <Arduino.h>

#define trigPin0 2
#define echoPin0 3

#define trigPin1 8
#define echoPin1 9

double Duration0 = 0;
double Duration1 = 0;

double Distance0 = 0;
double Distance1 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(echoPin0, INPUT);
  pinMode(trigPin0, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin1, OUTPUT);
  Serial.print("Start!");
}

void loop() {
  Serial.println("------");
  digitalWrite(trigPin0, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin0, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin0, LOW);
  Duration0 = pulseIn(echoPin0, HIGH);
  if (Duration0 > 0) {
    Duration0 = Duration0 / 2;
    Distance0 = Duration0 * 340 * 100 / 1000000;
    Serial.print("Distance0:");
    Serial.print(Distance0);
    Serial.println(" cm");
  }

  digitalWrite(trigPin1, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  Duration1 = pulseIn(echoPin1, HIGH);
  if (Duration1 > 0) {
    Duration1 = Duration1 / 2;
    Distance1 = Duration1 * 340 * 100 / 1000000;
    Serial.print("Distance1:");
    Serial.print(Distance1);
    Serial.println(" cm");
  }

  delay(500);
}
