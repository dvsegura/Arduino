#include <LiquidCrystal.h>
LiquidCrystal lcd (7, 6, 5, 4, 3, 2);
int SENSOR;
float TEMPERATURA;
float SUMA;

void setup() {
  //Serial.begin(9600);
  lcd.begin(16, 2);
  // las entradas analógicas no necesitan inicialización
}

void loop() {
  SUMA = 0;
  for (int i = 0; i < 5; i++) {  //para sensores analogicos es recomendable usar promedios de los valores de lectura
    SENSOR = analogRead(A0);
    TEMPERATURA = ((SENSOR * 5000.0) / 1023) / 10; //5000.0 para no perder la parte de la fracción
    SUMA += TEMPERATURA;
    delay(500);
  }
  //Serial.println(TEMPERATURA / 5.0, 1); // 1 posición decimal ( 1 dígito depués de la coma)
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(SUMA / 5.0, 1);
  lcd.print(" C");
}
