int SENSOR;
float TEMPERATURA;
float SUMA;

void setup() {
  Serial.begin(9600);
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
  Serial.println(TEMPERATURA / 5.0, 1); // 1 posición decimal ( 1 dígito depués de la coma)
  delay(1000);
}
