#include "pinout.h"
#include <Servo.h>

Servo myServo; // Obiekt serwa

void setup() {
  myServo.attach(SERVO_PIN); // Podłącz serwo do pinu cyfrowego 9
  myServo.write(95);
}

void loop() {
  
}
