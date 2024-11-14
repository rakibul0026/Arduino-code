
int pattern[] = {3, 6, 8, 11}; 

int x;

void setup() {
  for (x = 0; x < 4; x++) {
    pinMode(pattern[x], OUTPUT); 
  }
}

void loop() {
  for (x = 0; x < 4; x++) {
    digitalWrite(pattern[x], HIGH);
    delay(500); 
    digitalWrite(pattern[x], LOW); 
    delay(500); 
  }
}
