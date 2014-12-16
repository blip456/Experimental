// SERVER
// NRF      ARDUINO    COLOR
// 1 GND    GND        brown - black
// 2 VCC    3.3V       red - red
// 3 CE     8 out      RedWhite - white long
// 4 CSN    7 out      WhiteRed - Yello
// 5 SCK    13 out     BlueWhite - Blue
// 6 MOSI   11 out     WhiteBlue - Orange
// 7 MISO   12 in      GreenWhite - Green
// 8 IRQ    2 in       WhiteGreen - White short

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
  Mirf.setRADDR((byte *)"serv1");
  Mirf.payload = sizeof(unsigned long);
  Mirf.channel = 10;
  Mirf.config();
  Serial.println("Server is Listening...");
}

void loop() {
  // put your main code here, to run repeatedly:
  byte data[Mirf.payload];
  if (!Mirf.isSending() && Mirf.dataReady()) {
    Serial.println("Got packet");
    Mirf.setTADDR((byte *)"clie1");
    Mirf.send(data);
    Serial.println("Server Reply sent.");
  }
}
