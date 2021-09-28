#define STEP 4
#define DIR 5

void setup() {
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
}

void loop() {
  digitalWrite(DIR, HIGH);
  for (int i = 0; i < 200; i++) {           // para motor de 0.9º   200 pasos = 180º
    digitalWrite(STEP, HIGH);               // para motor de 1.8    se requieren solo de 100 pasos   
    delay(10);
    digitalWrite(STEP, LOW);
    delay(10);
  }
  delay(2000);
  digitalWrite(DIR,LOW);                    // cambia el sentido de giro del motor
  for (int i = 0; i < 200; i++) {           
    digitalWrite(STEP, HIGH);               
    delay(10);
    digitalWrite(STEP, LOW);
    delay(10);
  }
  delay(2000);

}
