#pragma once
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include "bitmap_test.h"
#include "bitmap_doofenshmirtz_jazz.h"
#include "bitmap_doofenshmirtz_cool.h"

// Create the display object
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setupDisplay() {
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH); // Turn on backlight

  // Initialize the display
  tft.initR(INITR_BLACKTAB);
  tft.fillScreen(ST77XX_BLACK);  
}

void DrawTest() {
  // Draw the bitmap at (0, 0) position
  tft.drawRGBBitmap(0, 0, bitmap_test, 128, 160);
}

void DrawJazz() {
  // Draw the bitmap at (0, 0) position
  tft.drawRGBBitmap(0, 0, bitmap_doofenshmirtz_jazz, 128, 160);
}

void DrawCool() {
  // Draw the bitmap at (0, 0) position
  tft.drawRGBBitmap(0, 0, bitmap_doofenshmirtz_cool, 128, 160);
}

