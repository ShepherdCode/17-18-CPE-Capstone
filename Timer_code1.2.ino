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
#define buttonSig A0

int onesCount = 0;//onesCount integer for 0-9 increment
int tensCount = 1;//onesCount integer for 0-9 increment

void setup(){
  for (int i = 0; i <= 13; i++)
    pinMode(i, OUTPUT); //Set all pins from 0 to 13 as OUTPUT
    pinMode(A0, INPUT);
}

void loop(){
  int start;
  start =digitalRead(buttonSig);
  if(start ==1)
  {
  if (onesCount < 10){
    tenths();
    ones();
  }

  if (onesCount == 10){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
    
    digitalWrite(D2a, HIGH);
    digitalWrite(D2b, HIGH);
    digitalWrite(D2c, HIGH);
    digitalWrite(D2d, HIGH);
    digitalWrite(D2e, HIGH);
    digitalWrite(D2f, HIGH);
    digitalWrite(D2g, LOW);
    delay(1000);
    onesCount++;            
  }

  if (onesCount > 10){
    greaterOnes();
    greaterTens();
    if(buttonSig==0)
    exit(0); 
  }

  if (tensCount == 10){
    onesCount = 0; 
    tensCount = 1;
    if(buttonSig==0)
    exit(0); 
  }
  
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
  onesCount++;
}

void ones() {
  if (onesCount == 0){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, LOW);
}

  if (onesCount == 1){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
  }
  
  if (onesCount == 2){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, LOW);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, HIGH);
  }
  
  if (onesCount == 3){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, HIGH);
  }
  
  if (onesCount == 4){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
  
  if (onesCount == 5){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, LOW);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
  
  if (onesCount == 6){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, LOW);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
  
  if (onesCount == 7){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
  }
  
  if (onesCount == 8){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
  
  if (onesCount == 9){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
}

void greaterOnes(){
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
  tensCount++;
  
}

void greaterTens(){
  if (tensCount == 1){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
  }
  
  if (tensCount == 2){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, LOW);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, HIGH);
  }
  
  if (tensCount == 3){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, HIGH);
  }
  
  if (tensCount == 4){
    digitalWrite(D1a, LOW);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
  
  if (tensCount == 5){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, LOW);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
  
  if (tensCount == 6){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, LOW);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH); 
  }
  
  if (tensCount == 7){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, LOW);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, LOW);
    digitalWrite(D1g, LOW);
  }
  
  if (tensCount == 8){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, HIGH);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
  
  if (tensCount == 9){
    digitalWrite(D1a, HIGH);
    digitalWrite(D1b, HIGH);
    digitalWrite(D1c, HIGH);
    digitalWrite(D1d, HIGH);
    digitalWrite(D1e, LOW);
    digitalWrite(D1f, HIGH);
    digitalWrite(D1g, HIGH);
  }
}
