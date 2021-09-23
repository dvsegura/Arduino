int led = 13;
char caracter;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    caracter = Serial.read();
  }
  if (caracter == 'e') {
    digitalWrite(led, HIGH);
    Serial.println("Encendido");
  }
  if(caracter == 'a'){
    digitalWrite(led, LOW);
    Serial.println("Apagado");
  }

}
