/**
 * Testing out the Charlieplex
 */

#include "Digispark_Charlieplex.h"

LetterDisplay* ld;

void setup()
{
  ld = new LetterDisplay();
  
  showLetterForState(STATE_A);
  
  setupTimerInterrupt();
}

void loop()
{
  static state currentState = STATE_A;
  static long nextStateChangeTime = millis() + DELAY;
  
  long currentMillis = millis();
  
  if (currentMillis > nextStateChangeTime)
  {
    currentState = nextState(currentState);
    nextStateChangeTime = currentMillis + DELAY;
    showLetterForState(currentState);
  }
}

state nextState(state current)
{
  return (current + 1) % NUM_STATES; 
}

void showLetterForState(state current)
{
  switch (current)
  {
    case STATE_A: ld->showA(); break;
    case STATE_B: ld->showB(); break;
    case STATE_C: ld->showC(); break;
    case STATE_D: ld->showD(); break;
    case STATE_E: ld->showE(); break;
    case STATE_F: ld->showF(); break;
    case STATE_G: ld->showG(); break;
    case STATE_H: ld->showH(); break;
    case STATE_I: ld->showI(); break;
    case STATE_J: ld->showJ(); break;
    case STATE_K: ld->showK(); break;
    case STATE_L: ld->showL(); break;
    case STATE_M: ld->showM(); break;
    case STATE_N: ld->showN(); break;
    case STATE_O: ld->showO(); break;
    case STATE_P: ld->showP(); break;
    case STATE_Q: ld->showQ(); break;
    case STATE_R: ld->showR(); break;
    case STATE_S: ld->showS(); break;
    case STATE_T: ld->showT(); break;
    case STATE_U: ld->showU(); break;
    case STATE_V: ld->showV(); break;
    case STATE_W: ld->showW(); break;
    case STATE_X: ld->showX(); break;
    case STATE_Y: ld->showY(); break;
    case STATE_Z: ld->showZ(); break;
    default:      ld->allOn(); break;
  }
}


