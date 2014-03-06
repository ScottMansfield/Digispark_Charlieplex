/**
 * Timer interrupt handlers
 */

#include "Interrupts.h"

// Timer 1 register descriptions start on p.89 of the long data sheet
void setupTimerInterrupt ()
{
  // Disable interrupts while we're messing with them
  cli();

  // Enable Clear Timer on Compare Match
  // (i.e. the counter resets when it matches the 1C register)
  TCCR1 = (1 << CTC1);
  // divide the clock by 128
  //TCCR1 |= (1 << CS13);
  // divide the clock by 16384
  TCCR1 |= (1 << CS13) | (1 << CS12) | (1 << CS11) | (1 << CS10);
  
  // Make sure the output is disconnected from any pins
  GTCCR = 0;

  // Set output compare register A to be max value
  OCR1A = COUNTER_VAL;
  // Also set C because TCNT1 only resets after a match on C
  OCR1C = COUNTER_VAL;

  // Reset the timer counter
  TCNT1 = 0;

  // Enable timer 0 compare (A) interrupt in timer interrupt mask register
  // p.81 of long data sheet
  TIMSK = (1 << OCIE1A);

  // Enable interrupts
  sei();
}

ISR (TIM1_COMPA_vect)
{
  static uint8_t curLed = 0;
  
  curLed = (curLed + 1) % numLeds;
  
  // These globals are defined in Interrupts.h
  uint8_t led = coords[curLed];
  uint8_t row = (led & 0xF0) >> 4;
  uint8_t col = led & 0x0F;
  
  // Set all pins to INPUT at the same time
  DDRB = 0;
  PORTB = 0;
  
  pinMode(row, OUTPUT);  
  pinMode(col, OUTPUT);

  digitalWrite(row, HIGH);
  digitalWrite(col, LOW);
}


