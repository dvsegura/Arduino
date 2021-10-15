int rojo = 13;
int amarillo = 12;
int verde = 11;

boolean encendido = 0;
int pulsador = 2;
unsigned long tiempoPrevio = 0;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);

  pinMode(pulsador, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pulsador) == LOW) { // detecta si se ha pulsado
    Serial.println("se ha pulsado");
    if (encendido == 0) { // si esta apagado el led se enciende
      encendido = 1;
      digitalWrite(rojo, HIGH);
    } else {
      encendido = 0;
    }
    while (digitalRead(pulsador) == LOW) {
      Serial.println("manteniendo pulsador presionado");
    }
  }
  if (encendido == 1) {
    digitalWrite(rojo, HIGH);
    tiempoPrevio = millis();
    while (millis() - tiempoPrevio < 5000 && digitalRead(pulsador) == HIGH ) {}
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, HIGH);
    tiempoPrevio = millis();
    while (millis() - tiempoPrevio < 5000 && digitalRead(pulsador) == HIGH) {}
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, HIGH);
    tiempoPrevio = millis();
    while (millis() - tiempoPrevio < 5000 && digitalRead(pulsador) == HIGH) {}
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, HIGH);
    tiempoPrevio = millis();
    while (millis() - tiempoPrevio < 5000) {}
    digitalWrite(amarillo , LOW);
  }
}

/*Notas
  Solo siguen funcionando con la funcion delay():
  ->la comunicacion serie de los pines de recepcion
  ->los valores de PWM con la funcion analogWrite
  ->los estados de los pines
  ->las interrupciones
  Solución: usar la funcion millis(, su valor se debe guardar en una variable de tipo long y unsigned


*/
