int pinLDR = 0;
float tension = 0;
float resistencia = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  tension = analogRead(pinLDR);
  tension *= 0.0048; //cálculo de tension 581023 = 0.0048
  resistencia = (5 * tension) / (1000 / tension); //cálculo de resistencia

  Serial.print("Resistencia LDR: ");
  Serial.print(resistencia);
  Serial.print(" ohmios");
  Serial.print(tension);

  delay(1000);
}
