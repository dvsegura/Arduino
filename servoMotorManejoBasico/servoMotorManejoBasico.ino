#include <Servo.h>
Servo myservo;
int position = 0;
const int pinServo = 9;
void setup() {
  myservo.attach(pinServo);
  Serial.begin(9600);
}

void loop() {
  // desplazamiento posicion 0 a 180 grados con paso de 1 grado
  for (position = 0; position < 180; position++) {
    myservo.write(position);
    Serial.println(position);
    delay(200);
  }
  for (position = 180; position >= 1 ; position --) {
    myservo.write(position);
    Serial.println(position);
    delay(200);
  }
}
