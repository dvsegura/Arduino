#include <SoftwareSerial.h>
SoftwareSerial miBT(10, 11); // pines

void setup() {
  Serial.begin(9600);
  Serial.println("Listo");
  miBT.begin(38400);
}

void loop() {
  if (miBT.available())  // lee a BT y envia Arduino
    Serial.write(miBT.read());
  if(Serial.available())
    miBT.write(Serial.read()); //lee arduinoy envia a BT  
}
// poner el modulo en modo config(manteniendo presionado btn reset y desconcetado alimnetacion y volviendo a conectar)
// a traves del monitor serie podemos enviar los comandos 
