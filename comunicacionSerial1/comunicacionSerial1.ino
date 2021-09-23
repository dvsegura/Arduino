int led = 13;
int retardo = 0;
char caracter;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Led encendido");
}

void loop() {
  if (Serial.available() > 0) {
    caracter = Serial.read();
    switch (caracter) {
      case 'r':
        retardo = 500;
        Serial.println("Rapido");
        Serial.println(retardo);
        break;
      case 'l':
        retardo = 2000;
        Serial.println("Lento");
        Serial.println(retardo);
        break;
      case 'd':
        retardo = 1000;
        Serial.println("Defecto");
        Serial.println(retardo);
        break;

      /*default:
        Serial.println("envie otra letra");
        break;*/
    }
  }
  digitalWrite(led,HIGH);
  delay(retardo);
  digitalWrite(led,LOW);
  delay(retardo);
}
