/**
 * Display different letters
 */

#ifndef LETTER_DISPLAY_H
#define LETTER_DISPLAY_H

#include <stdint.h>

class LetterDisplay
{
public:
  static LetterDisplay* getInstance();
  
  // Sets the internal state to display the next letter
  void setLetter(char l);
  
  // Gets the next coordinate to display, playing by all the rules
  uint8_t getNextCoord();

private:
  // Private constructor for privacy
  LetterDisplay() { };
  
  // Other private constructors to prevent compiler-generated versions
  // These are not implemented.
  LetterDisplay(LetterDisplay const& copy);
  LetterDisplay& operator=(LetterDisplay const& copy);
  
  // Keeping track of the state, basically the coords on display
  uint8_t currentLetter;
  uint8_t currentIndex;
  
  // The index of the start of a letter in the coordinates array
  // the indices go above 255, so I need 16 bits here :(
  static const uint16_t* letterIndices;
  
  // The length (number of coordinates) of each letter
  static const uint8_t* coordsLengths;
  
  // The data that make up each letter, all concatenated
  static const uint8_t* letterCoords;
};

#endif /* LETTER_DISPLAY_H */
