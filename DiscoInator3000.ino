#include "pinout.h"
#include "display/display.h" // DrawTest(), DrawJazz(), DrawCool(), setupDisplay()
#include "engine/engine.h" // SpinServo(), StopServo(), setupServo()
#include "sound_sensor/sound_sensor.h" // UpdateSoundSensor(), zmienna clapMode
#include "OLED/oled.h" // setupOLED(), DisplayText(...)
#include "LED/LED.h" // setupLED(), UpdateLED()
#include "potentiometer/potentiometer.h" // setupPot(), ReadPot()

#include "main_logic.h" // setupLogic(), UpdateParty()

void setup() {
  Serial.begin(9600); // do debugowania, zwraca informacje do komputera
  setupDisplay();
  setupServo();
  setupOLED();
  setupLogic();
  setupLED();
  setupPot();
}

void loop() {
  UpdateSoundSensor();
  UpdateParty();
  UpdateLED(partyMode, ReadPot());
}
