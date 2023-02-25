#include <Arduino.h>
#include <ESP32Servo.h>
#include "config.h"


Servo myservo;

int pos = 0;    // variable to store the servo position
int servoPin = 16;

void setup() {
  myservo.attach(servoPin);
  myservo.write(90);
}
void loop() {
  myservo.write(45); // rotate the motor counterclockwise
  delay(10000); // 10 secs

  myservo.write(90); // stop the motor
  delay(20000); // stay stopped 20 secs

  //myservo.write(135); // rotate the motor clockwise
}