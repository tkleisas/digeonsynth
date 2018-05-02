#ifndef DIGEON_SCREEN_CPP
#define DIGEON_SCREEN_CPP
#include "digeon_screen.h"
  Screen::Screen()
  {
    
  }
  void Screen::clear()
  {
    for(int i=0;i<1024;i++)
    {
      vidbuf[i]=0;
    }
  }
  void Screen::clearText()
  {
    for(int i=0;i<128;i++)
    {
      charbuf[i]=0;
    }
  }
void Screen::updateTextOverlay()
{
  
  for(int i=0;i<128;i++)
  {
    if(charbuf[i]<32)
    {
      vidbuf[i>>3] = vidbuf[i>>3] | 0;
      vidbuf[i>>3+1] = vidbuf[i>>3+1] | 0;
      vidbuf[i>>3+2] = vidbuf[i>>3+2] | 0;
      vidbuf[i>>3+3] = vidbuf[i>>3+3] | 0;
      vidbuf[i>>3+4] = vidbuf[i>>3+4] | 0;
      vidbuf[i>>3+5] = vidbuf[i>>3+5] | 0;
      vidbuf[i>>3+6] = vidbuf[i>>3+6] | 0;
      vidbuf[i>>3+7] = vidbuf[i>>3+7] | 0;      
    }
    else
    {
      if(charbuf[i]>>7==1 )
      {
        vidbuf[(i<<3)] = ~fontbmp[((charbuf[i]&127)<<3)];
        vidbuf[(i<<3)+1] = ~fontbmp[((charbuf[i]&127)<<3)+1];
        vidbuf[(i<<3)+2] = ~fontbmp[((charbuf[i]&127)<<3)+2];
        vidbuf[(i<<3)+3] = ~fontbmp[((charbuf[i]&127)<<3)+3];
        vidbuf[(i<<3)+4] = ~fontbmp[((charbuf[i]&127)<<3)+4];
        vidbuf[(i<<3)+5] = ~fontbmp[((charbuf[i]&127)<<3)+5];
        vidbuf[(i<<3)+6] = ~fontbmp[((charbuf[i]&127)<<3)+6];
        vidbuf[(i<<3)+7] = ~fontbmp[((charbuf[i]&127)<<3)+7];
      }
      else
      {
        vidbuf[(i<<3)] = fontbmp[charbuf[i]<<3];
        vidbuf[(i<<3)+1] = fontbmp[(charbuf[i]<<3)+1];
        vidbuf[(i<<3)+2] = fontbmp[(charbuf[i]<<3)+2];
        vidbuf[(i<<3)+3] = fontbmp[(charbuf[i]<<3)+3];
        vidbuf[(i<<3)+4] = fontbmp[(charbuf[i]<<3)+4];
        vidbuf[(i<<3)+5] = fontbmp[(charbuf[i]<<3)+5];
        vidbuf[(i<<3)+6] = fontbmp[(charbuf[i]<<3)+6];
        vidbuf[(i<<3)+7] = fontbmp[(charbuf[i]<<3)+7];
      }
    }
  }
}
void Screen::updateTextOverlay2x()
{
  
  for(int i=0;i<64;i++)
  {
    if(charbuf[i]<32)
    {
      vidbuf[i>>3] = vidbuf[i>>3] | 0;
      vidbuf[i>>3+1] = vidbuf[i>>3] | 0;
      vidbuf[i>>3+2] = vidbuf[i>>3+1] | 0;
      vidbuf[i>>3+3] = vidbuf[i>>3+1] | 0;
      vidbuf[i>>3+4] = vidbuf[i>>3+2] | 0;
      vidbuf[i>>3+5] = vidbuf[i>>3+2] | 0;
      vidbuf[i>>3+6] = vidbuf[i>>3+3] | 0;
      vidbuf[i>>3+7] = vidbuf[i>>3+3] | 0;
      vidbuf[i>>3+8] = vidbuf[i>>3+4] | 0;
      vidbuf[i>>3+9] = vidbuf[i>>3+4] | 0;
      vidbuf[i>>3+10] = vidbuf[i>>3+5] | 0;
      vidbuf[i>>3+11] = vidbuf[i>>3+5] | 0;
      vidbuf[i>>3+12] = vidbuf[i>>3+6] | 0;
      vidbuf[i>>3+13] = vidbuf[i>>3+6] | 0;
      vidbuf[i>>3+14] = vidbuf[i>>3+7] | 0;
      vidbuf[i>>3+15] = vidbuf[i>>3+7] | 0;      
    }
    else
    {
      if(charbuf[i]>>7==1 )
      {
        vidbuf[(i<<4)+0] =  ~fontbmp[((charbuf[i]&127)<<3)+0];
        vidbuf[(i<<4)+1] =  ~fontbmp[((charbuf[i]&127)<<3)+0];
        vidbuf[(i<<4)+2] =  ~fontbmp[((charbuf[i]&127)<<3)+1];
        vidbuf[(i<<4)+3] =  ~fontbmp[((charbuf[i]&127)<<3)+1];
        vidbuf[(i<<4)+4] =  ~fontbmp[((charbuf[i]&127)<<3)+2];
        vidbuf[(i<<4)+5] =  ~fontbmp[((charbuf[i]&127)<<3)+2];
        vidbuf[(i<<4)+6] =  ~fontbmp[((charbuf[i]&127)<<3)+3];
        vidbuf[(i<<4)+7] =  ~fontbmp[((charbuf[i]&127)<<3)+3];
        vidbuf[(i<<4)+8] =  ~fontbmp[((charbuf[i]&127)<<3)+4];
        vidbuf[(i<<4)+9] =  ~fontbmp[((charbuf[i]&127)<<3)+4];
        vidbuf[(i<<4)+10] = ~fontbmp[((charbuf[i]&127)<<3)+5];
        vidbuf[(i<<4)+11] = ~fontbmp[((charbuf[i]&127)<<3)+5];
        vidbuf[(i<<4)+12] = ~fontbmp[((charbuf[i]&127)<<3)+6];
        vidbuf[(i<<4)+13] = ~fontbmp[((charbuf[i]&127)<<3)+6];
        vidbuf[(i<<4)+14] = ~fontbmp[((charbuf[i]&127)<<3)+7];
        vidbuf[(i<<4)+15] = ~fontbmp[((charbuf[i]&127)<<3)+7];
        
      }
      else
      {
        vidbuf[(i<<4)+0] =  fontbmp[(charbuf[i]<<3)+0];
        vidbuf[(i<<4)+1] =  fontbmp[(charbuf[i]<<3)+0];
        vidbuf[(i<<4)+2] =  fontbmp[(charbuf[i]<<3)+1];
        vidbuf[(i<<4)+3] =  fontbmp[(charbuf[i]<<3)+1];
        vidbuf[(i<<4)+4] =  fontbmp[(charbuf[i]<<3)+2];
        vidbuf[(i<<4)+5] =  fontbmp[(charbuf[i]<<3)+2];
        vidbuf[(i<<4)+6] =  fontbmp[(charbuf[i]<<3)+3];
        vidbuf[(i<<4)+7] =  fontbmp[(charbuf[i]<<3)+3];
        vidbuf[(i<<4)+8] =  fontbmp[(charbuf[i]<<3)+4];
        vidbuf[(i<<4)+9] =  fontbmp[(charbuf[i]<<3)+4];
        vidbuf[(i<<4)+10] = fontbmp[(charbuf[i]<<3)+5];
        vidbuf[(i<<4)+11] = fontbmp[(charbuf[i]<<3)+5];
        vidbuf[(i<<4)+12] = fontbmp[(charbuf[i]<<3)+6];
        vidbuf[(i<<4)+13] = fontbmp[(charbuf[i]<<3)+6];
        vidbuf[(i<<4)+14] = fontbmp[(charbuf[i]<<3)+7];
        vidbuf[(i<<4)+15] = fontbmp[(charbuf[i]<<3)+7];
        
      }
    }
  }
}

