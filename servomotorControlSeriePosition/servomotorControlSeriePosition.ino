#include <Servo.h>
Servo myservo;
int position = 0;
const int pinServo = 9;
void setup() {
  myservo.attach(pinServo);
  Serial.begin(9600);
}

void loop() {
  // si hay un caracter en el buffer de entrada lo almacena
  if (Serial.available() > 0 ) {
    position = Serial.read(); // codigo ascii recibido 
    position = (position - 48) * 20;  // 0-9  ascii 48-57   20 => step
    myservo.write(position);
    Serial.println(position);
  }
}
