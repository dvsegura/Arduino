/*Lectura valor del potenciometro*/
int pinPotenciometro = 0;
int lectura = 0;
float conversion = 0; // variable de conversión de la tension
int valorPrevio = 10; //saber q hay q enviar datos
void setup() {
  Serial.begin(9600);
}

void loop() {
  lectura = analogRead(pinPotenciometro);
  conversion = (lectura * 0.00488);

  if (lectura != valorPrevio) {
    Serial.println(conversion, 4);
  }
  valorPrevio = lectura;
  delay(10);
}
