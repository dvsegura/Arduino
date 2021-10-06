int SENSOR = 2;
int LED = 3;
int ESTADO;

void setup() {
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  ESTADO = digitalRead(SENSOR);
  //digitalWrite(LED, !ESTADO);
  if (ESTADO == LOW) {
    digitalWrite(LED, HIGH);
    delay(500);
  }
  digitalWrite(LED, LOW);
}
