/**
 * Display different letters
 */

#ifndef LETTER_DISPLAY_H
#define LETTER_DISPLAY_H

#include "Interrupts.h"

class LetterDisplay
{
public:
  LetterDisplay();
  
  void allOn();

  void showA();
  void showB();
  void showC();
  void showD();
  void showE();
  void showF();
  void showG();
  void showH();
  void showI();
  void showJ();
  void showK();
  void showL();
  void showM();
  void showN();
  void showO();
  void showP();
  void showQ();
  void showR();
  void showS();
  void showT();
  void showU();
  void showV();
  void showW();
  void showX();
  void showY();
  void showZ();

private:
  uint8_t letterIndex;
  uint8_t* coordsLengths;
  uint8_t** letterCoords;
};

#endif /* LETTER_DISPLAY_H */
