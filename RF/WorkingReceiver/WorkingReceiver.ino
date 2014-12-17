//first included your library
#include <SPI.h>
#include <Mirf.h>
#include <nRF24L01.h>
#include <MirfHardwareSpiDriver.h>

// Motor shield H bridge
int enablePin1 = 4;
int enablePin2 = 6;
int in1Pin = 10;
int in2Pin = 9;
int in3Pin = 5;
int in4Pin = 3;

String message;
int pointIndex;
int kickIndex;
int x,y;

void setup() {
  Serial.begin(9600);
  Mirf.spi = &MirfHardwareSpi;
  Mirf.csnPin = 7; //(This is optional to change the chip select pin)
  Mirf.cePin = 8; //(This is optional to change the enable pin)
  Mirf.init();
  Mirf.setTADDR((byte *)"serv1");
  Mirf.payload = 1;
  Mirf.config();
  Serial.println("Beginning ... "); // "Beginning ..." on sender, or "Listening ..." on sever (Receiver)
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
     else 
     {
       pointIndex = message.indexOf(':');
       x = (message.substring(0, pointIndex)).toInt();
       y = (message.substring(pointIndex+1)).toInt();
       //Serial.println(x + " YOLO " + y); 
       Serial.println(message);     
       message = "";
     }
  }
}
