/**
 * Timer interrupt handlers
 */

#ifndef INTERRUPTS_H
#define INTERRUPTS_H

#include "wiring.h"
#include <avr/interrupt.h>

#include "LetterDisplay.h"

#define COUNTER_VAL 0x7F

void setupTimerInterrupt();

#endif /* INTERRUPTS_H */