uint16_t doubleByte(uint8_t b)
{
  uint16_t retval = 0;
  retval = ((b&128) <<8) | ((b&128)<<7) |
            ((b&64)<<7) | ((b&64)<<6) |
            ((b&32)<<6) | ((b&32)<<5) |
            ((b&16)<<5) | ((b&16)<<4) |
            ((b&8)<<4) | ((b&8)<<3) |
            ((b&4)<<3) | ((b&4) <<2) |
            ((b&2)<<2) | ((b&2)<< 1) |
            ((b&1)<<1) | (b&1);
   return retval; 
}

void Screen::updateTextOverlay4x()
{
  
  for(int i=0;i<64;i++)
  {
    if(charbuf[i]<32)
    {
      vidbuf[i>>3] = vidbuf[i>>3] | 0;
      vidbuf[i>>3+1] = vidbuf[i>>3+1] | 0;
      vidbuf[i>>3+2] = vidbuf[i>>3+2] | 0;
      vidbuf[i>>3+3] = vidbuf[i>>3+3] | 0;
      vidbuf[i>>3+4] = vidbuf[i>>3+4] | 0;
      vidbuf[i>>3+5] = vidbuf[i>>3+5] | 0;
      vidbuf[i>>3+6] = vidbuf[i>>3+6] | 0;
      vidbuf[i>>3+7] = vidbuf[i>>3+7] | 0;
      vidbuf[i>>3+8] = vidbuf[i>>3+8] | 0;
      vidbuf[i>>3+9] = vidbuf[i>>3+9] | 0;
      vidbuf[i>>3+10] = vidbuf[i>>3+10] | 0;
      vidbuf[i>>3+11] = vidbuf[i>>3+11] | 0;
      vidbuf[i>>3+12] = vidbuf[i>>3+12] | 0;
      vidbuf[i>>3+13] = vidbuf[i>>3+13] | 0;
      vidbuf[i>>3+14] = vidbuf[i>>3+14] | 0;
      vidbuf[i>>3+15] = vidbuf[i>>3+15] | 0;
      vidbuf[i>>3+128] = vidbuf[i>>3+128] | 0;
      vidbuf[i>>3+129] = vidbuf[i>>3+129] | 0;
      vidbuf[i>>3+130] = vidbuf[i>>3+130] | 0;
      vidbuf[i>>3+131] = vidbuf[i>>3+131] | 0;
      vidbuf[i>>3+132] = vidbuf[i>>3+132] | 0;
      vidbuf[i>>3+133] = vidbuf[i>>3+133] | 0;
      vidbuf[i>>3+134] = vidbuf[i>>3+134] | 0;
      vidbuf[i>>3+135] = vidbuf[i>>3+135] | 0;
      vidbuf[i>>3+136] = vidbuf[i>>3+136] | 0;
      vidbuf[i>>3+137] = vidbuf[i>>3+137] | 0;
      vidbuf[i>>3+138] = vidbuf[i>>3+138] | 0;
      vidbuf[i>>3+139] = vidbuf[i>>3+139] | 0;
      vidbuf[i>>3+140] = vidbuf[i>>3+140] | 0;
      vidbuf[i>>3+141] = vidbuf[i>>3+141] | 0;
      vidbuf[i>>3+142] = vidbuf[i>>3+142] | 0;
      vidbuf[i>>3+143] = vidbuf[i>>3+143] | 0;      
    }
    else
    {
      
      if(charbuf[i]>>7==1 )
      {

        vidbuf[(i<<4)] =   ~(doubleByte(fontbmp[(charbuf[i]<<3)]));
        vidbuf[(i<<4)+1] = ~(doubleByte(fontbmp[(charbuf[i]<<3)]));
        vidbuf[(i<<4)+2] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+1]));
        vidbuf[(i<<4)+3] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+1]));
        vidbuf[(i<<4)+4] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+2]));
        vidbuf[(i<<4)+5] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+2]));
        vidbuf[(i<<4)+6] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+3]));
        vidbuf[(i<<4)+7] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+3]));
        vidbuf[(i<<4)+8] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+4]));
        vidbuf[(i<<4)+9] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+4]));
        vidbuf[(i<<4)+10] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+5]));
        vidbuf[(i<<4)+11] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+5]));
        vidbuf[(i<<4)+12] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+6]));
        vidbuf[(i<<4)+13] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+6]));
        vidbuf[(i<<4)+14] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+7]));
        vidbuf[(i<<4)+15] = ~(doubleByte(fontbmp[(charbuf[i]<<3)+7]));
        vidbuf[(i<<4)+128] = ~((doubleByte(fontbmp[(charbuf[i]<<3)])>>8)&255);
        vidbuf[(i<<4)+129] = ~((doubleByte(fontbmp[(charbuf[i]<<3)])>>8)&255);
        vidbuf[(i<<4)+130] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+1])>>8)&255);
        vidbuf[(i<<4)+131] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+1])>>8)&255);
        vidbuf[(i<<4)+132] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+2])>>8)&255);
        vidbuf[(i<<4)+133] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+2])>>8)&255);
        vidbuf[(i<<4)+134] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+3])>>8)&255);
        vidbuf[(i<<4)+135] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+3])>>8)&255);
        vidbuf[(i<<4)+136] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+4])>>8)&255);
        vidbuf[(i<<4)+137] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+4])>>8)&255);
        vidbuf[(i<<4)+138] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+5])>>8)&255);
        vidbuf[(i<<4)+139] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+5])>>8)&255);
        vidbuf[(i<<4)+140] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+6])>>8)&255);
        vidbuf[(i<<4)+141] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+6])>>8)&255);
        vidbuf[(i<<4)+142] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+7])>>8)&255);
        vidbuf[(i<<4)+143] = ~((doubleByte(fontbmp[(charbuf[i]<<3)+7])>>8)&255);
                
      }
      else
      {
        
        vidbuf[(i<<4)] =   doubleByte(fontbmp[(charbuf[i]<<3)]);
        vidbuf[(i<<4)+1] = doubleByte(fontbmp[(charbuf[i]<<3)]);
        vidbuf[(i<<4)+2] = doubleByte(fontbmp[(charbuf[i]<<3)+1]);
        vidbuf[(i<<4)+3] = doubleByte(fontbmp[(charbuf[i]<<3)+1]);
        vidbuf[(i<<4)+4] = doubleByte(fontbmp[(charbuf[i]<<3)+2]);
        vidbuf[(i<<4)+5] = doubleByte(fontbmp[(charbuf[i]<<3)+2]);
        vidbuf[(i<<4)+6] = doubleByte(fontbmp[(charbuf[i]<<3)+3]);
        vidbuf[(i<<4)+7] = doubleByte(fontbmp[(charbuf[i]<<3)+3]);
        vidbuf[(i<<4)+8] = doubleByte(fontbmp[(charbuf[i]<<3)+4]);
        vidbuf[(i<<4)+9] = doubleByte(fontbmp[(charbuf[i]<<3)+4]);
        vidbuf[(i<<4)+10] = doubleByte(fontbmp[(charbuf[i]<<3)+5]);
        vidbuf[(i<<4)+11] = doubleByte(fontbmp[(charbuf[i]<<3)+5]);
        vidbuf[(i<<4)+12] = doubleByte(fontbmp[(charbuf[i]<<3)+6]);
        vidbuf[(i<<4)+13] = doubleByte(fontbmp[(charbuf[i]<<3)+6]);
        vidbuf[(i<<4)+14] = doubleByte(fontbmp[(charbuf[i]<<3)+7]);
        vidbuf[(i<<4)+15] = doubleByte(fontbmp[(charbuf[i]<<3)+7]);
        vidbuf[(i<<4)+128] = doubleByte(fontbmp[(charbuf[i]<<3)])>>8;
        vidbuf[(i<<4)+129] = doubleByte(fontbmp[(charbuf[i]<<3)])>>8;
        vidbuf[(i<<4)+130] = doubleByte(fontbmp[(charbuf[i]<<3)+1])>>8;
        vidbuf[(i<<4)+131] = doubleByte(fontbmp[(charbuf[i]<<3)+1])>>8;
        vidbuf[(i<<4)+132] = doubleByte(fontbmp[(charbuf[i]<<3)+2])>>8;
        vidbuf[(i<<4)+133] = doubleByte(fontbmp[(charbuf[i]<<3)+2])>>8;
        vidbuf[(i<<4)+134] = doubleByte(fontbmp[(charbuf[i]<<3)+3])>>8;
        vidbuf[(i<<4)+135] = doubleByte(fontbmp[(charbuf[i]<<3)+3])>>8;
        vidbuf[(i<<4)+136] = doubleByte(fontbmp[(charbuf[i]<<3)+4])>>8;
        vidbuf[(i<<4)+137] = doubleByte(fontbmp[(charbuf[i]<<3)+4])>>8;
        vidbuf[(i<<4)+138] = doubleByte(fontbmp[(charbuf[i]<<3)+5])>>8;
        vidbuf[(i<<4)+139] = doubleByte(fontbmp[(charbuf[i]<<3)+5])>>8;
        vidbuf[(i<<4)+140] = doubleByte(fontbmp[(charbuf[i]<<3)+6])>>8;
        vidbuf[(i<<4)+141] = doubleByte(fontbmp[(charbuf[i]<<3)+6])>>8;
        vidbuf[(i<<4)+142] = doubleByte(fontbmp[(charbuf[i]<<3)+7])>>8;
        vidbuf[(i<<4)+143] = doubleByte(fontbmp[(charbuf[i]<<3)+7])>>8;
        
      }
    }
  }
}


