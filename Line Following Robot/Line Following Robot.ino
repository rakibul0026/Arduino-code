// Define motor control pins for Motor A (Left motor)
#define IN1 6
#define IN2 7

// Define motor control pins for Motor B (Right motor)
#define IN3 8
#define IN4 9

// Define sensor pins
#define SENSOR1 A0
#define SENSOR2 A1
#define SENSOR3 A2
#define SENSOR4 A3
#define SENSOR5 A4
#define SENSOR6 A5
#define SENSOR7 10
#define SENSOR8 11

void setup() {
  // Initialize motor control pins as output
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  // Initialize sensor pins as input
  pinMode(SENSOR1, INPUT);
  pinMode(SENSOR2, INPUT);
  pinMode(SENSOR3, INPUT);
  pinMode(SENSOR4, INPUT);
  pinMode(SENSOR5, INPUT);
  pinMode(SENSOR6, INPUT);
  pinMode(SENSOR7, INPUT);
  pinMode(SENSOR8, INPUT);
  
  // Start motors in a stopped state
  stopMotors();
}

void loop() {
  // Read sensor values
  int sensorValue1 = digitalRead(SENSOR1);
  int sensorValue2 = digitalRead(SENSOR2);
  int sensorValue3 = digitalRead(SENSOR3);
  int sensorValue4 = digitalRead(SENSOR4);
  int sensorValue5 = digitalRead(SENSOR5);
  int sensorValue6 = digitalRead(SENSOR6);
  int sensorValue7 = digitalRead(SENSOR7);
  int sensorValue8 = digitalRead(SENSOR8);

  // Line following logic: Based on the sensor input, we will move the robot
  if (sensorValue1 == LOW && sensorValue2 == LOW && sensorValue3 == LOW && sensorValue4 == LOW && sensorValue5 == LOW && sensorValue6 == LOW && sensorValue7 == LOW && sensorValue8 == LOW) {
    // No line detected: Stop the motors or do nothing
    stopMotors();
  }
  else if (sensorValue1 == LOW && sensorValue2 == LOW && sensorValue3 == LOW && sensorValue4 == LOW) {
    // Line detected on the left side: Turn left
    turnLeft();
  }
  else if (sensorValue5 == LOW && sensorValue6 == LOW && sensorValue7 == LOW && sensorValue8 == LOW) {
    // Line detected on the right side: Turn right
    turnRight();
  }
  else if (sensorValue2 == LOW && sensorValue3 == LOW) {
    // Line detected on the left side: Turn left slightly
    turnLeft();
  }
  else if (sensorValue6 == LOW && sensorValue7 == LOW) {
    // Line detected on the right side: Turn right slightly
    turnRight();
  }
  else {
    // Otherwise, move forward
    moveForward();
  }
}

void moveForward() {
  // Set both motors to move forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {
  // Set both motors to move backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {
  // Turn left by rotating only left motor
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  // Turn right by rotating only right motor
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopMotors() {
  // Stop both motors
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
