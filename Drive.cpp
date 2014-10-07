#include "Drive.h"

Drive::Drive() {
    rforward = 8;
    rbackward = 7;
    lforward = 10;
    lbackward = 9;
    pinMode(rbackward, OUTPUT);
    pinMode(lbackward, OUTPUT);
    pinMode(rforward, OUTPUT);
    pinMode(lforward, OUTPUT);
}

Drive::Drive(int rfor, int rback,int lfor,int lback) {
    rforward = rfor;
    rbackward = rback;
    lforward = lfor;
    lbackward = lback;
    pinMode(rbackward, OUTPUT);
    pinMode(lbackward, OUTPUT);
    pinMode(rforward, OUTPUT);
    pinMode(lforward, OUTPUT);
}

void Drive::forward() {              
  digitalWrite(lbackward, LOW);
  digitalWrite(rbackward, LOW);
  digitalWrite(lforward, HIGH); 
  digitalWrite(rforward, HIGH);
}

void Drive::backward() {
  
  digitalWrite(lforward, LOW);
  digitalWrite(rforward, LOW);
  digitalWrite(lbackward, HIGH);
  digitalWrite(rbackward, HIGH);
}

void Drive::left() {
  digitalWrite(lforward, LOW);
  digitalWrite(rforward, HIGH);
  digitalWrite(lbackward, LOW);
  digitalWrite(rbackward, LOW);
}

void Drive::right() {
  digitalWrite(rforward, LOW);
  digitalWrite(lforward, HIGH);
  digitalWrite (lbackward, LOW);
  digitalWrite (rbackward, LOW);
}

void Drive::idle() {
  digitalWrite(rforward, LOW);
  digitalWrite(lforward, LOW);
  digitalWrite (lbackward, LOW);
  digitalWrite (rbackward, LOW);
}

