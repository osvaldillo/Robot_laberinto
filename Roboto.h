/*bool fordWard(int Echo, int Trigger){
  //código para determinar si hay muro al frente
  long t;
  long d;
  
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  t = pulseIn(Echo, HIGH);
  d = t/59 ;
  return d<3;
}



bool  sideWard(int Echo, int Trigger){
  //codigo para determinar si hay muro a la derecha
  long t;
  long d;
  
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  t = pulseIn(Echo, HIGH);
  d = t/59 ;
  return d<3;
}*/

void turnR(int M1R, int M2L, int radius, int wheelRadius, int speed){
  //código para girar a la derecha
  
  const float pi = 3.141592;
  t = (radius*pi/(2*wheelRadius))/speed  //cálculo del tiempo que tardará en girar noventa grados a la derecha
  digitalWrite(M1R, HIGH);
  digitalWrite(M2L, HIGH);
  delay(t);
  digitalWrite(M1R, LOW);
  digitalWrite(M2L, LOW);
}

void turnL(int M1L, int M2R, int radius, int wheelRadius, int speed){
  //código para girar a la izquierda

  float pi = 3.141592;
  t = (radius*pi/(2*wheelRadius))/speed  //cálculo del tiempo que tardará en girar noventa grados a la derecha
  digitalWrite(M1L, HIGH);
  digitalWrite(M2R, HIGH);
  delay(t);
  digitalWrite(M1L, LOW);
  digitalWrite(M2R, LOW);
}

void walk(int MIR, int M2R){
  //código para avanzar hacia el frente
  digitalWrite(M1R, HIGH);
  digitalWrite(M2R, HIGH);
  
}

void pause(int MIR, int M2R){
  //código para detenerse
  digitalWrite(M1R, LOW);
  digitalWrite(M2R, LOW);
}

  
