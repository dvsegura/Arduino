int ledRed = 9; //PWM
int ledGreen = 10; //PWM
int ledBlue = 11; //PWM
int retardo = 2000;

void setup() {
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  myColor(255, 255, 0); //amarillo
  delay(retardo);

  myColor(0, 255, 255); //celeste
  delay(retardo);

  myColor(255, 110, 192); //rosado
  delay(retardo);
}

void myColor(int red, int green, int blue) {
  analogWrite(ledRed, red);
  analogWrite(ledGreen, green);
  analogWrite(ledBlue, blue);
}
