#pragma once

bool partyMode = 0;
int switchCount = 0;

void setupLogic() {
  partyMode = !clapMode; // zmienna clapMode zmienia stan po klasnieciu - zrobil thomas
  // na start partyMode != clapMode zeby sie uruchomila funkcja UpdateParty
  pinMode(VIXA_PIN, OUTPUT);
}

void StartParty() {
  setupOLED();
  DisplayText("DISCO\nINATOR\n3000");
  DrawCool();
  SpinServo();
  digitalWrite(VIXA_PIN, HIGH); // wyjscie do kuby
}

void StopParty() {
  StopServo();
  DrawJazz();
  digitalWrite(VIXA_PIN, LOW);
}

void UpdateParty() {
  if (clapMode != partyMode) {
    //Serial.print("switch "); Serial.println(switchCount++);
    partyMode = clapMode;
    if (partyMode) {
      StartParty();
    }
    else {
      StopParty();
    }
  }
}
