/**
 * Timer interrupt handlers
 */

#include <avr/interrupt.h>
#include <Arduino.h>

#define COUNTER_VAL 0x7F

// Timer 1 register descriptions start on p.89 of the long data sheet
void setupTimerZeroInterrupt ()
{
  // Disable interrupts while we're messing with them
  cli();

  // Enable Clear Timer on Compare Match
  // (i.e. the counter resets when it matches the 1C register)
  TCCR1 = (1 << CTC1);
  // divide the clock by 128
  TCCR1 |= (1 << CS13);

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
  static byte curLed = 0;
  static byte numLeds = 12;
  static byte coords[] =
   { 0x01, 0x04, 0x10, 0x14, 0x20, 0x21,
     0x23, 0x24, 0x30, 0x34, 0x41, 0x42 };

  byte led = coords[curLed];
  byte row = (led & 0xF0) >> 4;
  byte col = led & 0x0F;
  
  // Set all pins to INPUT at the same time
  DDRB = 0;
  PORTB = 0;
  
  pinMode(row, OUTPUT);  
  pinMode(col, OUTPUT);

  digitalWrite(row, HIGH);
  digitalWrite(col, LOW);
  
  curLed = (curLed + 1) % numLeds;
}


