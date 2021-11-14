#include <Arduino.h>
#include <Servo.h>

#define trigPin 2
#define echoPin 3

#define servoPin 8

Servo servo;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  servo.attach(servoPin);
}

void loop() {
  double Distance = 0;

  Distance = getDistance();
  Serial.print("Distance: ");
  Serial.print(Distance);
  Serial.println("mm");

  if (Distance < 100) {
    servo.write(calcRotate(135)); // Stop
  } else if (Distance > 200) {
    servo.write(calcRotate(-135)); // Stop
  } else {
    servo.write(calcRotate(0));
  }
  delay(100);
}

int calcRotate(int degree) {
  return 2 * degree / 3 + 90;
}

double getDistance() {
  double Duration = 0;
  double Distance = 0;

  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  Duration = pulseIn(echoPin, HIGH);
  if (Duration > 0) {
    Duration = Duration / 2;
    Distance = Duration * 340 * 100 * 10 / 1000000;
  }

  return Distance;
}
