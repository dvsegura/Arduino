//rojo-magenta-azul-cian-verde-amarillo-blanco
int ledRed = 9; //PWM
int ledGreen = 10; //PWM
int ledBlue = 11; //PWM
int retardo = 2000;

void setup() {
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  digitalWrite(ledRed, HIGH); //rojo
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledBlue, LOW);
  delay(retardo);

  digitalWrite(ledBlue, HIGH); //añadir azul -> magenta
  delay(retardo);

  digitalWrite(ledRed, LOW); //apagamos rojo -> azul
  delay(retardo);

  digitalWrite(ledGreen, HIGH); //añadimos verde -> cian
  delay(retardo);

  digitalWrite(ledBlue, LOW); //apagamos el azul -> verde
  delay(retardo);

  digitalWrite(ledRed, HIGH); //añadimos el rojo -> amarillo
  delay(retardo);

  digitalWrite(ledBlue, HIGH); // añadimos azul -> blanco
  delay(retardo);
}
