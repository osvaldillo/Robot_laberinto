#include


const int EchoPin1 = 5;
const int TriggerPin1 = 6;


void setup() {
  // put your setup code here, to run once:
      
  pinMode(TriggerPin1, OUTPUT);
  pinMode(EchoPin1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int cm1 = ping1(TriggerPin1, EchoPin1);
  int ping(int TriggerPin1, int EchoPin1) {
  long duration1, distanceCm1;
  digitalWrite(TriggerPin1, LOW);  //para generar un pulso limpio ponemos a LOW 4us
  delayMicroseconds(4);
  digitalWrite(TriggerPin1, HIGH);  //generamos Trigger (disparo) de 10us
  delayMicroseconds(10);
  digitalWrite(TriggerPin1, LOW);
  duration1 = pulseIn(EchoPin1, HIGH);  //medimos el tiempo entre pulsos, en microsegundos
  distanceCm1 = duration * 10 / 292/ 2;   //convertimos a distancia, en cm
  return distanceCm1;
  
}
