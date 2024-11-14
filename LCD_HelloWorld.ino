#include<LiquidCrystal.h>

//liquidCrystal lcd(rs,en,db4,db5,db6,db7)

LiquidCrystal lcd(12,11,5,4,3,2);

void setup(){
  lcd.begin(16,2);
  lcd.print("Hellow World");
  lcd.setCursor(0,1);
  lcd.print("Bangladesh");
  
}
void loop(){
}
