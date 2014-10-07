#include <Drive.h>

Drive test;
void setup(){
    
}

void loop(){
  test.forward();
  delay(1000);
  test.idle();
  delay(1000);
}

