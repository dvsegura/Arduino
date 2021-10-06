/*el Sensor de Orientación por interruptor de mercurio en módulos KY-017 y KY-027 
para detectar cambios en la posición de objetos.*/

int LED = 3;
int SENSOR = 2;
int ESTADO;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SENSOR, INPUT);    
}

void loop() {
  ESTADO = digitalRead(SENSOR);
  digitalWrite(LED, ESTADO);
  delay(100);
}
