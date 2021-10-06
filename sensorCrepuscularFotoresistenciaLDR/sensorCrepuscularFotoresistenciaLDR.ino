int LED = 3;
int SENSOR = 0;
int VALOR;
int PWM;

void setup() {
  //solo el led pq las entradas analógicas por defecto son INPUT
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  VALOR = analogRead(SENSOR);
  PWM = map(VALOR,0,1023,255,0); // comportamiento invertido: a POCA luz el led iluminará más. A MUCHA luz, el led iluminará menos. 
  Serial.print("PWM: ");
  Serial.println(VALOR);
  digitalWrite(LED,PWM);
  /*if (VALOR < 200) {
    digitalWrite(LED, HIGH);
    delay(1000);
  }
  digitalWrite(LED,LOW);*/
}
