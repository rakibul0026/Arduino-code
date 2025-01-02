#define soilWet 500
#define soilDry 750
 
#define sensorPower 7
#define sensorPin A0
 
void setup() {
    pinMode(sensorPower, OUTPUT);
    digitalWrite(sensorPower, LOW);
    Serial.begin(9600);
}
 
void loop() {
    int moisture = readSensor();
    Serial.print("Analog Output: ");
    Serial.println(moisture);
 
    if (moisture < soilWet) {
        Serial.println("Status: Soil is too wet");
    } else if (moisture >= soilWet && moisture < soilDry) {
        Serial.println("Status: Soil moisture is perfect");
    } else {
        Serial.println("Status: Soil is too dry - time to water!");
    }
     
    delay(1000);
    Serial.println();
}
 
int readSensor() {
    digitalWrite(sensorPower, HIGH);
    delay(10);
    int val = analogRead(sensorPin);
    digitalWrite(sensorPower, LOW);
    return val;
}
