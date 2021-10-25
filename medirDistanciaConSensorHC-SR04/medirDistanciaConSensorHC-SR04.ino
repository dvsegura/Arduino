/*medir la distancia (cm) a la que se encuentra un objeto y mostrarla por el monitor serie.
Para ello usaremos el sensor de ultrasonidos HC-SR04

En aplicaciones en que se requiera una precisión superior en la medición de la distancia, 
suelen acompañarse de medidores de distancia por infrarrojos y sensores ópticos.

El sensor se basa simplemente en medir el tiempo entre el envío y la recepción de un pulso sonoro.

Es decir, el sonido tarda 29,2 microsegundos en recorrer un centímetro. 
Por tanto, podemos obtener la distancia a partir del tiempo entre la emisión y recepción del pulso mediante la siguiente ecuación.

distancia = tiempo * velocidad / 2
entre 2 es porque hemos medido el tiempo que tarda el pulso en ir y volver, por lo que la distancia recorrida por el pulso es el doble de la que queremos medir. 

TINKERCAD https://www.tinkercad.com/things/gwRpyCm9spB 
*/

#include <NewPing.h>

#define TRIGER_PIN  12
#define HECHO_PIN  11
#define MAX_DISTANCE 200

NewPing sonar(TRIGER_PIN,HECHO_PIN,MAX_DISTANCE);

void setup() {
  Serial.begin(115200);
}

void loop() {
delay(50);
unsigned int uS = sonar.ping();   //sonar.ping_cm()
Serial.print("PING: ");
Serial.print(uS/US_ROUNDTRIP_CM);
Serial.println(" cm");
}
