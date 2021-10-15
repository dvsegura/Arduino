/*Conmutada con dos pulsadores en pines 1 y 2 controlamos un led en el pin 13 */
int rojo = 13;
int pulsador1 = 2;
int pulsador2 = 3;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
}

void loop() {
  if (digitalRead(pulsador1) == LOW || digitalRead(pulsador2 == LOW)) {
    digitalWrite(rojo, !digitalRead(rojo));
  }
  while (digitalRead(pulsador1) == LOW || digitalRead(pulsador2) == LOW) {
    // bucle cerrado
  }
}
