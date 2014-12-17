
 /* Read Jostick
  * ------------
  *
  * Reads two analog pins that are supposed to be
  * connected to a jostick made of two potentiometers
  *
  * We send three bytes back to the comp: one header and two
  * with data as signed bytes, this will take the form:
  *     Jxy\r\n
  *
  * x and y are integers and sent in ASCII 
  * 
  * http://www.0j0.org | http://arduino.berlios.de
  * copyleft 2005 DojoDave for DojoCorp
  */

 int ledPin = 13;
 int joyPin1 = 0;                 // slider variable connecetd to analog pin 0
 int joyPin2 = 1;                 // slider variable connecetd to analog pin 1
 int value1 = 0;                  // variable to read the value from the analog pin 0
 int value2 = 0;                  // variable to read the value from the analog pin 1
 int push = 6;
 int valuePush = 0;

 void setup() {
  pinMode(ledPin, OUTPUT);              // initializes digital pins 0 to 7 as outputs
  pinMode(push ,INPUT_PULLUP);
  Serial.begin(9600);
 }

 int treatValue(int data) {
  return (data * 19 / 1024);
 }

 void loop() {
  // reads the value of the variable resistor 
  value1 = analogRead(joyPin1);   
  // this small pause is needed between reading
  // analog pins, otherwise we get the same value twice
  delay(100);             
  // reads the value of the variable resistor 
  value2 = analogRead(joyPin2);   
  valuePush = digitalRead(push);
  if(valuePush == HIGH){
    digitalWrite(ledPin,LOW);
  }else{
    digitalWrite(ledPin,HIGH);
  }

  Serial.print('J');
  Serial.print(treatValue(value1));
  Serial.print(':');
  Serial.println(treatValue(value2));

 }