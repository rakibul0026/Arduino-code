void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
   pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val =digitalRead(2);
  if(val==0)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
     digitalWrite(6,LOW);

  }

}
