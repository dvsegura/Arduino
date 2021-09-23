#include <LiquidCrystal.h> //la libreria original fue sustituida por la version con I2C por eso da error

LiquidCrystal lcd(7, 6, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0); // primer parametro es la columna y el segundo la linea
  lcd.print("Hola, han pasado");
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
  lcd.print(" seg");
  delay(1000);
}
