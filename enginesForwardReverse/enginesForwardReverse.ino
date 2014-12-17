/*
Adafruit Arduino – Lesson 15. Bi-directional Motor
*/
 
int enablePin1 =11;
int enablePin2 =6; 
int in1Pin =10;
int in2Pin =9;
int in3Pin =5;
int in4Pin =3;
int switchPin =7;
int potPin =0;
 
void setup()
{
pinMode(in1Pin, OUTPUT);
pinMode(in2Pin, OUTPUT);
pinMode(in3Pin, OUTPUT);
pinMode(in4Pin,OUTPUT);
pinMode(enablePin1, OUTPUT);
pinMode(enablePin2,OUTPUT);
pinMode(switchPin, INPUT_PULLUP);
}
 
void loop()
{
int speed = analogRead(potPin)/4;
boolean reverse = digitalRead(switchPin);
setMotor(speed, reverse);
}
 
void setMotor(int speed,boolean reverse)
{
analogWrite(enablePin1, speed);
analogWrite(enablePin2, speed);
digitalWrite(in1Pin,! reverse);
digitalWrite(in2Pin, reverse);
digitalWrite(in3Pin,! reverse);
digitalWrite(in4Pin, reverse);
}
