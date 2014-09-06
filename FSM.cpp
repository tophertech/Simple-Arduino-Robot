#include "FSM.h"

Robot::Robot() {
    pinMode(rbackward, OUTPUT);
    pinMode(lbackward, OUTPUT);
    pinMode(rforward, OUTPUT);
    pinMode(lforward, OUTPUT);
    head.attach(servo);
}
void Robot::forward() {              
  digitalWrite(lbackward, LOW);
  digitalWrite(rbackward, LOW);
  digitalWrite(lforward, HIGH); 
  digitalWrite(rforward, HIGH);
  delay (5000);
  new_status ();
}

void Robot::backward() {
  
  digitalWrite(lforward, LOW);
  digitalWrite(rforward, LOW);
  digitalWrite(lbackward, HIGH);
  digitalWrite(rbackward, HIGH);
  delay (5000);
  new_status ();
}

void Robot::left() {
  digitalWrite(lforward, LOW);
  digitalWrite(rforward, HIGH);
  digitalWrite(lbackward, LOW);
  digitalWrite(rbackward, LOW);
  delay (2000);
  new_status ();
}

void Robot::right() {
  digitalWrite(rforward, LOW);
  digitalWrite(lforward, HIGH);
  digitalWrite (lbackward, LOW);
  digitalWrite (rbackward, LOW);
  delay (2000);
  new_status();
}

void Robot::idle() {
  digitalWrite(rforward, LOW);
  digitalWrite(lforward, LOW);
  digitalWrite (lbackward, LOW);
  digitalWrite (rbackward, LOW);
  delay (500);
  new_status();
}

void Robot::new_state() {
  head.write(45);
  delay(500);
  leftd = sonar.ping_in();
  head.write(90);
  delay(500); 
  middle = sonar.ping_in();
  head.write(135);
  delay(500);
  rightd = sonar.ping_in();
  if (middle <= 5)
  (
    backward();
  }
  else if(rightd < leftd && rightd < middle)
  {
    right();
    
  }
  else if(leftd < rightd && leftd < middle)
  {
    left();

  }
  else if(middle <= rightd && middle <= leftd)
  {
    forward();
  }
  
 else
 {
   idle();
 }
    
  
}