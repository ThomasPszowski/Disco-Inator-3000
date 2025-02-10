#pragma once

void setupPot() {
  pinMode(POT_PIN, INPUT_PULLUP);
}

float ReadPot() {
  float span = 30, min = 10;
  float val = analogRead(POT_PIN);
  return (val - min) / span;
}

