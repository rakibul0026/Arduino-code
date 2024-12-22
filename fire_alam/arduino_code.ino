const int ledpin = 13;        
const int flamepin = A2;    
const int buzpin = 11;       
const int threshold = 200;    
int flamesensvalue = 0;       

void setup() {
  Serial.begin(9600);        
  pinMode(ledpin, OUTPUT);   
  pinMode(flamepin, INPUT);  
  pinMode(buzpin, OUTPUT);   

  Serial.println("Setup complete!");  
}

void loop() {
  flamesensvalue = analogRead(flamepin);  
  Serial.print("Flame Sensor Value: "); 
  Serial.println(flamesensvalue);

 
  if (flamesensvalue <= threshold) {
    Serial.println("Threshold exceeded: FIRE DETECTED");  
    digitalWrite(ledpin, HIGH);  
    tone(buzpin, 1000);          
  } else {
    Serial.println("No fire detected");  
    digitalWrite(ledpin, LOW);  
    noTone(buzpin);              
  }

  delay(2000);  
}
