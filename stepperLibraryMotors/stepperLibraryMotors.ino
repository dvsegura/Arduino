#include <Stepper.h>
//crear objeto
Stepper motor1(2048, 8, 10, 9, 11); // pasos completos(2048, 8,10,9,11) secuencias de pines que para este motor deben ser en ese orden

void setup() {
  motor1.setSpeed(2);  // en RPM (revoluciones por minuto) valores(1,2 o 3 para 28BYJ-48) // 1RVM = 1 Vuelta/1 minuto
  Serial.begin(9600);
}

void loop() {
  /* motor1.step(512); // 90º
    delay(2000);
    motor1.step(-512);
    delay(2000);*/

  if (Serial.available()) {
    int pasos = Serial.parseInt();
    Serial.println(pasos);
    motor1.step(pasos);
  }
}
