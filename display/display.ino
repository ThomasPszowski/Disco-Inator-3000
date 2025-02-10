#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include "doofenshmirtz.h"
#include "pinout.h"

// Create the display object
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH); // Turn on backlight

  // Initialize the display
  tft.initR(INITR_BLACKTAB);
  tft.fillScreen(ST77XX_BLACK);

  // Draw the bitmap at (0, 0) position
  tft.drawRGBBitmap(0, 0, epd_bitmap_anime_booba, 128, 160);
}

void loop() {
  // Nothing to do here
}
