#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 2;
int TEMPERATURA;
int HUMEDAD;

DHT dht(SENSOR, DHT22);
void setup() {
  Serial.begin(9600);  
  dht.begin();//inicializar el sensor
}

void loop() {
  TEMPERATURA = dht.readTemperature();
  HUMEDAD = dht.readHumidity();
  Serial.print("Temperatura: ");
  Serial.print(TEMPERATURA);
  Serial.print( "Humedad: ");
  Serial.print(HUMEDAD);
  delay(500);
}
