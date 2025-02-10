void playTwoNotes(int pin1, int freq1, int pin2, int freq2, int duration) {
  unsigned long period1 = freq1 == 0 ? 0 : 1000000 / freq1;  // Okres 1
  unsigned long period2 = freq2 == 0 ? 0 : 1000000 / freq2;  // Okres 2
  unsigned long halfPeriod1 = period1 / 2;
  unsigned long halfPeriod2 = period2 / 2;

  unsigned long startTime = millis();
  while (millis() - startTime < duration) {
    // Buzzer 1
    if (freq1 > 0) {
      digitalWrite(pin1, HIGH);
      delayMicroseconds(halfPeriod1);
      digitalWrite(pin1, LOW);
      delayMicroseconds(halfPeriod1);
    }

    // Buzzer 2
    if (freq2 > 0) {
      digitalWrite(pin2, HIGH);
      delayMicroseconds(halfPeriod2);
      digitalWrite(pin2, LOW);
      delayMicroseconds(halfPeriod2);
    }
  }
}