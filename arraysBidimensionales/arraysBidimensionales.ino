const int N = 3;
const int M = 2;
int numeros [N][M] = {{2, 3}, {1, 0}, {6, 9}};
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  int suma = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      suma += numeros[i][j];
      Serial.println(numeros[i][j]);
    }
  }
  Serial.print("La suma es: ");
  Serial.print(suma);
}

void loop() {
  // put your main code here, to run repeatedly:

}
