
#include <Servo.h>
Servo myservo;
int start = 140;
int einde = 40;
int wachttijd = 200;
char character;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  Serial.begin(9600);
  myservo.write(start);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()) {
    character = Serial.read();
  }
  if (character == 's')
    sjot();

}

void sjot()
{
  myservo.write(start);
  delay(wachttijd);
  myservo.write(einde);
  delay(wachttijd);
  myservo.write(start);
  delay(wachttijd);
  character = ' ';
}
