#include <stdint.h>
uint16_t NOTE_A3 = 220;
uint16_t NOTE_C4 = 262;
uint16_t NOTE_E4 = 330;
uint16_t NOTE_G4 = 392;
uint16_t REST = 0;

uint16_t melody[] = {
  NOTE_C4, NOTE_A3, NOTE_C4, REST,
  NOTE_E4, NOTE_C4, NOTE_E4, REST, 
  NOTE_G4, REST, NOTE_G4, REST, NOTE_G4, REST, NOTE_G4
};

uint8_t noteDurations[] = {
  6, 6, 6, 8,
  6, 6, 6, 8,
  6, 6, 8, 16, 4, 16, 2
};