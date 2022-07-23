#include <Arduino.h>
int red=14;
int green=26;
int yellow=35;


void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
digitalWrite(yellow,LOW);
delay(3000);
digitalWrite(green,HIGH);
digitalWrite(red,LOW);
delay(3000);
digitalWrite(yellow,HIGH);
digitalWrite(green,LOW);
delay(1000);
}