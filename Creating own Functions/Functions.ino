int led1 = 3;
int led2 = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  led_blinking(led1);
}
void led_blinking(int pin) {
  digitalWrite(pin,HIGH);
  delay(1000);
}
