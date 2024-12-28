#include <Stepper.h>
#include <Servo.h>

#define STEPS 2048 // Number of steps per revolution for the stepper motor

// Stepper motor setup
Stepper stepper(STEPS, 8, 10, 9, 11); // (STEPS, 1st, 3rd, 2nd, 4th)

// Servo motor setup
Servo myservo;

void setup() {
  // Initialize stepper motor
  stepper.setSpeed(6); // Set stepper motor speed in RPM
  
  // Attach servo motor to pin
  myservo.attach(3);

  // Start Serial communication
  Serial.begin(9600);
  Serial.println("Ready to receive commands...");
}

void loop() {
  // Check if data is available
  if (Serial.available()) {
    char command = Serial.read(); // Read the incoming command
    
    switch (command) {
      case 'F': // Stepper motor forward
        stepper.step(455); // Rotate 80 degrees forward
        Serial.println("Stepper: Rotated 80 degrees forward");
        break;
      case 'B': // Stepper motor backward
        stepper.step(-455); // Rotate 80 degrees backward
        Serial.println("Stepper: Rotated 80 degrees backward");
        break;
      case 'S': // Servo motor to 0 degrees
        myservo.write(0);
        Serial.println("Servo: Rotated to 0 degrees");
        break;
      case 'E': // Servo motor to 180 degrees
        myservo.write(180);
        Serial.println("Servo: Rotated to 180 degrees");
        break;
      default:
        Serial.println("Invalid command");
        break;
    }
  }
}
