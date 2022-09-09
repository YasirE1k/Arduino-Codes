#include <IRremote.h>
int yellow=3,red=4,blue=5,white=6,sound=7;
int IRdatapin=2;

IRrecv IR0(IRdatapin);
decode_results results;

#define buttonpower 16726215
#define button0 16750695
#define button1 16753245
#define button2 16736925
#define button3 16769565
#define button4 16720605
#define button5 16712445

void setup() {
Serial.begin(9600);
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(white,OUTPUT);
pinMode(sound,OUTPUT);
IR0.enableIRIn();
}

void loop() {
if(IR0.decode(&results)){
  Serial.println(results.value);
  IR0.resume();
  if(results.value==buttonpower){
    digitalWrite(yellow,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(blue,HIGH);
    digitalWrite(white,HIGH);
  }
  else if(results.value==button0){
    digitalWrite(yellow,LOW);
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(white,LOW);
  }
  else if(results.value==button1){
    digitalWrite(yellow,!digitalRead(yellow));
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(white,LOW);
  }
  else if(results.value==button2){
    digitalWrite(yellow,LOW);
    digitalWrite(red,!digitalRead(red));
    digitalWrite(blue,LOW);
    digitalWrite(white,LOW);
  }
  else if(results.value==button3){
    digitalWrite(yellow,LOW);
    digitalWrite(red,LOW);
    digitalWrite(blue,!digitalRead(blue));
    digitalWrite(white,LOW);
  }
  else if(results.value==button4){
    digitalWrite(yellow,LOW);
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(white,!digitalRead(white));
  }
  else if(results.value==button5){
    digitalWrite(sound,!digitalRead(sound));
  }
}
delay(500);
}
