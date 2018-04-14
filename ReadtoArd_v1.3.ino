#include <Stepper.h>
#define STEPS 200

Stepper stepMotor1(STEPS, 53, 52); //(PUL purple, DIR pink)
Stepper stepMotor2(STEPS, 51, 50);
Stepper stepMotor3(STEPS, 49, 48); 
Stepper stepMotor4(STEPS, 47, 46);
Stepper stepMotor5(STEPS, 45, 44);
Stepper stepMotor6(STEPS, 37, 36);

int button = 28;        //Pin button is located
int timer= 22;          //Pin attached to the timer
int val;                //Input from the button
int offSet = 0;         //Value used to determine double move vs single move
int mSpeed = 1350;      //Speed for the steppers
int rTurn = 200;        //Clockwise turn
int lTurn = -200;       //Counter-Clockwise turn
int fTurn = 400;        //180 degree turn
int DL = 80;            //Common delay
int redpin = 30;        //Pin red led is located
int greenPin = 31;      //Pin green led is located
String movE;            //String of serial read in moves
String moves;           //String of concatination of all movE strings

void setup() {
 pinMode(button, INPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(redpin, OUTPUT);
  pinMode(timer, OUTPUT);
 stepMotor1.setSpeed(mSpeed); //Sets the speeds for motors 1-6  
 stepMotor2.setSpeed(mSpeed);
 stepMotor3.setSpeed(mSpeed);
 stepMotor4.setSpeed(mSpeed);
 stepMotor5.setSpeed(mSpeed);
 stepMotor6.setSpeed(mSpeed);
 Serial.begin(9600);
}
void loop() {

while(Serial.available()){ 
for(int c=0;c<=3;c++)    //3 cycle delay to give arduino to read from serial
     { 
       movE = Serial.readString();    
       moves=moves+movE;
       Serial.println(movE);
       if(c%2==0)
        digitalWrite(redpin, 1);
       if(c%2==1)
        digitalWrite(redpin, 0);
       
     while(c==3)
     {
       digitalWrite(redpin, 0);
       digitalWrite(greenPin, 1);  
       val = digitalRead(button);
     if(val==1)
     {
       digitalWrite(timer, 1);   
for(int b =moves.length(); b>0;b--)
  {
   if(moves.substring(b-1,b)=="F"){ // 1st face option
    if(moves.substring(b-2,b-1)=="B"){   
      stepMotor1.step(rTurn);
      stepMotor6.step(rTurn);
      delay(DL);        
      offSet=1;}  
    
    if(moves.substring(b-2,b-1)=="b")
    {
      stepMotor1.step(rTurn);
      stepMotor6.step(lTurn);
      delay(DL);        
      offSet=1;  
    }
    if(offSet==0){
      stepMotor1.step(rTurn);
       delay(DL);
    }
   }
   
    if(moves.substring(b-1,b)=="f") //2nd face option
    {
      if(moves.substring(b-2,b-1)=="B")
       {
         stepMotor1.step(lTurn);
         stepMotor6.step(rTurn);
         delay(DL);        
         offSet=1;       
        }
      if(moves.substring(b-2,b-1)=="b")
       {
         stepMotor1.step(lTurn);
         stepMotor6.step(lTurn);
         delay(DL);         
         offSet=1;  
       }
      if(offSet==0)
       {
         stepMotor1.step(lTurn);
         delay(DL);
       }
   }
   
   if(moves.substring(b-1,b)=="R")  //1st right options
    {
     if(moves.substring(b-2,b-1)=="L")
      {
        stepMotor2.step(rTurn);
        stepMotor4.step(rTurn);
        delay(DL);        
        offSet=1;  
      }
     if(moves.substring(b-2,b-1)=="l")
      {
        stepMotor2.step(rTurn);
        stepMotor4.step(lTurn);
        delay(DL);        
        offSet=1;  
      }
     if(offSet==0)
      {
       stepMotor2.step(rTurn);
       delay(DL);
      }
   }
   
   if(moves.substring(b-1,b)=="r") //2nd right option
    {
     if(moves.substring(b-2,b-1)=="L")
      {
        stepMotor2.step(lTurn);
        stepMotor4.step(rTurn);
        delay(DL);        
        offSet=1;  
      }
    if(moves.substring(b-2,b-1)=="l")
     {
        stepMotor2.step(lTurn);
        stepMotor4.step(lTurn);
        delay(DL);        
        offSet=1;  
     }
    if(offSet==0)
     {
       stepMotor2.step(lTurn);
       delay(DL);
     }
   }
   
   if(moves.substring(b-1,b) == "D")//1st down option
    {
     if(moves.substring(b-2,b-1) == "U")
      {
        stepMotor3.step(rTurn);
        stepMotor5.step(rTurn);
        delay(DL);        
        offSet=1;  
      }
     if(moves.substring(b-2,b-1) == "u")
      {
        stepMotor3.step(rTurn);
        stepMotor5.step(lTurn);
        delay(DL);        
        offSet=1;  
      }
     if(offSet==0)
      {
        stepMotor3.step(rTurn);
        delay(DL);
      } 
   }
   
    if(moves.substring(b-1,b) == "d")//2nd down option
     {
      if(moves.substring(b-2,b-1) == "U")
       {
         stepMotor3.step(lTurn);
         stepMotor5.step(rTurn);
         delay(DL);        
         offSet=1;  
       }
    if(moves.substring(b-2,b-1) == "u")
     {
       stepMotor3.step(lTurn);
       stepMotor5.step(lTurn);
       delay(DL);        
       offSet=1;  
     }
    if(offSet==0)
     {
       stepMotor3.step(lTurn);
       delay(DL);
     } 
   } 

     if(moves.substring(b-1,b)=="L")//1st left option
      {
        if(moves.substring(b-2,b-1)=="R")
         {
           stepMotor4.step(rTurn);
           stepMotor2.step(rTurn);
           delay(DL);        
           offSet=1; 
         }
        if(moves.substring(b-2,b-1)=="r")
         {
           stepMotor4.step(rTurn);
           stepMotor2.step(lTurn);
           delay(DL);        
           offSet=1; 
         }
        if(offSet==0)
         {
           stepMotor4.step(rTurn);
           delay(DL);
         } 
     }

     if(moves.substring(b-1,b)=="l")//2nd left option
      {
       if(moves.substring(b-2,b-1)=="R")
        {
          stepMotor4.step(lTurn);
          stepMotor2.step(rTurn);
          delay(DL);        
          offSet=1; 
        }
       if(moves.substring(b-2,b-1)=="r")
        {
          stepMotor4.step(lTurn);
          stepMotor2.step(lTurn);
          delay(DL);        
          offSet=1; 
        }
       if(offSet==0)
        {
          stepMotor4.step(lTurn);
          delay(DL);
        } 
     }
           
     if(moves.substring(b-1,b) == "U") //1st up option
      {
       if(moves.substring(b-2,b-1) == "D")
        {
          stepMotor5.step(rTurn);
          stepMotor3.step(rTurn);
          delay(DL);        
          offSet=1; 
        }
       if(moves.substring(b-2,b-1) == "d")
        {
          stepMotor5.step(rTurn);
          stepMotor3.step(lTurn);
          delay(DL);        
          offSet=1; 
        }
       if(offSet==0)
        {
          stepMotor5.step(rTurn);
          delay(DL);
        }
  } 

     if(moves.substring(b-1,b) == "u") //1st up option
      {
       if(moves.substring(b-2,b-1) == "D")
        {
          stepMotor5.step(lTurn);
          stepMotor3.step(rTurn);
          delay(DL);        
          offSet=1; 
        }
       if(moves.substring(b-2,b-1) == "d")
        {
          stepMotor5.step(lTurn);
          stepMotor3.step(lTurn);
          delay(DL);        
          offSet=1; 
        }
       if(offSet==0)
        {
          stepMotor5.step(lTurn);
          delay(DL);
        }
  }
              
     if(moves.substring(b-1,b) == "B")//1st back option
      {
       if(moves.substring(b-2,b-1) == "F")
        {
          stepMotor6.step(rTurn);
          stepMotor1.step(rTurn);
          delay(DL);        
          offSet=1;
        }
       if(moves.substring(b-2,b-1) == "f")
        {
          stepMotor6.step(rTurn);
          stepMotor1.step(lTurn);
          delay(DL);        
          offSet=1;
        }
       if(offSet==0)
        {
          stepMotor6.step(rTurn);
          delay(DL);
        }
      }  
     if(moves.substring(b-1,b) == "b")//2nd bottom option
      {
       if(moves.substring(b-2,b-1) == "F")
        {
          stepMotor6.step(lTurn);
          stepMotor1.step(rTurn);
          delay(DL);        
          offSet=1;
        }
       if(moves.substring(b-2,b-1) == "f")
        {
          stepMotor6.step(lTurn);
          stepMotor1.step(lTurn);
          delay(DL);        
          offSet=1;
        }
       if(offSet==0)
        {
          stepMotor6.step(lTurn);
          delay(DL);
        }
   } 
       if(offSet==1)
        {
           b=b-1;
           offSet=0;
        }
       if(b==1)
        {
           for(int y=0; y<=20; y++)
             {
                digitalWrite(timer, 0);
                digitalWrite(greenPin, 0);
                digitalWrite(redpin, 1);
                delay(50);
                digitalWrite(greenPin, 1);
                digitalWrite(redpin, 0);
                delay(50);
             }
                digitalWrite(greenPin, 0);
                  c++;
        }
       }
      }
     }
    }
   }
  }

