//first included your library
#include <SPI.h>
#include <Mirf.h>
#include <nRF24L01.h>
#include <MirfHardwareSpiDriver.h>

// Motor shield H bridge
int enablePin1 = 5;
int enablePin2 = 3;
int in1Pin = 4;
int in2Pin = 6;
int in3Pin = 0;
int in4Pin = 10;

String message;
int pointIndex;
int kickIndex;
int x,y;
String kick;

void setup() {
  //Serial.begin(9600);
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin,OUTPUT);
  pinMode(enablePin1, OUTPUT);
  pinMode(enablePin2,OUTPUT);
  Mirf.spi = &MirfHardwareSpi;
  Mirf.csnPin = 7; //(This is optional to change the chip select pin)
  Mirf.cePin = 8; //(This is optional to change the enable pin)
  Mirf.init();
  Mirf.setTADDR((byte *)"serv1");
  Mirf.payload = 1;
  Mirf.config();
  //Serial.println("Beginning ... "); // "Beginning ..." on sender, or "Listening ..." on sever (Receiver)
}

void loop() {
  byte c;

  // is there any data pending? 
  if(Mirf.dataReady())
  {
    // well, get it
    Mirf.getData(&c);

    // ... and write it out to the PC
    char letter = char(c);
    if(letter != '~')
    {
      message = String(message + letter);
    }
    //Ik ben klaar met de message
    else {
      pointIndex = message.indexOf(':');
      kickIndex = message.indexOf(';', pointIndex+1);
      x = (message.substring(0, pointIndex)).toInt();
      y = (message.substring(pointIndex+1, kickIndex)).toInt();
      kick = message.substring(kickIndex+1);
      //Serial.println(x + " YOLO " + y); 
      String printString = "x: " + String(x) + " - y: " + String(y);
      //Serial.println(printString);
      //Serial.println(message);     
      message = "";



      controls(map(x,0,1024,-255,255),map(y,0,1024,-255,255));
    }
  }
}
void controls(int x,int y){
  int speedLeft = x-y;
  int speedRight = x-y;
  // Serial.print(x);v
  // Serial.print(" : ");
  // Serial.print(y);
  // Serial.print(" = ");

  if(x < 120 && x > -120 && y > 0){
    speedLeft = y;
    speedRight = -y;
  }
  else if(x < 120 && x > -120 && y < 0){
    speedLeft = y;
    speedRight = -y;
  }
  else if(x < 0 && y < 0){
    speedLeft = x-(y/2);
    speedRight = x;
  }
  else if(x < 0 && y > 0){
    speedLeft = x;
    speedRight = x+(y/2);
  }
  else if(x > 0 && y < 0){
    speedLeft = x + (y/2);
    speedRight = x;
  }
  else if(x > 0 && y > 0){
    speedLeft = x;
    speedRight = x-(y/2);
  }

  // Serial.print(speedLeft);
  // Serial.print(" : ");
  // Serial.println(speedRight);


  setMotor(speedLeft,speedRight);
}


void setMotor(int speedLeft,int speedRight)
{
  boolean reverseLeft = 1;
  boolean reverseRight = 1;
  if(speedRight < 0){
    speedRight = -speedRight;
    reverseRight = 0;
  }
  if(speedLeft < 0){
    speedLeft = -speedLeft;
    reverseLeft = 0;
  }
  analogWrite(enablePin1, speedLeft);
  analogWrite(enablePin2, speedRight);
  digitalWrite(in1Pin,! reverseLeft);
  digitalWrite(in2Pin, reverseLeft);
  digitalWrite(in3Pin,! reverseRight);
  digitalWrite(in4Pin, reverseRight);
}