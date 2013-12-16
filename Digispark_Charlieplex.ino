/**
 * Testing out the Charlieplex
 */

#include "Digispark_Charlieplex.h"
#include "LetterDisplay.h"

state currentState;
long nextStateChangeTime;

void setup()
{
  currentState = STATE_A;
  nextStateChangeTime = millis() + DELAY;
}

// the loop routine runs over and over again forever:
void loop()
{
  long currentMillis = millis();
  
  if (currentMillis > nextStateChangeTime)
  {
    currentState = nextState(currentState);
    nextStateChangeTime = currentMillis + DELAY;
  }
  
  showLetterForState(currentState);
}

state nextState(state current)
{
  return (current + 1) % NUM_STATES; 
}

void showLetterForState(state current)
{
  switch (current)
  {
    case STATE_A: showA(); break;
    case STATE_B: showB(); break;
    case STATE_C: showC(); break;
    case STATE_D: showD(); break;
    case STATE_E: showE(); break;
    case STATE_F: showF(); break;
    case STATE_G: showG(); break;
    case STATE_H: showH(); break;
    case STATE_I: showI(); break;
    case STATE_J: showJ(); break;
    case STATE_K: showK(); break;
    case STATE_L: showL(); break;
    case STATE_M: showM(); break;
    case STATE_N: showN(); break;
    case STATE_O: showO(); break;
    case STATE_P: showP(); break;
    case STATE_Q: showQ(); break;
    case STATE_R: showR(); break;
    case STATE_S: showS(); break;
    case STATE_T: showT(); break;
    case STATE_U: showU(); break;
    case STATE_V: showV(); break;
    case STATE_W: showW(); break;
    case STATE_X: showX(); break;
    case STATE_Y: showY(); break;
    case STATE_Z: showZ(); break;
    default:      allOn(); break;
  }
}


