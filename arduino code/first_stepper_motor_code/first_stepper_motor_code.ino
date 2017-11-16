#include <Stepper.h>

//int PUL=11; //define Pulse pin
//int DIR=10; //define Direction pin

#define STEPS 200

Stepper stepMotor1(STEPS, 10, 11);

void setup() {
//  pinMode (PUL, OUTPUT);
//  pinMode (DIR, OUTPUT);
 stepMotor1.setSpeed(1900);
}

void loop() {
  stepMotor1.step(800);
  delay(60);
  stepMotor1.step(-800);
  delay(60);
  
 /* for (int i=0; i<800; i++)    //Forward 5000 steps
  {
    digitalWrite(DIR,LOW);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(21);
    digitalWrite(PUL,LOW);
    delayMicroseconds(21);
  }
  delay(250);
  /*
  for (int i=0; i<600; i++)   //Backward 5000 steps
  {
    digitalWrite(DIR,HIGH);
    
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(50);
  } 
  */
}
