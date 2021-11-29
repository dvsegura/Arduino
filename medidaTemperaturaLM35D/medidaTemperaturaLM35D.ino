/*Medir temperatura con LM35D*/
int temperatura = 0; //pin conexión
int valor = 0;
int valorPrevio = 10; //saber si hay que enviar datos
float conversion = 0;
char grados = "º";


void setup() {
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(temperatura);
  conversion = (valor * 0.00488) * 100;  // para sensor TMP36 solo cambia la formula conversion = (valor*0.00488)-0.5
  if (valor != valorPrevio) { // envia datos si cambia
    Serial.print("Temperatura: ");
    Serial.print(conversion);
    Serial.print(grados);
    Serial.print("C");
  }
  valorPrevio = valor;
  delay(100);

}
