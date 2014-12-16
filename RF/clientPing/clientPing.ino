// CLIENT
// NRF      ARDUINO    COLOR
// 1 GND    GND        black
// 2 VCC    3.3V       gray short white
// 3 CE     8 out      white
// 4 CSN    7 out      purple short blue
// 5 SCK    13 out     blue
// 6 MOSI   11 out     green
// 7 MISO   12 in      yellow
// 8 IRQ    2 in       orange
#include <SPI.h>
#include <Mirf.h>
#include <nRF24L01.h>
#include <MirfHardwareSpiDriver.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Mirf.csnPin = 7;
  Mirf.cePin = 8;
  Mirf.spi = &MirfHardwareSpi;
  Mirf.init();
  Mirf.setRADDR((byte *)"clie1");
  Mirf.payload = sizeof(unsigned long);
  Mirf.channel = 10;
  Mirf.config();

  Serial.println("Beginning ... ");
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long time = millis();

  Mirf.setTADDR((byte *)"serv1");

  Mirf.send((byte *)&time);

  while (Mirf.isSending()) {
  }
  Serial.println("Finished sending");
  delay(10);
  while (!Mirf.dataReady()) {
    //Serial.println("Waiting");
    if ( ( millis() - time ) > 1000 ) {
      Serial.println("Timeout on response from server!");
      return;
    }
  }

  Mirf.getData((byte *) &time);

  Serial.print("Ping: ");
  Serial.println((millis() - time));

  delay(1000);
}
