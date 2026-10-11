// chess clock with 2 seven segment displays and presets based on chess clock apps

#include <TimeLib.h>

// pin definitions
#define p1button 2
#define p2button 3

// 7-segment definitions
// ¯\_(ツ)_/¯

// global variable declarations
volatile int currPlayer;
volatile bool changePlayer;

int p1clock, p2clock, turnTime;

/* To-Do List:
Are timer interrupts a thing?
*/

// initialization code
void setup() {
  Serial.begin(9600);
  Serial.print("\n");
  pinMode(p1button, INPUT_PULLUP);
  pinMode(p2button, INPUT_PULLUP);

  changePlayer = false;

  selMode();

  attachInterrupt(digitalPinToInterrupt(p1button), p1EndTurn, FALLING);
  attachInterrupt(digitalPinToInterrupt(p2button), p2EndTurn, FALLING);

  Serial.print("Setup complete\n");
}

// on power-on, set timer parameters
void selMode() {
  // this will choose timer values and inizialize the timers
  noInterrupts();

  bool selected = false;
  int currMode = 0;
  int numModes = 2;

  while (!selected) {
    if (digitalRead(p1button) == LOW) {
      currMode--;
      // wrap around to end of list
      if (currMode < 0) {
        currMode = numModes - 1;
      }
      // wrap around to start of list
    } else if (digitalRead(p2button)) {
      currMode++;
      if (currMode == numModes) {
        currMode = 0;
      }
    }
  }

  currPlayer = 1;

  switch (currMode) {
    case 0:
      p1clock = 300000;  // 300 seconds * 1000 milliseconds on timer
      p2clock = 300000;
      turnTime = 5000;  // 5 seconds * 1000 milliseconds after each turn
      break;
    case 1:
      p1clock = 600000;  // 600 seconds * 1000 milliseconds on timer
      p2clock = 600000;
      turnTime = 0;  // no additional time after turns
      break;
  }

  interrupts();
}

// end p1's turn and set p2 to current player
void p1EndTurn() {
  currPlayer = 2;
  changePlayer = true;
}

// end p1's turn and set p2 to current player
void p2EndTurn() {
  currPlayer = 1;
  changePlayer = true;
}

// run the game
void loop() {
  // any code here?
  if (changePlayer) {
    // pause current timer and start other timer
  }
}