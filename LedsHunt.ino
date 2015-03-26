int MAX_WIDTH = 3;

int greenLedP = 12;
int redLedP = 10;
int yellowLedP = 8;
int buttonLeft = 2;
int buttonRight = 4;
int ledsP[] = {greenLedP,redLedP,yellowLedP};
int positionLed = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLedP,OUTPUT);
  pinMode(redLedP,OUTPUT);
  pinMode(yellowLedP,OUTPUT);
  pinMode(buttonRight, INPUT);
  pinMode(buttonLeft, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int actualPin = ledsP[positionLed];
  digitalWrite(actualPin,HIGH);
  
  if(digitalRead(buttonRight)==HIGH){
 //   if(positionLed<MAX_WIDTH){
      positionLed = ++positionLed%MAX_WIDTH;
  //  }
    waitTillKeyNotPress(buttonRight);   
  }
 // movePlayer(buttonPin, positionLed, true);
  //movePlayer(buttonPin2, positionLed, false);
  int previousPin = actualPin;
  digitalWrite(previousPin, LOW);

}

void movePlayer(int buttonPin, int positionLed, boolean increases){
  if(digitalRead(buttonPin)==HIGH){
    if(increases){
      if(positionLed<MAX_WIDTH){
        positionLed++;
      }
    }else{
      if(positionLed>0){
        positionLed--;
      }
    }
  }
  waitTillKeyNotPress(buttonPin);
}

void waitTillKeyNotPress(int pin){
  while(digitalRead(pin)==HIGH){
    delay(10);
  }
}

