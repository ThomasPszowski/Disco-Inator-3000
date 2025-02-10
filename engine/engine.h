#pragma once

void setupServo() {
  pinMode(SERVO_PIN, OUTPUT);  
  digitalWrite(SERVO_PIN, LOW);
}

void SpinServo() {
  digitalWrite(SERVO_PIN, HIGH);
}

void StopServo() {
  digitalWrite(SERVO_PIN, LOW);
}

