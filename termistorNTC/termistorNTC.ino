int V0;
float R1 = 100000;  // resistencia fija del divisor de tensión
float R2,LogR2, TEMPERATURA;
float c1 = 2.114990448, c2 = 0.3832381228, c3 = 5.228061052; // coeficientes de Steinhart-Hart
//https://www.thinksrs.com/downloads/programs/therm%20calc/ntccalibrator/ntccalculator.html  calculador online

void setup() {  
  Serial.begin(9600);
}

void loop() {  
  V0 = analogRead(A0);
  R2 = R1 * (1023.0/(float)V0 - 1.0);
  LogR2 = log(R2);
  TEMPERATURA = (1.0 / (c1 + c2*LogR2 + c3 * LogR2*LogR2*LogR2)); // Ecuacion de Steinhart-hart 
  TEMPERATURA -= 273.15;
  Serial.print("Temperatura: ");
  Serial.print(TEMPERATURA);
  Serial.println(" C");
  delay(500);*/
}
