int soundVal = 0;
unsigned long lastClapTime = 0;
bool clapMode = 0;

void UpdateSoundSensor() {
  soundVal = analogRead(SOUND_PIN);  
  unsigned long currentTime = millis();
  if (soundVal > 100 && currentTime - lastClapTime > 300) {
    clapMode = !clapMode;
    lastClapTime = millis();
    //Serial.println(val);
  }
}