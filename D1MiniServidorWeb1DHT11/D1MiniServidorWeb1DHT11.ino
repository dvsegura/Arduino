#include <SoftwareSerial.h>
#include <DHT.h>
#include <DHT_U.h>

SoftwareSerial D1 (10, 11); // TX RX

#define SENSOR 4

DHT dht (SENSOR, DHT11);
void setup() {
  D1.begin(9600);
  D1.println("AT+RST");
  delay(1000);
  D1.println("AT+CWMODE=1");//modo cliente
  delay(1000);
  D1.println("AT+CWJAP=\"NiLoIntentesjeje\",\"noes1234\"");//establecer conexión punto de acceso
  delay(10000);
  D1.println("AT+CIPMOX=1");// múltiples conexiones
  delay(1000);
  D1.println("AT+CIPSERVER=1,80");
  delay(1000);
}
void loop() {
  if (D1.available()) {
    delay(1000);
    if (D1.find("+IPD,")) {
      int conexion = D1.read() - 48; // 48 código ASCII
      if (D1.find("led=")) {
        int lectura = D1.read() - 48;

        String pagina = "<!doctype html><html><head><meta http-equiv=\"refresh\" content=\"15\"></head><body>";
        pagina += "<h1>Temperatura: ";
        int TEMPERATURA = dht.readTemperature();
        pagina += String(TEMPERATURA);
        pagina += "<br>";
        pagina += " Humedad: ";
        int HUMEDAD = dht.readHumidity();
        pagina += String(HUMEDAD);
        pagina += "</h1></body></html>";
        // enviar info al navegador
        //ejecutamos el comando
        String enviar = "AT+CIPSEND=";
        enviar += conexion;
        enviar += ",";
        enviar += pagina.length();
        D1.println(enviar);
        delay(1000);
        //enviamos la informacion
        D1.println(pagina);
        delay(1000);

        String cierre = "AT+CIPCLOSE="; //hasta que no se ejecute este comando no se mostrará la info en la página
        cierre += conexion;
        D1.println(cierre);
        delay(2000);
      }
    }
  }
}
