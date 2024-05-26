#include <Servo.h>
 
#define SERVO 11 // Porta Digital 6 PWM
 
Servo s; // Variável Servo
int pos; // Posição Servo
 
void setup ()
{
  s.attach(SERVO);
  Serial.begin(9600);
  s.write(0); // Inicia motor posição zero
}

void loop(){
  delay(1000);
}
