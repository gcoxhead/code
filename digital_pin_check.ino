/*Cycles through pins D2-D13 of the aruduino. 
/ Connect pins D2-D13 to LED'S via a 220ohm resistor.
*/
void setup() {
pinMode(2, OUTPUT);
pinMode(3,OUTPUT);
pinMode(4, OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8, OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7, HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);

delay (50);

digitalWrite(2, LOW);

delay(50);

digitalWrite(3,LOW);

delay(50);

digitalWrite(4, LOW);

delay(50);

digitalWrite(5,LOW);

delay(50);

digitalWrite(6,LOW);

delay(50);

digitalWrite(7,LOW);

delay(50);

digitalWrite(8, LOW);

delay(50);

digitalWrite(9,LOW);

delay(50);

digitalWrite(10,LOW);

delay(50);
digitalWrite(11,LOW);

delay(50);

digitalWrite(12, LOW);

delay(50);

digitalWrite(13, LOW);

delay(50);

digitalWrite(13, HIGH);

delay(50);

digitalWrite(12,HIGH);

delay(50);

digitalWrite(11, HIGH);

delay(50);

digitalWrite(10,HIGH);

delay(50);

digitalWrite(9,HIGH);

delay(50);

digitalWrite(8,HIGH);

delay(50);

digitalWrite(7, HIGH);

delay(50);

digitalWrite(6,HIGH);

delay(50);

digitalWrite(5,HIGH);

delay(50);
digitalWrite(4,HIGH);

delay(50);

digitalWrite(3, HIGH);

delay(50);

digitalWrite(2, HIGH);

delay(50);

}
