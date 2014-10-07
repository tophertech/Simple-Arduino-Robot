#ifndef DRIVE_h
#define DRIVE_h

#include "Arduino.h"

class Drive {
  public:
    Drive();
    Drive(int, int, int, int);
    void forward();
    void backward();
    void left();
    void right();
    void idle();
  private:
    //Default pins for motors
    int rforward;
    int rbackward;
    int lforward;
    int lbackward;
};
#endif
