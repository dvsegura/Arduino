/*Control iluminación tras apertura de puerta.
  Controlar el encendido de una lámpara colocada en un vestíbulo, de tal forma de que cuando se abra la puerta de entrada esta permanezca encendida 1 minuto.
  Si la lampara esta encendida y se vuelve a abrir la puerta el tiempo se reiniciará.
  Si se deja la puerta abierta la lámpara siempre estará encendida.
*/
int luz = 13;
int sensorReed = 2;
int encendido = 0;
int segundos = 0;
int tiempo = 60;
unsigned long tiempoPrevio = 0;

void setup() {
  pinMode(luz, OUTPUT);
  pinMode(sensorReed, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensorReed) == LOW) {
    digitalWrite(luz, HIGH);
    encendido = 1;
    delay(200);
  }
  if (encendido == 1) {
    for (segundos = 0; segundos < tiempo; segundos ++) {
      tiempoPrevio = millis();
      //retardo de 1s, que finaliza si se activa el sensor reed(puerta cerrada)
      while (millis() - tiempoPrevio < 1000 && digitalRead(sensorReed) == HIGH ) {}
      Serial.print(segundos);
      if (digitalRead(sensorReed) == LOW) { // si se vuelve a abrir la puerta se reinicia el tiempo
        segundos = 0;
      }
    }
    if (digitalRead(sensorReed) == HIGH) { //en este punto ya debieron haber pasado los 60s y si la puerta está cerrada se deberia apagar la luz y reiniciar el tiempo.
      digitalWrite(luz, LOW);
      segundos = 0;
    }
  }
}
