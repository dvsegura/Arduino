#include <SoftwareSerial.h>

SoftwareSerial D1 (10, 11); // TX RX
#define LED 2
void setup() {
  D1.begin(9600);
  pinMode(LED, OUTPUT);
  D1.println("AT+CWMODE=1");//modo cliente
  delay(1000);
  D1.println("AT+CWJAP=\"NiLoIntentesjeje\",\"noes1234\"");//establecer conexión punto de acceso
  delay(10000);
  D1.println("AT+CIPMOX=1");// multiples coneciones
  delay(1000);
  D1.println("AT+CIPSERVER=1,80");
  delay(1000);
}
void loop() {
  if (D1.available()) {
    delay(1000);
    if (D1.find("+IPD,")) {
      int conexion = D1.read() - 48; // 48 codigo ASCII
      if (D1.find("led=")) {
        int lectura = D1.read() - 48;

        String pagina = "<!doctype html><html><head></head><body>";
        if (lectura == 1) {
          digitalWrite(LED, HIGH);
          pagina += "<h1>LED está encendido!</h1></body></html>";
        } else if (lectura == 0) {
          digitalWrite(LED, LOW);
          pagina += "<h1>LED está apagado!</h1></body></html>";
        }
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
