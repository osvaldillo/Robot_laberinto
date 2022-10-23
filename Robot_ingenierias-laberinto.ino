#include "Roboto.h"

int sensorFrontal = 1;
int sensorLateral = 2;
int M1R = 3;  //Motor izquierdo, avance hacia adelante
int M1L = 4;  //Motor izquierdo, avance hacia atrás
int M2R = 5;  //Motor derecho, avance hacia adelante
int M2L = 6;  //Motor derecho, avance hacia atras

const int radius;  //radio de giro del robot
const int wheelRadius; //radio de la llanta
const int rpm; //velocidad angular de los motores

void setup() {
  bool fordWard = digitalRead(sensorFrontal);
  bool sideWard= digitalRead(sensorLateral);
}

void loop() {
  if(fordWard == false){                          //Si no hay obstáculos...
    walk(M1R, M2R);                                 //avanza
    if(sideWard == false){                          //Si no hay pared derecha...
      pause(M1R, M2R);                                //detente
      turnR(M1R, M2L, radius,wheelRadius, rpm);       //gira a la derecha y empieza de nuevo
    }
  }else{                                          //Si hay un obstáculo...
    pause(M1R, M2R);                                //detente
    if(sideWard == false){                          //Si no hay pared derecha...
      turnR(M1R, M2L, radius,wheelRadius, rpm);       //gira a la derecha y empieza de nuevo
    }else{                                          //Si hay pared a la derecha
      turnL(M1L, M2R, radius,wheelRadius, rpm);       //gira a la izquierda y empieza de nuevo
    }
  }
}
