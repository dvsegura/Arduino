/* comentario sobre libreria*/
#ifndef MorseSOS_h
#define MorseSOS_h
#include <Arduino.h>

class MorseSOS
{
public:
    MorseSOS(int pin);
    void dot();
    void dash();

private:
    int _pin;
};
#endif