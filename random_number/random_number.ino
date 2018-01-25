int randNumber;
int button = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;
int pin12 = 12;
int buttonState = 0;


void setup(){
  pinMode(button, INPUT);
  randomSeed(analogRead(0));
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin11, OUTPUT);
  pinMode(pin12, OUTPUT);
}

void loop() {
  buttonState = digitalRead(button);
  if(buttonState == HIGH){
  randNumber = random(8, 13);
  digitalWrite(randNumber, HIGH);
  delay(200);
  digitalWrite(randNumber, LOW);
  }
}
