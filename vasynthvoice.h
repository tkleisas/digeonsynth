#include <MozziGuts.h>
#include <tables/sin512_int8.h>
#include <tables/square_analogue512_int8.h>
#include <tables/triangle512_int8.h>
#include <tables/saw512_int8.h>
#include <tables/waveshape_sigmoid_int8.h>
#include <Oscil.h>

#include <mozzi_rand.h>
#include <mozzi_midi.h>
#include <mozzi_fixmath.h>
#include <StateVariable.h>
#include <EventDelay.h>
#include <ADSR.h>
#include <mozzi_rand.h>
#include <LowPassFilter.h>

class VASynthVoice
{
  enum Wavetype{SIN,TRI,SAW,SQR,RND};
  public:
    VASynthVoice();
    void init();
    void setOsc1Wave(Wavetype w);
    void setOsc2Wave(Wavetype w);
    void setResonance(int reso);
    void setFrequency(int freq);
    void setEnvAttack(int a);
    void setEnvDecay(int d);
    void setEnvSustain(int s);
    void setEnvRelease(int r);
    void noteOn(float freq);
    void noteOff();
    int next();
    void updateControl();
  EventDelay noteDelay;
  int envAttack;
  int envDecay;
  int envSustain;
  int envRelease;
  ADSR <CONTROL_RATE, CONTROL_RATE> envelope;
  float osc1freq;
  float osc2freq;
  Wavetype osc1wavetype;
  Wavetype osc2wavetype;
  boolean note_is_on = false;
  int osc1amp = 255;
  int osc2amp = 255;
  int frequency = 255;
  int resonance = 100;
  private:
    int gain = 0;
  
  StateVariable <LOWPASS> svf_lowpass; // can be LOWPASS, BANDPASS, HIGHPASS or NOTCH
  LowPassFilter lowpass;
  Oscil <512, AUDIO_RATE> osc1;
  Oscil <512, AUDIO_RATE> osc2;
  Oscil <512, CONTROL_RATE> lfo1;
  Oscil <512, CONTROL_RATE> lfo2;
//  Oscil <SQUARE_ANALOGUE512_NUM_CELLS, AUDIO_RATE> squareosc(SQUARE_ANALOGUE512_DATA);
//  Oscil <TRIANGLE_ANALOGUE512_NUM_CELLS, AUDIO_RATE> trigosc(TRIANGLE_ANALOGUE512_DATA);
//  Oscil <SAW512_NUM_CELLS, AUDIO_RATE> sawosc(SAW512_DATA);
    
  

};


