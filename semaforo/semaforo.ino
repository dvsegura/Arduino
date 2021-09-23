int leds [] = {13, 12, 11};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 3; i++) {
    digitalWrite(leds[i], HIGH);
    delay(5000);
    digitalWrite(leds[i], LOW);
  }
}
