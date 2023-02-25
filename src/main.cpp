#include <Arduino.h>
#include <ESP32Servo.h>
#include "config.h"


Servo myservo;

int pos = 0;    // variable to store the servo position
int servoPin = 16;

void setup() {
//  // Allow allocation of all timers
//  ESP32PWM::allocateTimer(0);
//  ESP32PWM::allocateTimer(1);
//  ESP32PWM::allocateTimer(2);
//  ESP32PWM::allocateTimer(3);
//  myservo.setPeriodHertz(50);    // standard 50 hz servo


  myservo.attach(servoPin);
  myservo.write(90);
}
void loop() {
  myservo.write(45); // rotate the motor counterclockwise
  delay(10000); // keep rotating for 5 seconds (5000 milliseconds)

  myservo.write(90); // stop the motor
  delay(20000); // stay stopped

  //myservo.write(135); // rotate the motor clockwise

  //delay(5000); // keep rotating :D
}