void Screen::update() // send changes to the video buffer to the spi display
{
  digitalWrite(OLED_DC, LOW); //Command mode
  digitalWrite(OLED_CS, LOW); //Enable display on SPI bus
 
  SPI.transfer(0x21); // Set column address
  SPI.transfer(0);
  SPI.transfer(127);

  SPI.transfer(0x22); // Set page address
  SPI.transfer(0);
  SPI.transfer(7);

  digitalWrite(OLED_CS, HIGH); //Disable display on SPI bus
 
  digitalWrite(OLED_DC, HIGH); // Data

  digitalWrite(OLED_CS, LOW); //Enable display on SPI bus

  //Send matrix data for display on OLED
  for(int i=0;i<1024;i++)
  {
    SPI.transfer(vidbuf[i]);
  }   
  
  digitalWrite(OLED_CS, HIGH); //Disable display on SPI bus
}
 

void Screen::init()
{
    pinMode(OLED_DC, OUTPUT);
    pinMode(OLED_CS, OUTPUT);
    pinMode(OLED_RESET, OUTPUT);
  
    SPI.begin();
    SPI.setBitOrder(MSBFIRST); // Set the SPI bit order
    SPI.setDataMode(SPI_MODE0); //Set the  SPI data mode 0
    SPI.setClockDivider(SPI_CLOCK_DIV4); // 2.25  MHz
  
    digitalWrite(OLED_RESET, HIGH);
    delay(10);
    digitalWrite(OLED_RESET, LOW);
    delay(100);
    digitalWrite(OLED_RESET, HIGH);
  
    digitalWrite(OLED_DC, LOW);
    digitalWrite(OLED_CS, LOW);
   
    SPI.transfer(0xAE); // Display off
    SPI.transfer(0xD5); // Set display clock divider
    SPI.transfer(0x80);
    SPI.transfer(0xA8); // Set multiplex
    SPI.transfer(0x3F);
    SPI.transfer(0xD3); // Set display offset
    SPI.transfer(0x00);
    SPI.transfer(0x40); // Set start line to zero
    SPI.transfer(0x8D); // Set charge pump
    SPI.transfer(0x14);
    SPI.transfer(0x20); // Set memory mode
    SPI.transfer(0x00);
    SPI.transfer(0xA0 | 0x1); // Set segment remapping
    SPI.transfer(0xC8); // Set command Scan decode
    SPI.transfer(0xDA); // Set Comm pins
    SPI.transfer(0x12);
    SPI.transfer(0x81); // Set contrast
    //SPI.transfer(0xCF);
    SPI.transfer(0x00);
    

    
    SPI.transfer(0xd9); // Set precharge
    SPI.transfer(0xF1);
    SPI.transfer(0xDB); // Set Vcom detect
    SPI.transfer(0x40);
    SPI.transfer(0xA4); // Allow display resume
    SPI.transfer(0xA6); // Set normal display
    SPI.transfer(0xAF); // Display On
   
    digitalWrite(OLED_CS, HIGH);  
}
void Screen::progressiveTestPattern()
{
  
  
   
}
void Screen::createTestPattern()
{
  static uint8_t b = 0;
  for (uint8_t col = 0; col < 8; col++) {
    for (uint8_t row = 0; row <= 127; row++) {
      vidbuf[col*8+row]=b++; 
    }
   }
   b++;
}

uint8_t* Screen::getCharBuffer()
{
  return &charbuf[0];
}

void Screen::setPixel(int x, int y, bool pix)
{
  int bufpos = x+((y>>3)<<7);
  uint8_t b = vidbuf[bufpos];
  uint8_t bitpos = 1<<(y%8);
  if(pix)
  {
    b = b | bitpos;
  }
  else
  {
    b = b & ~bitpos;
  }
  vidbuf[bufpos] =  b;
   
   
}
uint8_t* Screen::getVideoBuffer()
{
  return &vidbuf[0];
}

void Screen::writeString(int column, int row, char* text, bool inverse_video)
{
  int pos=column+row*16;
  int i=0;
  
  while(text[i]!=0 && pos+i<128)
  {
    charbuf[pos+i]=inverse_video?text[i]|128:text[i];
    i++;
  }
}
void Screen::writeString(int column, int row, char* text)
{
  writeString(column,row,text,false);
}


#endif


