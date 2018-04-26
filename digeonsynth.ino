#include <SPI.h>
#include "digeon_font8x8ccw.h"
#include "digeon_screen.h"
//#include "MozziGuts.h"

Screen screen;
void setup() {
  //Serial.begin(115200);
  screen.init();
  screen.clearText();
  screen.clear();
  //for(int i=0;i<96;i++)
  //{
    //screen.getCharBuffer()[i]=i+32;
  //}
  
  //screen.getCharBuffer()[20] = screen.getCharBuffer()[20] | 128; 
  //screen.writeString(0,0,"DIGEON",false);
  
  //screen.writeString(0,2,"DIGEON",false);
  //screen.writeString(0,3,"DIGEON",false); 
}
void loop() {
  screen.clear();
  screen.writeString(0,1,"DIGEON",random(0,2)==1?true:false);
  //screen.createTestPattern();
  //screen.clear();
  //screen.clearText();
  //screen.writeString(random(0,1),random(0,4),"DIGEON",false);
  //screen.setPixel(random(0,128),random(0,64),true);
  screen.updateTextOverlay2x();
  //screen.createTestPattern();
  //screen.progressiveTestPattern();
  screen.update();
  //Serial.println(">");
  delay(10);
  
}
