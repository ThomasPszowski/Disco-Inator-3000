#pragma once
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_SCREEN_WIDTH 128 
#define OLED_SCREEN_HEIGHT 64 

Adafruit_SSD1306 display(OLED_SCREEN_WIDTH, OLED_SCREEN_HEIGHT, &Wire, -1);

void setupOLED() {
  if (!display.begin(SSD1306_PAGEADDR, 0x3C)) { 
  }
  display.clearDisplay(); // Wyczyszczenie ekranu
  display.setTextSize(2.5); // Ustawienie rozmiaru tekstu
  display.setTextColor(SSD1306_WHITE); // Kolor tekstu
}

void DisplayText(char* text){
  display.setCursor(0, 0); 
  display.println(text);
  display.display();
}


