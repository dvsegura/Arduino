int tiempo = 50; // int -32 768 ...0.. 32 767
int pin;
void setup() {
  // put your setup code here, to run once:
  for (pin = 8; pin <= 13; pin++) {
    pinMode(pin, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  secuencia_uno();
  secuencia_dos();
}

void secuencia_uno(){
  for(pin = 8; pin <=13;pin++){
    digitalWrite(pin,HIGH);
    delay(tiempo);
    digitalWrite(pin,LOW);
    delay(tiempo);
    }
  }

  void secuencia_dos(){
    for(pin = 13; pin >=8; pin--){
      digitalWrite(pin,HIGH);
      delay(tiempo);
      digitalWrite(pin,LOW);
      }
    }
