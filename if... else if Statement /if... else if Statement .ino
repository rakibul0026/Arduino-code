int count = 0;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(6, OUTPUT);
}

void loop() 
  {
  // put your main code here, to run repeatedly:
  int val = digitalRead(2);
  if (val == 0) {
    count = count + 1;
    delay(200);
  }
  if (count == 1)
   {
    analogWrite(6, 100);
  } 
  else if (count == 2)
   {
    analogWrite(6, 150);
   }
  else if (count == 2)
   {
    analogWrite(6, 150);
   }  else 
   {
    analogWrite(6, 100);
    count = 0;
   }
}

