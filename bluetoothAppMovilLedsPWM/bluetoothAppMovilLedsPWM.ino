#include <SoftwareSerial.h>
SoftwareSerial miBT(10, 11); // pines

int ledRojo = 2;
int ledVerde = 3; // PWM regularlo
char dato = 0;
int brillo = 0;

void setup() {
  miBT.begin(38400);
}

void loop() {
  if (miBT.available()) {
    dato = miBT.read();
    if (dato == '1')
      digitalWrite(ledRojo, !digitalRead(ledRojo));
    if (dato == '2') {
      //digitalWrite(ledVerde, !digitalRead(ledVerde));
      //regular el brillo
      brillo += 10;
      if (brillo > 255 )
        brillo = 0;
      digitalWrite(ledVerde, brillo);

    }
    if (dato == '3') { // decrementar el brillo
      brillo -= 10;
      if (brillo < 0)
        brillo = 0;
      digitalWrite(ledVerde, brillo);
    }
  }
}
