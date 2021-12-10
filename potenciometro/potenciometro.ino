/*book: Aprende electrónica con Arduino by Judi Culkin  and Eric Hagan */
const int analogInPin = A0;
const int analogOutPin = 9;

int potValue = 0;
int outputValue = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(analogInPin);
  outputValue = map(potValue,0,1023,0,255);  
  analogWrite(analogOutPin, outputValue);
  Serial.print("Pot: ");
  Serial.println(potValue);
  Serial.print("PWM: ");
  Serial.println(outputValue);
  delay(500);
}
