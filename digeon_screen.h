#ifndef DIGEON_SCREEN_H
#define DIGEON_SCREEN_H

#include <SPI.h>
#include "digeon_font8x8ccw.h"
//Pins controlling SSD1306 Graphic OLED
#define OLED_DC     PB10 //PB10 // was 9 for Nano
#define OLED_CS     PA3 //PB0  // was 10 for Nano
#define OLED_RESET  PA4 //PB2  // was 13 for Nano
class Screen
{
  uint8_t vidbuf[1024];
  uint8_t charbuf[128];
  public: 
    Screen();
    void init();
    void clear();
    void clearText();
    void updateTextOverlay();
    void updateTextOverlay2x();
    void updateTextOverlay4x();
    void update();
    void createTestPattern();
    void progressiveTestPattern();
    uint8_t * getCharBuffer();
    uint8_t * getVideoBuffer();
    void setPixel(int x,int y,bool pixel);
    void writeString(int column, int row, char* text);
    void writeString(int column, int row, char* text, bool inverse_video);
};

#endif


