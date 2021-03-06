/**
 * Display different letters
 */

#include "LetterDisplay.h"

//////////////////////////////////////////
// A whole bunch of data initialization //
//////////////////////////////////////////
uint8_t LetterDisplay::currentLetter = 0;
uint8_t LetterDisplay::currentIndex = 0;

// The lengths of each letter's coordinates in the data array
// Data are from A to Z
const uint8_t* LetterDisplay::coordsLengths = (uint8_t[]) {
  12, 13, 9,  12, 13,
  10, 11, 12, 14, 7,
  10, 8,  12, 13, 10,
  10, 12, 12, 10, 12,
  10, 9,  12, 10, 10,
  11 };

// The start index of the data for each letter
// Data are from A to Z
const uint16_t* LetterDisplay::letterIndices = (uint16_t[]) {
  0,   13,  26,  35,  47,
  60,  70,  81,  93,  107,
  114, 124, 132, 144, 157,
  167, 177, 189, 201, 211,
  223, 233, 242, 254, 264,
  274 };

// The data that make up the letters
const uint8_t* LetterDisplay::letterCoords = (uint8_t[]) {
  // A
  0x01, 0x04, 0x10, 0x14, 0x20, 0x21, 0x23, 0x24, 0x30, 0x34, 0x41, 0x42,
  // B
  0x01, 0x02, 0x03, 0x10, 0x14, 0x20, 0x21, 0x23, 0x30, 0x34, 0x40, 0x41, 0x42,
  // C
  0x02, 0x03, 0x10, 0x14, 0x20, 0x30, 0x34, 0x41, 0x42,
  // D
  0x01, 0x02, 0x03, 0x10, 0x14, 0x20, 0x24, 0x30, 0x34, 0x40, 0x41, 0x42,
  // E
  0x01, 0x02, 0x03, 0x04, 0x10, 0x20, 0x21, 0x23, 0x30, 0x40, 0x41, 0x42, 0x43,
  // F
  0x01, 0x10, 0x20, 0x21, 0x23, 0x30, 0x40, 0x41, 0x42, 0x43,
  // G
  0x02, 0x03, 0x10, 0x14, 0x20, 0x23, 0x24, 0x30, 0x41, 0x42, 0x43,
  // H
  0x01, 0x04, 0x10, 0x14, 0x20, 0x21, 0x23, 0x24, 0x30, 0x34, 0x40, 0x43,
  // I
  0x01, 0x02, 0x03, 0x04, 0x12, 0x13, 0x21, 0x23, 0x31, 0x32, 0x40, 0x41, 0x42, 0x43,
  // J
  0x02, 0x03, 0x10, 0x14, 0x24, 0x34, 0x43,
  // K
  0x01, 0x04, 0x10, 0x13, 0x20, 0x21, 0x30, 0x32, 0x40, 0x43,
  // L
  0x01, 0x02, 0x03, 0x04, 0x10, 0x20, 0x30, 0x40,
  // M
  0x01, 0x04, 0x10, 0x14, 0x20, 0x24, 0x30, 0x31, 0x32, 0x34, 0x40, 0x43,
  // N
  0x01, 0x04, 0x10, 0x13, 0x14, 0x20, 0x23, 0x24, 0x30, 0x31, 0x34, 0x40, 0x43,
  // O
  0x02, 0x03, 0x10, 0x14, 0x20, 0x24, 0x30, 0x34, 0x41, 0x42,
  // P
  0x01, 0x10, 0x20, 0x21, 0x23, 0x30, 0x34, 0x40, 0x41, 0x42,
  // Q
  0x02, 0x03, 0x04, 0x10, 0x13, 0x14, 0x20, 0x24, 0x30, 0x34, 0x41, 0x42,
  // R
  0x01, 0x04, 0x10, 0x13, 0x20, 0x21, 0x23, 0x30, 0x34, 0x40, 0x41, 0x42,
  // S
  0x01, 0x02, 0x03, 0x14, 0x21, 0x23, 0x30, 0x41, 0x42, 0x43,
  // T
  0x02, 0x03, 0x12, 0x13, 0x21, 0x23, 0x31, 0x32, 0x40, 0x41, 0x42, 0x43,
  // U
  0x02, 0x03, 0x10, 0x14, 0x20, 0x24, 0x30, 0x34, 0x40, 0x43,
  // V
  0x02, 0x10, 0x13, 0x20, 0x24, 0x30, 0x34, 0x40, 0x43,
  // W
  0x01, 0x04, 0x10, 0x12, 0x13, 0x14, 0x20, 0x24, 0x30, 0x34, 0x40, 0x43,
  // X
  0x01, 0x04, 0x10, 0x14, 0x21, 0x23, 0x30, 0x34, 0x40, 0x43,
  // Y
  0x02, 0x03, 0x12, 0x13, 0x21, 0x23, 0x30, 0x34, 0x40, 0x43,
  // Z
  0x01, 0x02, 0x03, 0x04, 0x12, 0x23, 0x34, 0x40, 0x41, 0x42, 0x43 };

/////////////////////////////
// LetterDisplay functions //
/////////////////////////////
void LetterDisplay::setLetter(char letter)
{
  currentLetter = letter - 'a';
  currentIndex = 0;
}

uint8_t LetterDisplay::getNextCoord()
{
  currentIndex = (currentIndex + 1) % coordsLengths[currentLetter];
  uint16_t base = letterIndices[currentIndex];
  
  return letterCoords[base + currentIndex];
}

