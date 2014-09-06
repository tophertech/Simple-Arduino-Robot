#ifndef FSM_h
#define FSM_h

#include "Arduino.h"
#include <Servo.h>
#include <NewPing.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define rforward     8
#define rbackward    7
#define lforward     10
#define lbackward    9
#define servo        6
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.\
Servo head;

class Robot {
  public:
    Robot();
    void forward();
    void backward();
    void left();
    void right();
    void idle();
    void new_state();
  private:
    int leftd, middle, rightd;
};
#endif