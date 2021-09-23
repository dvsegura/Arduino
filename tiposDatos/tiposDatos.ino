int contador = 32760; // 2bytes = 16 bits = -32 768 .. 0 .. +32 767
long numero; // 1 000 000 000
char letra = 'A';
float precio = 5.99;
int cant = 10;
double decimal;
bool isOn = true;
short num; // 8bit = -128 ..0..+127
int variableEntrada = 0;

/*arrays */

int billetes[5]; 
void setup() {
  Serial.begin(9600); // Serial.begin(speed)  // comunicacion Arduino y PC mediante el Monitor Serie
  numero = cant / precio;
  Serial.println(numero);
  Serial.println(letra);
  Serial.println(isOn);
  variableEntrada = analogRead(2);
  billetes[0] = 5;
  Serial.println(billetes[0]);
}

void loop() {
  /*contador++;
  Serial.println(contador);
  delay(1000);*/
}
