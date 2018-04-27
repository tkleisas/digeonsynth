#include <SPI.h>
#include "digeon_font8x8ccw.h"
#include "digeon_screen.h"
#define CONTROL_RATE 128
//#include "MozziGuts.h"
#include "vasynthvoice.h"

EventDelay ev;
Screen screen;
VASynthVoice synth;
uint8_t ringbuf[128];
int ringbufidx = 0;
int frame=0;
int audioframe=0;
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
    ev.set(200);
    synth.init();
    
    startMozzi(CONTROL_RATE);

}
void loop() {

  audioHook();
}
void updateControl()
{
  frame++;
  if(frame>CONTROL_RATE)
  {
    frame = 0;
  }
  if(frame%128==0)
  {
    screen.clear();
    screen.writeString(0,0,"Synth");
    screen.updateTextOverlay4x();
    for(int i=0;i<128;i++)
    {
      int v = (int)(((ringbuf[i])>>2));
      if(v>63)v=63;
      if(v<0)v=0;
      
      screen.setPixel(i,v,true);
    }
    screen.update();
  }
    
  
  //screen.createTestPattern();
  //screen.clear();
  //screen.clearText();
  //screen.writeString(random(0,1),random(0,4),"DIGEON",false);
  //screen.setPixel(random(0,128),random(0,64),true);
  
  //screen.createTestPattern();
  //screen.progressiveTestPattern();
    //Serial.println(">");
  if(ev.ready())
  {
    byte midi_note = rand(60)+20;
    synth.noteOn( mtof(midi_note));
    char msg[8];
    sprintf(msg,"n:%3d",midi_note);
    screen.writeString(0,1,msg);
    ev.start(200);
  }
  
  
  synth.updateControl();
}

int updateAudio()
{
  
  int a = synth.next();
  audioframe++;
  if(audioframe%64==0)
  {
    ringbuf[ringbufidx++]=(uint8_t)(a+127);
    if(ringbufidx>128)
    {
      ringbufidx=0;
    }
  }
  
  return a;
  
}


