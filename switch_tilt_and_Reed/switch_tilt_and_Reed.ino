/*
Comprobación interruptor de inclinación y reed 
  => Interruptor de inclinación (tilt switch)
  => Interruptor de lengueta (Reed switch)
  Conexionando cada sensor con un led, uso de resistencia pull-down
*/
int ledInclinacion = 13;
int ledReed = 12;
int sensorInclinacion = 3;
int sensorReed = 2;

void setup() {
  pinMode(ledInclinacion, OUTPUT);
  pinMode(ledReed, OUTPUT);

  pinMode(sensorInclinacion, INPUT);
  pinMode(sensorReed, INPUT);
}

void loop() {
  if (digitalRead(sensorInclinacion) == HIGH) { // si esta activa la entrada 3 activo salida 13
    digitalWrite(ledInclinacion, HIGH);
  } else {
    digitalWrite(ledInclinacion, LOW);
  }

  if (digitalRead(sensorReed) == HIGH) {
    digitalWrite(ledReed, HIGH);
  } else {
    digitalWrite(ledReed, LOW);
  }

}
