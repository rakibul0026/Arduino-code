#include <Stepper.h>
#define STEPS 2048 

Stepper stepper(STEPS, 8, 10, 9, 11);  //(STEPS,1st,3rd,2nd,4rd)

void setup() {
  stepper.setSpeed(6); 
}

void loop() {
  stepper.step(1024);  // Rotate 180 degrees forward
  delay(1000);         

  stepper.step(-1024);
  delay(1000);       
}
