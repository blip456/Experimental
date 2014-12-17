#include <SPI.h>
#include <Mirf.h>
#include <nRF24L01.h>
#include <MirfHardwareSpiDriver.h>
#include <SimpleTimer.h>

int joyPin1 = 0;                 // slider variable connecetd to analog pin 0
int joyPin2 = 1;                 // slider variable connecetd to analog pin 1
int value1 = 0;                  // variable to read the value from the analog pin 0
int value2 = 0;                  // variable to read the value from the analog pin 1
int push = 6;
int valuePush = 0;


String toSend = "";
bool kicked = 0;
SimpleTimer timer;

void setup() {

	pinMode(push ,INPUT_PULLUP);
	Serial.begin(9600);

	timer.setInterval(250,prepareTransmit);

	Mirf.spi = &MirfHardwareSpi;
    Mirf.csnPin = 7; //(This is optional to change the chip select pin)
    Mirf.cePin = 8; //(This is optional to change the enable pin)
    Mirf.init(); 
    Mirf.setTADDR((byte *)"serv1");
    Mirf.payload = 1;
    Mirf.config();
    Serial.println("Beginning ... "); 

}


void loop() {
	timer.run();
	// reads the value of the variable resistor 
	value1 = analogRead(joyPin1);   
  	// this small pause is needed between reading
  	// analog pins, otherwise we get the same value twice
  	delay(100);             
  	// reads the value of the variable resistor 
  	value2 = analogRead(joyPin2);   
  	valuePush = digitalRead(push);

  	if(valuePush == LOW){
  		kicked = 1;
  	}


  }
  void prepareTransmit(){
  	if(!kicked){
  		toSend = String(value1) + ":" + String(value2) + ":"+ "NOKICK" +"~";
  		Serial.println("Niet Gedrukt");
  	}else{
  		toSend = String(value1) + ":" + String(value2) + ":"+ "KICK" +"~";
  		Serial.println("Gedrukt");
  		kicked = 0;
  	}
  	Serial.println(toSend);
  	transmit(toSend);
  }

  void transmit(String msg) {
  	byte c; 

  	for( int i=0 ; msg[i]!=0x00 ; i++ )
  	{ 
  		c = msg[i];
  		Mirf.send(&c);
  		while( Mirf.isSending() ) ;
  	}
  }