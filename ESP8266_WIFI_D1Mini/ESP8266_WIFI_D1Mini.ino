#include <SoftwareSerial.h>

SoftwareSerial ESP(10, 11); //TX / TR
void setup() {
  Serial.begin(9600);
  ESP.begin(9600);
}

void loop() {
  if (ESP.available())
    Serial.write(ESP.read());
  if (Serial.available())
    ESP.write(Serial.read());
  //comprobar que el monitor serie tiene habilitado el Autoscroll,  NL & CR y la velocidad de 9600 baudios
}
/*WIFI con ESP8266 

SoC(sistema en un chip)
- micropocesador de 32 bits
- Memoria RAM
- Interfaces SPI,I2C,UART
- Conversor analógico digital
- puertos entrada/salida
- conectividad wifi 2.4 Ghz

Modelo ESP8266EX
WEMOS D1 MINI Soc ESP 12F  //regulador de voltaje 5 o 3.3 v 

Comandos AT por en monitor serie
AT 
AT+CWMOD  
Modo wifi:
1: cliente
2: punto de acceso
3: dual

AT+CWLAP Listados de punto de acceso

AT+CWJAP conecta a un punto de acceso(identificador(SSID) y password)
AT+CIFSR muestra direccion IP 
AT+CIPMX cantidad de conexiones simultaneas 
0:una sola
1: multiples conexiones
AT+CIPSERVER crear servidor 

COMANDOS comunicación(Envio de info) entre server navegador
AT+CIPSEND = 0,4 // Sobre la comunicacion 0 enviaremos 4 bytes de info

AT+CIPCLOSE = 0 // Cerrar conexión

WARNING:
Problemas con la velocidad de comunicación(firmware) cambiarla por (baudios ejemplo115200)



*/ 
