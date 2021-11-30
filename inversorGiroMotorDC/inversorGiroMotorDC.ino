int motorDerecha = 13;
int motorIzquierda = 12;

int pulsadorParada = 4;
int pulsadorDerecha = 3;
int pulsadorIzquierda = 2;

int marcha = 0;  //variable marcha-paro
void setup() {
  pinMode(motorDerecha, OUTPUT);
  pinMode(motorIzquierda, OUTPUT);

  pinMode(pulsadorParada, INPUT);
  pinMode(pulsadorDerecha, INPUT);
  pinMode(pulsadorIzquierda, INPUT);

  Serial.begin(9600);
}

void loop() {
  /*miestras que no se pulse la parada y este parado el motor, se podra poner en marcha en cualquier sentido*/
  while (digitalRead(pulsadorParada) == HIGH && marcha == 0) {
    //pone en marcha en sentido izquierdo
    if (digitalRead(pulsadorIzquierda) == LOW && digitalRead(pulsadorDerecha) == HIGH) {
      digitalWrite(motorIzquierda, HIGH);
      Serial.print("Izquierda");
      marcha = 1;
    }
    // se pone en marcha sentido derecha
    if (digitalRead(pulsadorIzquierda) == HIGH && digitalRead(pulsadorDerecha) == LOW ) {
      digitalWrite(motorDerecha, HIGH);
      Serial.print("Derecha");
      marcha = 1;
    }
  }
  //cuando se para resetea la variablemarcha y desactiva las salidas
  if (digitalRead(pulsadorParada) == LOW) {
    digitalWrite(motorIzquierda, LOW);
    digitalWrite(motorDerecha, LOW);
    Serial.print("parada");
    marcha = 0;
    delay(200);
  }
}
