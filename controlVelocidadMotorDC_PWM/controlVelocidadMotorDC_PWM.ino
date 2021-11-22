/*varia la velocidad de motor con dos pulsadores*/
int motor =  5;
int pulsadorSubir = 2;
int pulsadorBajar = 3;
int velocidad = 0;
int retardo = 200;
unsigned long tiempoPrevio = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor, OUTPUT);
  pinMode(pulsadorSubir, INPUT);
  pinMode(pulsadorBajar, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pulsadorSubir) == LOW && digitalRead(pulsadorBajar) == HIGH) {
    if (velocidad < 255) {
      velocidad += 15;
    } else {
      velocidad = 255;
    }
    Serial.println(velocidad);
    tiempoPrevio = millis();
    while (millis() - tiempoPrevio < retardo && digitalRead(pulsadorBajar) == HIGH) {}
  }

  if (digitalRead(pulsadorBajar) == LOW  && digitalRead(pulsadorSubir) == HIGH) {
    if (velocidad > 0) {
      velocidad -= 15;
    } else {
      velocidad = 0;
    }
    Serial.println(velocidad);
    tiempoPrevio = millis();
    while (millis() - tiempoPrevio < retardo && digitalRead(pulsadorSubir) == HIGH) {}
  }
  analogWrite(motor, velocidad);
}
