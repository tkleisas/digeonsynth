#include "vasynthvoice.h"
VASynthVoice::VASynthVoice()
{
  osc1wavetype = SAW;
  osc2wavetype = SQR;
}

void VASynthVoice::init()
{
  setOsc1Wave(SAW);
  setOsc2Wave(SAW);
  envelope.setADLevels(255,255);
  setEnvAttack(random(0,256));
  setEnvDecay(random(0,256));
  setEnvRelease(random(0,256));
  setEnvSustain(random(0,256));
  svf_lowpass.setCentreFreq(100);  
  svf_lowpass.setResonance(1);

}
void VASynthVoice::setEnvAttack(int a)
{
  envAttack = a;
  envelope.setTimes(envAttack,envDecay,envSustain,envRelease);
}
void VASynthVoice::setEnvDecay(int d)
{
  envDecay = d;
  envelope.setTimes(envAttack,envDecay,envSustain,envRelease);
}
void VASynthVoice::setEnvSustain(int s)
{
  envSustain = s;
  envelope.setTimes(envAttack,envDecay,envSustain,envRelease);
}
void VASynthVoice::setEnvRelease(int r)
{
  envRelease = r;
  envelope.setTimes(envAttack,envDecay,envSustain,envRelease);
}
void VASynthVoice::setOsc1Wave(Wavetype w)
{
  switch (w)
  {
    case SIN:
      osc1.setTable(SIN512_DATA);
      osc1wavetype = SIN;
    break;
    case SAW:
      osc1.setTable(SAW512_DATA);
      osc1wavetype = SAW;
    break;
    case SQR:
      osc1.setTable(SQUARE_ANALOGUE512_DATA);
      osc1wavetype = SQR;
    case TRI:
      osc1.setTable(TRIANGLE512_DATA);
      osc1wavetype = TRI;
    break;
    default:
      osc1.setTable(SAW512_DATA);
      osc1wavetype = SAW;
    break;
  }
}
void VASynthVoice::setOsc2Wave(Wavetype w)
{
  switch (w)
  {
    case SIN:
      osc2.setTable(SIN512_DATA);
      osc2wavetype = SIN;
    break;
    case SAW:
      osc2.setTable(SAW512_DATA);
      osc2wavetype = SAW;
    break;
    case SQR:
      osc2.setTable(SQUARE_ANALOGUE512_DATA);
      osc2wavetype = SQR;
    case TRI:
       osc2.setTable(TRIANGLE512_DATA);
      osc2wavetype = TRI;
    break;
    default:
      osc2.setTable(SAW512_DATA);
      osc2wavetype = SAW;
    break;
  }
}
int VASynthVoice::next()
{
  
  return 
    //svf_lowpass.next(
      ((envelope.next()*(osc1.next() + osc2.next())))
      //)
      >>8;
}
void VASynthVoice::noteOn(float freq)
{
  osc1.setFreq(freq);
  osc2.setFreq(freq);
  envelope.noteOn();
}
void VASynthVoice::noteOff()
{
  envelope.noteOff();
}
void VASynthVoice::updateControl()
{
  envelope.update();
}



