/**
 * Display different letters
 */

#include "LetterDisplay.h"

LetterDisplay::LetterDisplay()
{
  // Initialize the huge data chunk for
  // 1. The lengths of letter coordinates and
  // 2. The coordinates themselves.
}

void LetterDisplay::allOn()
{
  numLeds = 20;
  uint8_t localCoords[] =
    { 0x01, 0x02, 0x03, 0x04,
      0x10, 0x12, 0x13, 0x14,
      0x20, 0x21, 0x23, 0x24,
      0x30, 0x31, 0x32, 0x34,
      0x40, 0x41, 0x42, 0x43 };
}

void LetterDisplay::showA()
{
  numLeds = 12;
  uint8_t localCoords[] =
    { 0x01, 0x04, 0x10, 0x14,
      0x20, 0x21, 0x23, 0x24,
      0x30, 0x34, 0x41, 0x42 };
}

void LetterDisplay::showB()
{
  numLeds = 13;
  uint8_t localCoords[] =
    { 0x01, 0x02, 0x03, 0x10,
      0x14, 0x20, 0x21, 0x23,
      0x30, 0x34, 0x40, 0x41,
      0x42 };
}

void LetterDisplay::showC()
{
  numLeds = 9;
  uint8_t localCoords[] =
    { 0x02, 0x03, 0x10, 0x14,
      0x20, 0x30, 0x34, 0x41,
      0x42 };
}

void LetterDisplay::showD()
{
  numLeds = 12;
  uint8_t localCoords[] =
    { 0x01, 0x02, 0x03, 0x10,
      0x14, 0x20, 0x24, 0x30,
      0x34, 0x40, 0x41, 0x42 };
}

void LetterDisplay::showE()
{
  numLeds = 13;
  uint8_t localCoords[] =
    { 0x01, 0x02, 0x03, 0x04,
      0x10, 0x20, 0x21, 0x23,
      0x30, 0x40, 0x41, 0x42,
      0x43 };
}

void LetterDisplay::showF()
{
  numLeds = 10;
  uint8_t localCoords[] =
    { 0x01, 0x10, 0x20, 0x21,
      0x23, 0x30, 0x40, 0x41,
      0x42, 0x43 };
}

void LetterDisplay::showG()
{
  numLeds = 11;
  uint8_t localCoords[] =
    { 0x02, 0x03, 0x10, 0x14,
      0x20, 0x23, 0x24, 0x30,
      0x41, 0x42, 0x43 };
}

void LetterDisplay::showH()
{
  numLeds = 12;
  uint8_t localCoords[] =
    { 0x01, 0x04, 0x10, 0x14,
      0x20, 0x21, 0x23, 0x24,
      0x30, 0x34, 0x40, 0x43 };
}

void LetterDisplay::showI()
{
  numLeds = 14;
  uint8_t localCoords[] =
    { 0x01, 0x02, 0x03, 0x04,
      0x12, 0x13, 0x21, 0x23,
      0x31, 0x32, 0x40, 0x41,
      0x42, 0x43 };
}

void LetterDisplay::showJ()
{
  numLeds = 7;
  uint8_t localCoords[] =
    { 0x02, 0x03, 0x10, 0x14,
      0x24, 0x34, 0x43 };
}

void LetterDisplay::showK()
{
  numLeds = 10;
  uint8_t localCoords[] =
    { 0x01, 0x04, 0x10, 0x13,
      0x20, 0x21, 0x30, 0x32,
      0x40, 0x43 };
}

void LetterDisplay::showL()
{
  numLeds = 8;
  uint8_t localCoords[] =
    { 0x01, 0x02, 0x03, 0x04,
      0x10, 0x20, 0x30, 0x40 };
}

void LetterDisplay::showM()
{
  numLeds = 12;
  uint8_t localCoords[] =
    { 0x01, 0x04, 0x10, 0x14,
      0x20, 0x24, 0x30, 0x31,
      0x32, 0x34, 0x40, 0x43 };
}

void LetterDisplay::showN()
{
  numLeds = 13;
  uint8_t localCoords[] =
    { 0x01, 0x04, 0x10, 0x13,
      0x14, 0x20, 0x23, 0x24,
      0x30, 0x31, 0x34, 0x40,
      0x43 };
}

void LetterDisplay::showO()
{
  numLeds = 10;
  uint8_t localCoords[] =
    { 0x02, 0x03, 0x10, 0x14,
      0x20, 0x24, 0x30, 0x34,
      0x41, 0x42 };
}

void LetterDisplay::showP()
{
  numLeds = 10;
  uint8_t localCoords[] =
    { 0x01, 0x10, 0x20, 0x21,
      0x23, 0x30, 0x34, 0x40,
      0x41, 0x42 };
}

void LetterDisplay::showQ()
{
  numLeds = 12;
  uint8_t localCoords[] =
    { 0x02, 0x03, 0x04, 0x10,
      0x13, 0x14, 0x20, 0x24,
      0x30, 0x34, 0x41, 0x42 };
}

void LetterDisplay::showR()
{
  numLeds = 12;
  uint8_t localCoords[] =
    { 0x01, 0x04, 0x10, 0x13,
      0x20, 0x21, 0x23, 0x30,
      0x34, 0x40, 0x41, 0x42 };
}

void LetterDisplay::showS()
{
  numLeds = 10;
  uint8_t localCoords[] =
    { 0x01, 0x02, 0x03, 0x14,
      0x21, 0x23, 0x30, 0x41,
      0x42, 0x43 };
}

void LetterDisplay::showT()
{
  numLeds = 12;
  uint8_t localCoords[] =
    { 0x02, 0x03, 0x12, 0x13,
      0x21, 0x23, 0x31, 0x32,
      0x40, 0x41, 0x42, 0x43 };
}

void LetterDisplay::showU()
{
  numLeds = 10;
  uint8_t localCoords[] =
    { 0x02, 0x03, 0x10, 0x14,
      0x20, 0x24, 0x30, 0x34,
      0x40, 0x43 };
}

void LetterDisplay::showV()
{
  numLeds = 9;
  uint8_t localCoords[] =
    { 0x02, 0x10, 0x13, 0x20,
      0x24, 0x30, 0x34, 0x40,
      0x43 };
}

void LetterDisplay::showW()
{
  numLeds = 12;
  uint8_t localCoords[] =
    { 0x01, 0x04, 0x10, 0x12,
      0x13, 0x14, 0x20, 0x24,
      0x30, 0x34, 0x40, 0x43 };
}

void LetterDisplay::showX()
{
  numLeds = 10;
  uint8_t localCoords[] =
    { 0x01, 0x04, 0x10, 0x14,
      0x21, 0x23, 0x30, 0x34,
      0x40, 0x43 };
}

void LetterDisplay::showY()
{
  numLeds = 10;
  uint8_t localCoords[] =
    { 0x02, 0x03, 0x12, 0x13,
      0x21, 0x23, 0x30, 0x34,
      0x40, 0x43 };
}

void LetterDisplay::showZ()
{
  numLeds = 11;
  uint8_t localCoords[] =
    { 0x01, 0x02, 0x03, 0x04,
      0x12, 0x23, 0x34, 0x40,
      0x41, 0x42, 0x43 };
}
