/* instrumneto, tocar una nota determinada al pulsar un determinado pulsador momentaneo*/
const int buttonPin = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int ledPin = 13;
const int speakerPin = 11;

int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  pinMode(ledPin, OUTPUT);

  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);

  pinMode(speakerPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(speakerPin, 330);
  } else if (buttonState2 == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(speakerPin, 294);
  } else if (buttonState3 == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(speakerPin, 262);
  } else {
    noTone(speakerPin);
    digitalWrite(ledPin, LOW);
  }
}
