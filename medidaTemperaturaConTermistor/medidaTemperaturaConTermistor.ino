/*Medir temperatura con Termistor*/
//#include <math.h>

int pinTemperatura = 0; //pin conexión
int valor = 0;
int valorPrevio = 10; //saber si hay que enviar datos
float resistencia = 0;
float temperatura = 0;
int B = 3975;   //depende del termistor
char grados = "º";


void setup() {
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(temperatura);
  resistencia = (1023 - valor) * 10000 / valor; // obtener valor resistencia
  //conversion segun hoja de caracteristicas
  temperatura = 1 / (log(resistencia / 10000) / B + 1 / 298.15) - 273.15 ;
  if (valor != valorPrevio) { // envia datos si cambia
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print(grados);
    Serial.print("C");
  }
  valorPrevio = valor;
  delay(100);

}
