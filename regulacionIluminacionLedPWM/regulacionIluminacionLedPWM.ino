/*Varia la intensidad en led mediante señal PWM*/
int led = 11;
int intensidad = 0;
int retardo = 250;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //incrementar intensidad 0->255
  for (intensidad = 0; intensidad != 255; intensidad += 15) {
    analogWrite(led, intensidad);
    Serial.println(intensidad);
    delay(retardo);
  }
  //decremento del ciclo de trabajo 255->0
  for (intensidad = 255; intensidad != 0; intensidad -= 15) {
    analogWrite(led, intensidad);
    Serial.println(intensidad);
    delay(retardo);
  }
}
