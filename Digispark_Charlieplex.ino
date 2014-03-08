/**
 * Testing out the Charlieplex
 */

#include "Digispark_Charlieplex.h"

LetterDisplay* ld;

void setup()
{
  // The letter is code is assumed to be lowercase, but the display is case-agnostic
  LetterDisplay::setLetter('a');
  
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
    LetterDisplay::setLetter(currentLetter);
  }
}

char nextLetter(char current)
{
  //const char modval = 'z' - 'a';
  //return (((current - 'a') + 1) % modval) + 'a';
  return 'a';
}


