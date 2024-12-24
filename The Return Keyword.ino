void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,checksensor());

}
int checksensor(){
  int val=analogRead(A0);
  Serial.println(val);
  if(val>400){
    return 1;
  }
  else{
    return 0;
  }
}

