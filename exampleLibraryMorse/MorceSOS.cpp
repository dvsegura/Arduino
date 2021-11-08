/*comnetario sobre la librería*/
#include <Arduino.h> // <> scope global del IDE arduino
#include "MorseSOS.h"  //"" mismo directorio

MorseSOS::MorseSOS(int pin)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
}
void MorseSOS::dot(){
    digitalWrite(_pin, HIGH);
    delay(250);
    digitalWrite(_pin, LOW);
    delay(250);
}

void MorseSOS::dash() {
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}
