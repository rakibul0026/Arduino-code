// Demonstrating all numeric data types in Arduino

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);

  // Byte: 8-bit unsigned integer (0 to 255)
  byte myByte = 255;
  Serial.print("Byte value: ");
  Serial.println(myByte);

   // word 16-bit unsigned integer (0 to 65535)
  word myword = 2558;
  Serial.print("Byte value: ");
  Serial.println(myword);

   // short 16-bit unsigned integer (-32768 to 32767)
  word myshort = 2558;
  Serial.print("Byte value: ");
  Serial.println(myshort);

  
// Integer: 16-bit signed integer (-32,768 to 32,767)
  int myInt = -32768;
  Serial.print("Integer value: ");
  Serial.println(myInt);

  // Long: 32-bit signed integer (-2,147,483,648 to 2,147,483,647)
  long myLong = 2147483647;
  Serial.print("Long value: ");
  Serial.println(myLong);

  // Float: 32-bit floating-point number (up to 6-7 decimal digits)
  float myFloat = 3.14159;
  Serial.print("Float value: ");
  Serial.println(myFloat, 5); // Print with 5 decimal places

  // Double: Alias for float in Arduino (no extra precision)
  double myDouble = 2.71828;
  Serial.print("Double value: ");
  Serial.println(myDouble, 5); // Print with 5 decimal places
}

void loop() {
  // Empty loop as this is a one-time demonstration
}
