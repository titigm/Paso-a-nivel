//reemplazar todos los delays de VERD, RO y AM x millis
int R = 5;
int A = 7;
int V = 6;
int MOTOR = 13;
int DATA1 = 10;
int DATA2 = 2;
int CLOCK1 = 12;
int CLOCK2 = 3;
int LATCH1 = 11;
int LATCH2 = 4;
int TRIG = 8;
int ECHO = 9;
int DISTANCIA;
int DURACION;
int counter;
//display 1 es el del proto grande()

void setup(){
  pinMode(R, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(V, OUTPUT);
  pinMode(MOTOR, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LATCH1, OUTPUT);
  pinMode(LATCH2, OUTPUT);
  pinMode(DATA1, OUTPUT);
  pinMode(DATA2, OUTPUT);
  pinMode(CLOCK1, OUTPUT);
  pinMode(CLOCK2, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION = pulseIn(ECHO, HIGH);
  DISTANCIA = DURACION/58.2;
  Serial.println(DISTANCIA);
  delay(150);

  if(DISTANCIA<2){
     for (counter = 0; counter < 1; ++counter){
     AM();}
    digitalWrite(MOTOR, HIGH);
    RO();
  }else{
     for (counter = 0; counter < 1; ++counter){
     AM();}
    digitalWrite(MOTOR, HIGH);
    VERD();
  }
}
void uno(){
  digitalWrite(LATCH1, LOW);       //ABCDEFGP  
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B00000110);
  digitalWrite(LATCH2, HIGH);
}
void dos(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01011011);
  digitalWrite(LATCH2, HIGH);
}
void tres(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01001111);
  digitalWrite(LATCH2, HIGH);
}
void cuatro(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01100110);
  digitalWrite(LATCH2, HIGH);
}
void cinco(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01101101);
  digitalWrite(LATCH2, HIGH);
}
void seis(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01111101);
  digitalWrite(LATCH2, HIGH);
}
void siete(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B00000111);
  digitalWrite(LATCH2, HIGH);
}
void ocho(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01111111);
  digitalWrite(LATCH2, HIGH);
}
void nueve(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B10111111);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01101111);
  digitalWrite(LATCH2, HIGH);
}
void diez(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B10111111);
  digitalWrite(LATCH2, HIGH);
}
void once(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01100000);
  digitalWrite(LATCH2, HIGH);
}
void doc(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B11011010);
  digitalWrite(LATCH2, HIGH);
}
void trec(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01001111);
  digitalWrite(LATCH2, HIGH);
}
void catorc(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01100110);
  digitalWrite(LATCH2, HIGH);
}
void quinc(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01101101);
  digitalWrite(LATCH2, HIGH);
}
void dieciseis(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01111101);
  digitalWrite(LATCH2, HIGH);
}
void diecisiete(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B00000111);
  digitalWrite(LATCH2, HIGH);
}
void dieciocho(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01111111);
  digitalWrite(LATCH2, HIGH);
}
void diecinueve(){
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B00000110);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B01101111);
  digitalWrite(LATCH2, HIGH);
}
void veinte(){
  digitalWrite(LATCH2, LOW);
  shiftOut(CLOCK1, DATA1, MSBFIRST, B01011011);
  digitalWrite(LATCH1, HIGH);
  digitalWrite(LATCH1, LOW);
  shiftOut(CLOCK2, DATA2, MSBFIRST, B10111111);
  digitalWrite(LATCH2, HIGH);
}
void ROJO(){
  digitalWrite(R, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(V, LOW);
}
void AMARILLO(){
  digitalWrite(R, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(V, LOW);
}
void VERDE(){
  digitalWrite(R, LOW);
  digitalWrite(A, LOW);
  digitalWrite(V, HIGH);
}
void AM(){
   AMARILLO();
    cinco();
    delay(1000);
    cuatro();
    delay(1000);
    tres();
    delay(1000);
    dos();
    delay(1000);
    uno();
    delay(1000);
}
void RO(){
    ROJO();
    veinte();
    delay(1000);
    diecinueve();
    delay(1000);
    dieciocho();
    delay(1000);
    diecisiete();
    delay(1000);
    dieciseis();
    delay(1000);
    quinc();
    delay(1000);
    catorc();
    delay(1000);
    trec();
    delay(1000);
    doc();
    delay(1000);
    once();
    delay(1000);
    diez();
    delay(1000);
    nueve();
    delay(1000);
    ocho();
    delay(1000);
    siete();
    delay(1000);
    seis();
    delay(1000);
    cinco();
    delay(1000);
    cuatro();
    delay(1000);
    tres();
    delay(1000);
    dos();
    delay(1000);
    uno();
    delay(1000);
}
int VERD(){
    VERDE();
    veinte();
    delay(1000);
    diecinueve();
    delay(1000);
    dieciocho();
    delay(1000);
    diecisiete();
    delay(1000);
    dieciseis();
    delay(1000);
    quinc();
    delay(1000);
    catorc();
    delay(1000);
    trec();
    delay(1000);
    doc();
    delay(1000);
    once();
    delay(1000);
    diez();
    delay(1000);
    nueve();
    delay(1000);
    ocho();
    delay(1000);
    siete();
    delay(1000);
    seis();
    delay(1000);
    cinco();
    delay(1000);
    cuatro();
    delay(1000);
    tres();
    delay(1000);
    dos();
    delay(1000);
    uno();
    delay(1000);
}
