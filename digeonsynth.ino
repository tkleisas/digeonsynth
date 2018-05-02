#include "Key.h"
#include "Keypad.h"


#include <SPI.h>
#include "digeon_font8x8ccw.h"
#include "digeon_screen.h"
#define CONTROL_RATE 128
//#include "MozziGuts.h"
#include "vasynthvoice.h"
//RotaryEncoder re_1(PB6,PB7);
int pos_1 = 0;
EventDelay ev;
Screen screen;
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
bool buttons[16];
bool newButtons[16];
int gain =0;
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = {PB12, PB13, PB14,PB15 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { PA8,PA9,PB6,PB7  }; 

//byte rowPins[ROWS] = { PA8, PB15, PA10,PA9 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
//byte colPins[COLS] = { PB14, PB13, PA12, PA11 }; 
byte notes[16] = {40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55};


// Create the Keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
volatile char key;

VASynthVoice synth;
uint8_t ringbuf[128];
int ringbufidx = 0;
int frame=0;
long audioframe=0;
char msg[16];
void setup() {
  //Serial.begin(115200)
  kpd.setHoldTime(10000);
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
    //ev.set(200);
    synth.init();
    
    startMozzi(CONTROL_RATE);
    for(int i=0;i<16;i++)
    {
      buttons[i] = false;
      newButtons[i] = false;
    }
}
void loop() {

  audioHook();
}
bool updateKeys()
{
  bool retval = kpd.getKeys();
  for(int r=0;r<ROWS;r++)
  {
    for(int c=0;c<COLS;c++)
    {
      
      buttons[r*4+c] = kpd.isPressed(keys[r][c]);
      if(buttons[r*4+c])
      {
        //retval = true;
        if(!newButtons[r*4+c])
        {
          newButtons[r*4+c] = true;
        }
        else
        {
          newButtons[r*4+c] = false;
        }
      }
      else
      {
        newButtons[r*4+c] = false;
      }
    }
  }
  return retval;
}
void updateControl()
{
  bool pressed = updateKeys();
  //int midi_note = 40;
  
  frame++;
  if(frame>CONTROL_RATE)
  {
    frame = 0;
    //synth.setResonance(random(1,256));
    //synth.setFrequency(random(1,256));
  }
  if(frame%8==0)
  {
    screen.clear();
    screen.writeString(0,0,"Synth");
    screen.writeString(0,1,msg);
    screen.updateTextOverlay();
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
  
  if(pressed)
  {
    int midi_note = -1;
    for(int i=0;i<16;i++)
    {
      if(newButtons[i])
      {
        midi_note = notes[i];
        int row = i/4;
        int col = i-(row*4);
        key = keys[row][col];
        synth.noteOn(mtof(midi_note));
      }
    }
     
    if(midi_note>0)
    {
      
      sprintf(msg,"k:%c/n:%3d",key,midi_note);
    }
    else
    {
      sprintf(msg,"k:-/n:---");
    }
  }
  else
  {
    
    synth.noteOff();
  }
  
  if(false/*ev.ready()*/)
  {
    byte midi_note = rand(60)+20;
    synth.noteOn( mtof(midi_note));
    
    sprintf(msg,"n:%3d",midi_note);
    screen.writeString(0,1,msg);
    sprintf (msg,"%d",AUDIO_RATE);
    screen.writeString(0,2,msg);
    //ev.start(200);
  }
  
  
  synth.updateControl();
}

int updateAudio()
{
  
  
  int a = synth.next();
  audioframe++;
  if(audioframe%8==0)
  {
    ringbuf[ringbufidx++]=((uint8_t)((a>>1)+127));
    if(ringbufidx>128)
    {
      ringbufidx=0;
    }
  }
  
  return a;
  
}


