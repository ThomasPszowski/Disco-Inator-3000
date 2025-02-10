#include "pinout.h"
#include "play_notes.h"
#include "doofenschmirtz_song.h"

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(SECOND_BUZZER_PIN, OUTPUT);

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    int noteDuration = 1000 / noteDurations[i];

    playTwoNotes(BUZZER_PIN, melody[i], SECOND_BUZZER_PIN, melody[i] * 1.5, noteDuration);
  }
}

void loop() {
  // Nic nie robimy w pętli
}

