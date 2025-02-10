#pragma once

int pink_interval = 405;
int orange_interval = 400;
int last_pink_timestamp = 0;
int last_orange_timestamp = 0;

void setupLED() {
  pinMode(PINK_DIODE,OUTPUT);
  pinMode(ORANGE_DIODE,OUTPUT);
}

inline void PinkOn() {
  digitalWrite(PINK_DIODE, HIGH); 
}

inline void OrangeOn() {
  digitalWrite(ORANGE_DIODE, HIGH);
}

inline void PinkOff() {
  digitalWrite(PINK_DIODE, LOW); 
}

inline void OrangeOff() {
  digitalWrite(ORANGE_DIODE, LOW);
}

void UpdateLED(bool partyMode, float interval_modifier) { // 0 < interval_modifier <= 1
  unsigned long currentMillis = millis();

  if (partyMode) {
    
    int pink_interval_tmp = pink_interval * interval_modifier;
    int orange_interval_tmp = orange_interval * interval_modifier;

    
    if (currentMillis - last_pink_timestamp >= pink_interval_tmp) {
      last_pink_timestamp = currentMillis;
      
      if (digitalRead(PINK_DIODE) == HIGH) {
        PinkOff();
      } else {
        PinkOn();
      }
    }

    
    if (currentMillis - last_orange_timestamp >= orange_interval_tmp) {
      last_orange_timestamp = currentMillis;
      
      if (digitalRead(ORANGE_DIODE) == HIGH) {
        OrangeOff();
      } else {
        OrangeOn();
      }
    }
  } else {
    
    PinkOff();
    OrangeOff();
  }
}



