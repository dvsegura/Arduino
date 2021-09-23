
#include <Servo.h>

Servo servo1;
int PINSERVO = 2;
int PULSOMIN = 500; // microsegundos // 1 equivale a 0 grado
int PULSOMAX = 2500; // microsegundos // 2 equivale a 180 grados
int VALORPOT;
int ANGULO;
int POT = 0;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(PINSERVO,PULSOMIN,PULSOMAX); // requiere q los pulsos esten en microsegundos
  // Las entradas analogicas no requieren inicializacion  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*servo1.write(0);
  delay(5000);
  servo1.write(180);
  delay(5000);*/
  VALORPOT = analogRead(POT);
  Serial.print(VALORPOT);
  Serial.println();
  ANGULO = map(VALORPOT, 0,1023, 0, 180); // entrada analogica 0-1023
  Serial.print("ANGULO:");
  Serial.print(ANGULO);
  Serial.println();
  servo1.write(ANGULO);
  delay(100);
  
}
