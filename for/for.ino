int tiempo = 200;
int pin;
void setup() {
  for (pin = 8; pin <= 12; pin++) {
    pinMode(pin, OUTPUT);
  }
}
void loop() {
  for (pin = 8; pin <= 12; pin++) {
    digitalWrite(pin,HIGH);
    delay(tiempo);
    digitalWrite(pin,LOW);
    delay(tiempo);
  }
}
// sin for 
/*int led1 = 12;
  int led2 = 11;
  int led3 = 10;
  int led4 = 9;
  int led5 = 8;

  void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  }
  void loop() {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  
  digitalWrite(led2,HIGH);
  delay(500) ;
  digitalWrite(led2,LOW);
  delay(500);

  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
  delay(500);

  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led4,LOW);
  delay(500);

  digitalWrite(led5,HIGH);
  delay(500);
  digitalWrite(led5,LOW);
  delay(500);

  }*/
