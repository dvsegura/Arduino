int rojo = 13;
int amarillo = 12;
int verde = 11;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  digitalWrite(rojo, HIGH);
  delay(5000);
  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, HIGH);
  delay(5000);
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, HIGH);
  delay(5000);
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, HIGH);
  delay(5000);
  digitalWrite(amarillo, LOW);
}
