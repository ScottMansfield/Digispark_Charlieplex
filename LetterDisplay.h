/**
 * Display different letters
 */

#include <Arduino.h>
#include "Digispark_Charlieplex.h"

#define LED_DELAY 1

void LEDon(int vin, int gnd)
{
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  
  pinMode(vin, OUTPUT);
  pinMode(gnd, OUTPUT);
  
  digitalWrite(vin, HIGH);
  digitalWrite(gnd, LOW);
  
  delay(LED_DELAY);
}

void allOn()
{
  LEDon(0, 1);
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 2);
  LEDon(1, 3);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 1);
  LEDon(3, 2);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
  LEDon(4, 3);
}

void showA()
{
  LEDon(0, 1);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 1);
  LEDon(4, 2);
}

void showB()
{
  LEDon(0, 1);
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
}

void showC()
{
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 1);
  LEDon(4, 2);
}

void showD()
{
  LEDon(0, 1);
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2); 
}

void showE()
{
  LEDon(0, 1);
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 0);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
  LEDon(4, 3);
}

void showF()
{
  LEDon(0, 1);
  LEDon(1, 0);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 0);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
  LEDon(4, 3);
}

void showG()
{
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 3);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(4, 1);
  LEDon(4, 2);
  LEDon(4, 3);
}

void showH()
{
  LEDon(0, 1);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showI()
{
  LEDon(0, 1);
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(0, 4);
  LEDon(1, 2);
  LEDon(1, 3);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 1);
  LEDon(3, 2);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
  LEDon(4, 3);
}

void showJ()
{
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 4);
  LEDon(3, 4);
  LEDon(4, 3);
}

void showK()
{
  LEDon(0, 1);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 3);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(3, 0);
  LEDon(3, 2);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showL()
{
  LEDon(0, 1);
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(2, 0);
  LEDon(3, 0);
  LEDon(4, 0);
}

void showM()
{
  LEDon(0, 1);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 1);
  LEDon(3, 2);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showN()
{
  LEDon(0, 1);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 3);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 3);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 1);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showO()
{
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 1);
  LEDon(4, 2);
}

void showP()
{
  LEDon(0, 1);
  LEDon(1, 0);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
}

void showQ()
{
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 3);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 1);
  LEDon(4, 2);
}

void showR()
{
  LEDon(0, 1);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 3);
  LEDon(2, 0);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
}

void showS()
{
  LEDon(0, 1);
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 4);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 0);
  LEDon(4, 1);
  LEDon(4, 2);
  LEDon(4, 3);
}

void showT()
{
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 2);
  LEDon(1, 3);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 1);
  LEDon(3, 2);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
  LEDon(4, 3);
}

void showU()
{
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showV()
{
  LEDon(0, 2);
  LEDon(1, 0);
  LEDon(1, 3);
  LEDon(2, 0);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showW()
{
  LEDon(0, 1);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 2);
  LEDon(1, 3);
  LEDon(1, 4);
  LEDon(2, 0);
  LEDon(2, 4);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showX()
{
  LEDon(0, 1);
  LEDon(0, 4);
  LEDon(1, 0);
  LEDon(1, 4);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showY()
{
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(1, 2);
  LEDon(1, 3);
  LEDon(2, 1);
  LEDon(2, 3);
  LEDon(3, 0);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 3);
}

void showZ()
{
  LEDon(0, 1);
  LEDon(0, 2);
  LEDon(0, 3);
  LEDon(0, 4);
  LEDon(1, 2);
  LEDon(2, 3);
  LEDon(3, 4);
  LEDon(4, 0);
  LEDon(4, 1);
  LEDon(4, 2);
  LEDon(4, 3);
}
