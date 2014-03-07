/**
 * Testing out the Charlieplex
 */

#include "Digispark_Charlieplex.h"

LetterDisplay* ld;

void setup()
{
  ld = LetterDisplay::getInstance();
  
  ld->setLetter('a');
  
  setupTimerInterrupt();
}

void loop()
{
  static char currentLetter = 'a';
  static long nextChangeTime = millis() + DELAY;
  
  long currentMillis = millis();
  
  if (currentMillis > nextChangeTime)
  {
    currentLetter = nextLetter(currentLetter);
    nextChangeTime = currentMillis + DELAY;
    ld->setLetter(currentLetter);
  }
}

char nextLetter(char current)
{
  return (((current - 'a') + 1) % 25) + 'a';
}


