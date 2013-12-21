/**
 * Display different letters
 */

#include <Arduino.h>
#include "LetterDisplay.h"
#include "Digispark_Pins.h"

#define LED_DELAY 500

void LEDon(int vin, int gnd)
{
  pinMode(CH_0, INPUT);
  pinMode(CH_1, INPUT);
  pinMode(CH_2, INPUT);
  pinMode(CH_3, INPUT);
  pinMode(CH_4, INPUT);
  
  pinMode(vin, OUTPUT);
  pinMode(gnd, OUTPUT);
  
  digitalWrite(vin, HIGH);
  digitalWrite(gnd, LOW);
  
  delayMicroseconds(LED_DELAY);
}

void allOn()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_2);
  LEDon(CH_1, CH_3);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_1);
  LEDon(CH_3, CH_2);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
  LEDon(CH_4, CH_3);
}

void showA()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
}

void showB()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
}

void showC()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
}

void showD()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2); 
}

void showE()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_0);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
  LEDon(CH_4, CH_3);
}

void showF()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_1, CH_0);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_0);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
  LEDon(CH_4, CH_3);
}

void showG()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_3);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
  LEDon(CH_4, CH_3);
}

void showH()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showI()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_2);
  LEDon(CH_1, CH_3);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_1);
  LEDon(CH_3, CH_2);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
  LEDon(CH_4, CH_3);
}

void showJ()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_3);
}

void showK()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_3);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_2);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showL()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_2, CH_0);
  LEDon(CH_3, CH_0);
  LEDon(CH_4, CH_0);
}

void showM()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_1);
  LEDon(CH_3, CH_2);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showN()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_3);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_3);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_1);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showO()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
}

void showP()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_1, CH_0);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
}

void showQ()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_3);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
}

void showR()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_3);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
}

void showS()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
  LEDon(CH_4, CH_3);
}

void showT()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_2);
  LEDon(CH_1, CH_3);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_1);
  LEDon(CH_3, CH_2);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
  LEDon(CH_4, CH_3);
}

void showU()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showV()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_3);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showW()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_2);
  LEDon(CH_1, CH_3);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_0);
  LEDon(CH_2, CH_4);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showX()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_0);
  LEDon(CH_1, CH_4);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showY()
{
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_1, CH_2);
  LEDon(CH_1, CH_3);
  LEDon(CH_2, CH_1);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_0);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_3);
}

void showZ()
{
  LEDon(CH_0, CH_1);
  LEDon(CH_0, CH_2);
  LEDon(CH_0, CH_3);
  LEDon(CH_0, CH_4);
  LEDon(CH_1, CH_2);
  LEDon(CH_2, CH_3);
  LEDon(CH_3, CH_4);
  LEDon(CH_4, CH_0);
  LEDon(CH_4, CH_1);
  LEDon(CH_4, CH_2);
  LEDon(CH_4, CH_3);
}
