#define D1c 0
#define D1d 1
#define D1e 2
#define D1g 3
#define D1f 4
#define D1b 5
#define D1a 6
#define D2f 7
#define D2b 8
#define D2a 9
#define D2c 10
#define D2g 11
#define D2d 12
#define D2e 13

int COUNT = 0;//count integer for 0-9 increment
int COUNT2 = 1;//count integer for 0-9 increment

void setup(){
  for (int i = 0; i <= 13; i++)
    pinMode(i, OUTPUT); //Set all pins from 0 to 13 as OUTPUT
}

void loop(){
  if (COUNT < 10){
    tenths();
    ones();
  }

  if (COUNT == 10){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
    COUNT++;
    digitalWrite(D2a, HIGH);
    digitalWrite(D2b, HIGH);
    digitalWrite(D2c, HIGH);
    digitalWrite(D2d, HIGH);
    digitalWrite(D2e, HIGH);
    digitalWrite(D2f, HIGH);
    digitalWrite(D2g, LOW);              
  }

  if (COUNT > 10){
    greaterones();
    greatertens();
  }
}

void tenths() {
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, HIGH);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, LOW);
  delay (100);
  digitalWrite(D2a, LOW);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, LOW);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, LOW);
  digitalWrite(D2g, LOW);
  delay(100);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, LOW);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, HIGH);
  digitalWrite(D2f, LOW);
  digitalWrite(D2g, HIGH);
  delay(100);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, LOW);
  digitalWrite(D2g, HIGH);
  delay(100);
  digitalWrite(D2a, LOW);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, LOW);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(100);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, LOW);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(100);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, LOW);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, HIGH);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(100);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, LOW);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, LOW);
  digitalWrite(D2g, LOW);
  delay(100);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, HIGH);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(100);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(100);
  COUNT++;
}

void ones() {
  if (COUNT == 0){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, LOW);
    //delay (1000);
}

  if (COUNT == 1){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
    // delay(1000);
  }
  
  if (COUNT == 2){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, LOW);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT == 3){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT == 4){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT == 5){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, LOW);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT == 6){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, LOW);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT == 7){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
    // delay(1000);
  }
  
  if (COUNT == 8){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT == 9){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
}

void greaterones(){
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, HIGH);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, LOW);
  delay (1000);
  digitalWrite(D2a, LOW);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, LOW);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, LOW);
  digitalWrite(D2g, LOW);
  delay(1000);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, LOW);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, HIGH);
  digitalWrite(D2f, LOW);
  digitalWrite(D2g, HIGH);
  delay(1000);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, LOW);
  digitalWrite(D2g, HIGH);
  delay(1000);
  digitalWrite(D2a, LOW);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, LOW);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(1000);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, LOW);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(1000);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, LOW);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, HIGH);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(1000);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, LOW);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, LOW);
  digitalWrite(D2g, LOW);
  delay(1000);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, HIGH);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(1000);
  digitalWrite(D2a, HIGH);
  digitalWrite(D2b, HIGH);
  digitalWrite(D2c, HIGH);
  digitalWrite(D2d, HIGH);
  digitalWrite(D2e, LOW);
  digitalWrite(D2f, HIGH);
  digitalWrite(D2g, HIGH);
  delay(1000);
  COUNT2++;
  if (COUNT2 == 10){
    COUNT2 = 1;
    COUNT = 0; 
  }
}

void greatertens(){
  if (COUNT2 == 2){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, LOW);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT2 == 3){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT2 == 4){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT2 == 5){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, LOW);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT2 == 6){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, LOW);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT2 == 7){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
    // delay(1000);
  }
  
  if (COUNT2 == 8){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
  
  if (COUNT2 == 9){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
    //delay(1000);
  }
}



