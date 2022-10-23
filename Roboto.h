 
bool fordWard(int Echo, int Trigger){
  //código para determinar si hay muro al frente
  long t;
  long d;
  
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  t = pulseIn(Echo, HIGH);
  d = t/59 ;
  return d<3
}

bool  sideWard(){
  //codigo para determinar si hay muro a la derecha
}

void turnR(){
  //código para girar a la derecha
}

void turnL(){
  //código para girar a la izquierda
}

void walk(){
  //código para avanzar hacia el frente
}

void pause(){
  //código para detenerse
}
  
