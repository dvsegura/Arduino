int pin = 13;

void setup() {
  pinMode(pin, OUTPUT);
}
void loop() {
  //programa principal q gerera ...---...
  dot(); dot(); dot(); //genera la s
  dash(); dash(); dash(); // genera la o
  dot(); dot(); dot(); //genera la s
  delay(3000);
}
//procedimiento para generar un punto
void dot() {
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW);
  delay(250);
}
//procedimiento para generar una raya
void dash() {
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(250);
}
