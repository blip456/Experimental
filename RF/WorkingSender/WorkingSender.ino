 //first included your library
#include <SPI.h>
#include <Mirf.h>
#include <nRF24L01.h>
#include <MirfHardwareSpiDriver.h>
void setup(){
   Serial.begin(9600);
    Mirf.spi = &MirfHardwareSpi;
    Mirf.csnPin = 10; //(This is optional to change the chip select pin)
    Mirf.cePin = 9; //(This is optional to change the enable pin)
    Mirf.init(); 
    Mirf.setTADDR((byte *)"serv1");
    Mirf.payload = 32;
    Mirf.config();
    Serial.println("Beginning ... "); // "Beginning ..." on sender, or "Listening ..." on sever (Receiver)
  }
 
  void loop(){ 
    Mirf.send((byte *) "Hello");
    delay(500);
}
