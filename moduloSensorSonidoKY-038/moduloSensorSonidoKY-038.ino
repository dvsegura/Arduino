int MIC = 2;
int LED = 3;
int VALOR;
int estadoLed;

void setup() {
  pinMode(MIC, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  VALOR = digitalRead(MIC);
  if (VALOR == HIGH) {
    estadoLed = digitalRead(LED);
    digitalWrite(LED, !estadoLed);
    delay(500);
  }  
}
