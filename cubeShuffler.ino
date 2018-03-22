#include <Stepper.h>
#define STEPS 200

Stepper stepMotor1(STEPS, 53, 52); //(PUL purple, DIR pink)
Stepper stepMotor2(STEPS, 51, 50);
Stepper stepMotor3(STEPS, 49, 48); 
Stepper stepMotor4(STEPS, 47, 46);
Stepper stepMotor5(STEPS, 45, 44);
Stepper stepMotor6(STEPS, 43, 42);

int button; // need to declare which pin the button is in
int randMotor;
int randDirection;
int buttonState = 0;
int mSpeed =1300; //Speed for the steppers
int rTurn = 200; //Right turn
int lTurn = -200; //Left turn
int fTurn = 400; //180 degree turn
int DL = 100; // Common delay

void setup() {
 pinMode(button, INPUT);
 randomSeed(analogRead(0));
 stepMotor1.setSpeed(mSpeed); //Sets the speeds for motors 1-6
 stepMotor2.setSpeed(mSpeed);
 stepMotor3.setSpeed(mSpeed);
 stepMotor4.setSpeed(mSpeed);
 stepMotor5.setSpeed(mSpeed);
 stepMotor6.setSpeed(mSpeed);


}
void loop() {
  
buttonState = digitalRead(button);
  if(buttonState == HIGH){ //When high the code randomizers the cube
      randMotor = random(1, 7);
        {
          randDirection = random(1,3);
          {
            if(randMotor == 1){
              
            if(randDirection == 1){ stepMotor1.step(rTurn); delay(200); }
            if(randDirection == 2){ stepMotor1.step(lTurn); delay(200); }}
               
            if(randMotor == 2){
              
            if(randDirection == 1){ stepMotor2.step(rTurn); delay(200); }  
            if(randDirection == 2){ stepMotor2.step(lTurn); delay(200); }}
                             
            if(randMotor == 3){

            if(randDirection == 1){ stepMotor3.step(rTurn); delay(200); }
            if(randDirection == 2){ stepMotor3.step(lTurn); delay(200); }}
              
            if(randMotor == 4){
              
            if(randDirection == 1){ stepMotor4.step(rTurn); delay(200); }
            if(randDirection == 2){ stepMotor4.step(lTurn); delay(200); }}
              
            if(randMotor == 5){
              
            if(randDirection == 1){ stepMotor5.step(rTurn); delay(200); }
            if(randDirection == 2){ stepMotor5.step(lTurn); delay(200); }}
             
            if(randMotor == 6){
              
            if(randDirection == 1){ stepMotor6.step(rTurn); delay(200); }
            if(randDirection == 2){ stepMotor6.step(lTurn); delay(200); }} 
          }}}
}
