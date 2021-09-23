#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd = (0x27,2,1,0,4,5,6,7); //puertos (DIR,E,RW,RS,D4,D5,D6,D7) Mirar el esquema del circuito del adaptador

void setup() {
  // put your setup code here, to run once:
  lcd.setBacklightPin(3, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("hola, han pasado");
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  lcd.print(" seg.");
  delay(1000);
}
