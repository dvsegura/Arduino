  const int LONGITUD = 10;
int numeros[LONGITUD];
int numeros2[] = {200, 50, 20, 100, 8, 60};
int suma = 0;  //inicializar antes de usar la variable
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); /*Esta instrucción le indica al Arduino que inicie comunicación con la computadora
  (o cualquier dispositivo conectado a los pines RX y TX) con una velocidad de comunicación serial de 9600 bits por segundo (baudios)*/
  /*
    //podria ser una manera de inicializar un array
    for (int i = 0; i < LONGITUD; i++) {
    numeros[i] = i * 2;
    }
  */
  for (int i = 0; i < LONGITUD; i++) {
    while (Serial.available() <= 0 ) {};
    numeros[i] = Serial.parseInt();
  }
  imprimirNumeros();

  for(int i =0; i < LONGITUD; i++){
    suma += numeros[i]; 
    }
   imprimirNumeros();
   Serial.println("La suma es: ");
   Serial.println(suma);
   Serial.println("El promedio es: ");
   // Serial.println((suma/LONGITUD); // auntomaticamente se trunca el resultado a un entero, para obtener decimales convertir suma en double.
  Serial.println((double)suma/LONGITUD);  
}

void loop() {
  // put your main code here, to run repeatedly:
}

void imprimirNumeros() {
  for (int i = 0; i < LONGITUD; i++) {
    Serial.println(numeros[i]);
  }
}
