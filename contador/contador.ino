/*
  Contador:
  Conectar un interruptor de lengueta al pin 2(conexionando mediante resistencia pull-up),
  que controlará el encendido de un led conectado al pin 12.
  El led se encenderá cuando haya detectado 10 veces el interruptor,para ello tiene que pasar por 0.
  También se dispondrá de un pulsador(conectado al pin 3 mediante resistencia pull-up) que reiniciará la cuenta, es decir,
  se dispone de una variable que almacenará la cuenta y cuando se accione el pulsador es valor parasará a 0.

  Se utiliza:
      Led conectado al pin 13 el cual se encendera nada mas poner en marcha el arduino.
      Led conectado al pin 11 q se encendera al accionar el pulsador.
      Led conectado al pin 10 q se encedera cada vez q se accione el sensor de lengueta
*/
int ledInicio = 13;
int ledFinCuenta = 12;
int ledReset = 11;
int ledReed = 10;

int pulsador = 3;
int sensorReed = 2;

int cuenta = 0;
int finCuenta = 10;
unsigned long tiempoPrevio = 0;

void setup() {
  pinMode(ledInicio, OUTPUT);
  pinMode(ledFinCuenta, OUTPUT);
  pinMode(ledReset, OUTPUT);
  pinMode(ledReed, OUTPUT);

  pinMode(pulsador, INPUT);
  pinMode(sensorReed, INPUT);

  Serial.begin(9600);
  digitalWrite(ledInicio, HIGH); //enciede led al iniciar programa
}

void loop() {

  if (digitalRead(sensorReed) == LOW && digitalRead(pulsador) == HIGH) {
    digitalWrite(ledReed, HIGH);
    cuenta++;
    Serial.print(cuenta);
    if (cuenta == finCuenta) {
      digitalWrite(ledFinCuenta, HIGH);
    }
    //while (digitalRead(sensorReed) == LOW && digitalRead(pulsador) == HIGH) {} // bucle cerrado, estara en el hasta q se suelte el pulsador
    //para evitar las fluctuaciones usaremos la funcion millis()
    tiempoPrevio = millis();
    while (millis() - tiempoPrevio < 200 && digitalRead(pulsador) == HIGH) {}
  } else {
    digitalWrite(ledReed, LOW);
  }

  if (digitalRead(pulsador) == LOW) {
    digitalWrite(ledReset, HIGH);
    digitalWrite(ledFinCuenta, LOW);
    cuenta = 0;
    Serial.print(cuenta);
    //while(digitalRead(pulsador) == LOW){}
    tiempoPrevio = millis();  // evitar fluctuaciones
    while (millis() - tiempoPrevio > 200) {} // evitar fluctuaciones
  } else {
    digitalWrite(ledReset, LOW);
  }
}
