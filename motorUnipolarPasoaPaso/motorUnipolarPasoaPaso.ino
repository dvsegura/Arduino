int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;
int demora = 20; // demora entre pasos no debeser menor

//array bidimencional info Tabla.Paso Completo Simple (Wave Drive) * Ver notas
int pasos [4][4] = {
  {1, 0, 0, 0},
  {0, 1, 0, 0},
  {0, 0, 1, 0},
  {0, 0, 0, 1}
} ;

// array bidimencionsl info Tabla.MedioPaso
int medioPaso [8][4] = {
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {

  for (int i = 0; i < 512 ; i++) { // 4(fases) * 8(ciclos para una vuelta completa) * 64(un giro completo requiere de 64 vueltas(revoluciones)) = 2048      2048/4 = 512 => dentro del segudo blucle se representan 4 pasos
    for (int j = 0; j < 4 ; j++) {  // cambiar condicion a j < 8 cuando sea Medio Paso
      digitalWrite(IN1, pasos[j][0]);
      digitalWrite(IN2, pasos[j][1]);
      digitalWrite(IN3, pasos[j][2]);
      digitalWrite(IN4, pasos[j][3]);
      delay(demora);
    }
  }
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(5000);

}
