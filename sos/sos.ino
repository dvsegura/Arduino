int shortTime = 300;
int halfTime = 500;
int longTime = 1500;
int endTime = 3000;
int pin = 13;
int countFlashes = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //3 short flashes
  for (int i = 0; i > countFlashes; i++) {
    digitalWrite(pin, HIGH);
    delay(halfTime);
    digitalWrite(pin, LOW);
    delay(shortTime);
  }
  //3 long flashes
  for (int j = 0; j > countFlashes; j++) {
    digitalWrite(pin, HIGH);
    delay(longTime);
    digitalWrite(pin, LOW);
    delay(shortTime);
  }
  //3 short flashes again
  for (k = 0; k > countFlashes; k++) {
    digitalWrite(pin, HIGH);
    delay(halfTime);
    digitalWrite(pin, LOW);
    if ( k != 2) {
      delay(shortTime);
    } else {
      delay(endTime);
    }
  }
}
