#ifndef FONT8X8CWT
#define FONT8X8CWT
#include "Arduino.h"
#include <stdlib.h>
#ifdef AVR
#include <avr/pgmspace.h>
#endif
const uint8_t fontbmp [(32 + 32 + 32 + 32)*8] PROGMEM = 
{

  B00010000,
  B00111000,
  B01111100,
  B00111000,
  B00111000,
  B00111000,
  B00111000,
  B00111000,
  
  B00111000,
  B00111000,
  B00111000,
  B00111000,
  B00111000,
  B01111100,
  B00111000,
  B00010000,
  
  B00000000,
  B00000100,
  B11111110,
  B11111111,
  B11111110,
  B00000100,
  B00000000,
  B00000000,
  
  B00000000,
  B00100000,
  B01111111,
  B11111111,
  B01111111,
  B00100000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B11110000,
  B11110000,
  B11110000,
  B11110000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00001111,
  B00001111,
  B00001111,
  B00001111,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00001111,
  B00001111,
  B00001111,
  B00001111,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11110000,
  B11110000,
  B11110000,
  B11110000,
  
  B00001111,
  B00001111,
  B00001111,
  B00001111,
  B11110000,
  B11110000,
  B11110000,
  B11110000,
  
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B00000000,
  B00000000,
  B00000000,
  
  B00011000,
  B00011000,
  B00011000,
  B00011111,
  B00011111,
  B00000000,
  B00000000,
  B00000000,
  
  B00011000,
  B00011000,
  B00011000,
  B11111000,
  B11111000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B11111000,
  B11111000,
  B00011000,
  B00011000,
  B00011000,
  
  B00000000,
  B00000000,
  B00000000,
  B00011111,
  B00011111,
  B00011000,
  B00011000,
  B00011000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B01111111,
  B01111111,
  B00000000, // PAUSE
  B01111111,
  B01111111,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B01111111,
  B01111111, // 26 stop
  B01111111,
  B01111111,
  B00000000,
  B00000000,
  
  B00000000,
  B00000000,
  B01111111, //27 play
  B00111110,
  B00011100,
  B00001000,
  B00000000,
  B00000000,
  
  B01100000,
  B11110000,
  B11110000,
  B11110000,
  B01111110,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000,
  B00000001,
  B00000011,
  B01110101,
  B11111001,
  B11111001,
  B11111000,
  B01110000,
  
  B00111100, //30 filled circle
  B01111110,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  
  B00111100, //31 circle
  B01000010,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B01000010,
  B00111100,
  
  



  B00000000, // SPACE
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // !
  B00000000,
  B00000000,
  B01011110,
  B01011110,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // "
  B00000000,
  B00000000,
  B00000110,
  B00000000,
  B00000110,
  B00000000,
  B00000000,
  
  B00000000, // #
  B00100100,
  B01111110,
  B00100100,
  B00100100,  
  B01111110,
  B00100100,
  B00000000,
  
  B00000000, // $
  B01000100,
  B01001010,
  B11111111,
  B01001010,
  B11111111,
  B01110010,
  B00000000,
  
  B00000000, // %
  B01000010,
  B00100010,
  B00010000,
  B00001000,
  B01000100,
  B01000010,
  B00000000,
  
  B00000000, // &
  B01100100,
  B10011010,
  B10011010,
  B10011010,
  B01100100,
  B10010000,
  B00000000,
  
  B00000000, // '
  B00000000,
  B00000000,
  B00000110,
  B00000110,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // (
  B00000000,
  B00111100,
  B01100110,
  B01000010,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // )
  B00000000,
  B01000010,
  B01100110,
  B00111100,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // *
  B00010000, 
  B01010100,
  B00111000,
  B11111111,
  B00111000,
  B01010100,
  B00010000,
  
  
  B00000000, // +
  B00011000,
  B00011000,
  B01111110,
  B01111110,
  B00011000,
  B00011000,
  B00000000,
  
  B00000000, // ,
  B00000000,
  B01000000,
  B00110000,
  B00110000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // -
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  
  B00000000, // .
  B00000000,
  B00000000,
  B01100000,
  B01100000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // /
  B01100000,
  B00110000,
  B00011000,
  B00001100,
  B00000110,
  B00000000,
  B00000000,
  
  B00000000, //0
  B00111100, 
  B01111110,
  B01001010,
  B01010010,
  B01111110,
  B00111100,
  B00000000,
  
  B00000000, // 1
  B00000000,
  B01000100,
  B01111110,
  B01111110,
  B01000000,
  B00000000,
  B00000000,
  
  B00000000, // 2
  B01100100,
  B01010010,
  B01010010,
  B01001010,
  B01001100,
  B01000100,
  B00000000,
  
  B00000000, // 3
  B01000010,
  B01001010,
  B01001010,
  B01001010,
  B00111100,
  B00111100,
  B00000000,
  
  B00000000, // 4
  B00011110, 
  B00011110,
  B00010000,
  B01111110,
  B01111110,
  B00010000,
  B00000000,
  
  B00000000, //5
  B01001110,
  B01001010,
  B01001010,
  B01001010,
  B01111010,
  B00110010,
  B00000000,
  
  B00000000, //6
  B00111100,
  B01111110,
  B01001010,
  B01001010,
  B01001010,
  B00110010,
  B00000000,
  
  B00000000, // 7
  B01100010,
  B00110010,
  B00011010,
  B00001110,
  B00000110,
  B00000010,
  B00000000,
  
  B00000000, // 8
  B00110100,
  B01111110,
  B01001010,
  B01001010,
  B01111110,
  B00110100,
  B00000000,
  
  B00000000, // 9
  B00100100,
  B01101110,
  B01001010,
  B01001010,
  B01111110,
  B00111100,
  B00000000,
  
  B00000000, // :
  B00000000,
  B00000000,
  B01100110,
  B01100110,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // ;
  B00000000,
  B10000000,
  B11100110,
  B01100110,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // <
  B00011000,
  B00111100,
  B01100110,
  B11000011,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // = 
  B00000000,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B00000000,
  B00000000,
  
  B00000000, // >
  B11000011,
  B01100110,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // ?
  B00000100,
  B00000010,
  B01010010,
  B01011010,
  B00001100,
  B00001100,
  B00000000,
  
  B01111110, // @
  B10000001,
  B10011001,
  B10100101,
  B10100101,
  B10011001,
  B10100001,
  B00111110,
  
  B00000000, // A
  B01111000,
  B01111100,
  B00010010,
  B00010010,
  B01111100,
  B01111000,
  B00000000,
  
  B00000000, // B
  B01111110,
  B01111110,
  B01001010,
  B01001010,
  B01110110,
  B00110100,
  B00000000,
  
  B00000000,
  B00111100,
  B01111110, // C
  B01000010,
  B01000010,
  B01100110,
  B00100100,
  B00000000,

  B00000000,
  B01111110,
  B01111110,
  B01000010, // D
  B01000010,
  B00100100,
  B00011000,
  B00000000,

  B00000000, // E
  B01111110,
  B01111110,
  B01001010,
  B01001010,
  B01001010,
  B01000010,
  B00000000,
  
  B00000000, // F
  B01111110,
  B01111110,
  B00001010,
  B00001010,
  B00001010,
  B00000010,
  B00000000,
    
  B00000000, // G
  B00111100,
  B01111110,
  B01000010,
  B01001010,
  B01111010,
  B00110010,
  B00000000,
  
  B00000000, // H
  B01111110,
  B01111110,
  B00001000,
  B00001000,
  B01111110,
  B01111110,
  B00000000,
  
  B00000000, // I
  B00000000,
  B01000010,
  B01111110,
  B01111110,
  B01000010,
  B00000000,
  B00000000,
  
  B00000000, // J
  B00000010,
  B01000010,
  B01111110,
  B00111110,
  B00000010,
  B00000010,
  B00000000,
  
  B00000000, // K
  B01111110,
  B01111110,
  B00011000,
  B00100100,
  B01100110,
  B01000010,
  B00000000,
  
  B00000000, // L
  B01111110,
  B01111110,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B00000000,
  
  B00000000, // M
  B01111110, 
  B01111100,
  B00011000,
  B00110000,
  B00011000,
  B01111100,
  B01111110,
  
  B00000000, // N
  B01111110,
  B01111100,
  B00011000,
  B00110000,
  B01111110,
  B01111110,
  B00000000,
  
  B00000000, // O
  B00111100,
  B01111110,
  B01000010,
  B01000010,
  B01111110,
  B00111100,
  B00000000,
  
  B00000000, // P
  B01111110,
  B01111110,
  B00010010,
  B00010010,
  B00011010,
  B00001100,
  B00000000,
  
  B00000000, // Q
  B00111100,
  B01111110,
  B01000010,
  B01011010,
  B01111110,
  B00111100,
  B01100000,
  
  B00000000, // R
  B01111110,
  B01111110,
  B00010010,
  B00110010,
  B01101010,
  B01001100,
  B00000000,
  
  B00000000, // S
  B01001100,
  B01001110,
  B01001010,
  B01001010,
  B00111010,
  B00110010,
  B00000000,
  
  B00000000, // T
  B00000010,
  B00000010,
  B01111110,
  B01111110,
  B00000010,
  B00000010,
  B00000000,
  
  B00000000, // U
  B00111110,
  B01111110,
  B01000000,
  B01000000,
  B01111110,
  B00111110,
  B00000000,
  
  B00000000, // V
  B00001110, 
  B00111000, 
  B01100000,
  B01100000,
  B00111000,
  B00001110,
  B00000000,
  
  B00000000, // W
  B01111110,
  B00111110,
  B00010000,
  B00011000,
  B00010000,
  B00111110,
  B01111110,
  
  B00000000, // X
  B01000010,
  B01100110,
  B00111100,
  B01100110,
  B01000010,
  B00000000,
  
  B00000000, // Y
  B00000010,
  B00000110,
  B01111100,
  B01111100,
  B00000110,
  B00000010,
  B00000000,
  
  B00000000, // Z
  B01100010,
  B01110010,
  B01011010,
  B01001110,
  B01000110,
  B01000010,
  B00000000,
  
  B00000000, // [
  B00000000,
  B01111110,
  B01111110,
  B01000010,
  B01000010,
  B00000000,
  B00000000,
  
  B00000000, // BACKSLASH
  B00000110,
  B00001100,
  B00011000,
  B00110000,
  B01100000,
  B00000000,
  B00000000,
  
  B00000000, // ]
  B00000000,
  B01000010,
  B01000010,
  B01111110,
  B01111110,
  B00000000,
  B00000000,
  
  B00000000, // ^
  B00000000,
  B00001100,
  B00000110,
  B00001100,
  B00000000,
  B00000000,
  B00000000,
  
  B10000000, // _
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  
  B00000000, // BACKQUOTE
  B00000000,
  B00000000,
  B00001010,
  B00000110,
  B00000000,
  B00000000,
  B00000000,
  
  B00000000, // a
  B00100000,
  B01110100,
  B01010100,
  B01010100,
  B01111100,
  B01111000,
  B00000000,
  
  B00000000, // b
  B01111110,
  B01111110,
  B01001000,
  B01001000,
  B01111000,
  B00110000,
  B00000000,
  
  B00000000, // c
  B00110000,
  B01111000,
  B01001000,
  B01001000,
  B01001000,
  B00000000,
  B00000000,
  
  B00000000, // d
  B00110000,
  B01111000,
  B01001000,
  B01001000,
  B01111110,
  B01111110,
  B00000000,
  
  B00000000, // e
  B00111000,
  B01011100,
  B01010100,
  B01010100,
  B01011100,
  B00011000,
  B00000000,
  
  B00000000, // f
  B00000000,
  B01111000,
  B01111100,
  B00010010,
  B00010010,
  B00000000,
  B00000000,
  
  B00000000, // g
  B10011000,
  B10111100,
  B10100100,
  B10100100,
  B01111100,
  B00111000,
  B00000000,

  B00000000, // h
  B01111100,
  B01111100,
  B00010000,
  B00010000,
  B01110000,
  B01100000,
  B00000000,

  B00000000, // i
  B00000000,
  B01000000,
  B01110100,
  B01110100,
  B01000000,
  B00000000,
  B00000000,

  B00000000, // j
  B00000000,
  B10000000,
  B10000000,
  B10000000,
  B11110100,
  B01110100,
  B00000000,

  B00000000, // k
  B00000000,
  B01111100,
  B01111100,
  B00110000,
  B01001000,
  B01001000,
  B00000000,

  B00000000, // l
  B00000000,
  B01000010,
  B01111110,
  B01111110,
  B01000000,
  B00000000,
  B00000000,

  B00000000, // m
  B01110000,
  B01111000,
  B00001100,
  B01111000,
  B00001100,
  B01111000,
  B01110000,

  B00000000, // n
  B00000000,
  B01111100,
  B01111100,
  B00000100,
  B00000100,
  B01111000,
  B00000000,

  B00000000, // o
  B00000000,
  B00111000,
  B01111100,
  B01000100,
  B01111100,
  B00111000,
  B00000000,

  B00000000, // p
  B00000000,
  B11111100,
  B11111100,
  B00100100,
  B00111100,
  B00011000,
  B00000000,

  B00000000, // q
  B00011000,
  B00111100,
  B00100100,
  B11111100,
  B11111100,
  B00000000,
  B00000000,

  B00000000, // r
  B00000000,
  B01111100,
  B01111100,
  B00011000,
  B00001100,
  B00000100,
  B00000000,

  B00000000, // s
  B00000000,
  B01001000,
  B01011100,
  B01110100,
  B00110100,
  B00000000,
  B00000000,

  B00000000, // t
  B00000000,
  B00001000,
  B01111100,
  B01111100,
  B01001000,
  B00000000,
  B00000000,

  B00000000, // u
  B00000000,
  B00111100,
  B01111100,
  B01000000,
  B01111100,
  B00111100,
  B00000000,

  B00000000, // v
  B00001100,
  B00011000,
  B00110000,
  B01100000,
  B00110000,
  B00011000,
  B00001100,

  B00000000, // w
  B00111100,
  B01111100,
  B01000000,
  B01111000,
  B01000000,
  B01111100,
  B00111100,

  B00000000, // x
  B01101100,
  B00101000,
  B00010000,
  B00101000,
  B01101100,
  B00000000,
  B00000000,

  B00000000, // y
  B00001100,
  B10011100,
  B10010000,
  B10010000,
  B01111100,
  B01111100,
  B00000000,

  B00000000, // z
  B01000100,
  B01100100,
  B01110100,
  B01011100,
  B01001100,
  B00000100,
  B00000000,

  B00000000, // {
  B00010000,
  B01101100,
  B10000010,
  B10000010,
  B00000000,
  B00000000,
  B00000000,

  B00000000, // |
  B00000000,
  B00000000,
  B11111111,
  B00000000,
  B00000000,
  B00000000,
  B00000000,

  B00000000, // }
  B00000000,
  B10000010,
  B10000010,
  B01101100,
  B00010000,
  B00000000,
  B00000000,

  B00000000, // ~
  B00001000,
  B00001000,
  B00000100,
  B00001000,
  B00001000,
  B00000100,
  B00000000,

  B00111100, // DEL
  B01000010,
  B10010101,
  B10100001,
  B10100001,
  B10010101,
  B01000010,
  B00111100,


  
};
#endif