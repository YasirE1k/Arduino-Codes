#include <LiquidCrystal.h>
int trigPin=8, echoPin=9,buzzer=10,led=7;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);
lcd.begin(16,2);
}

void loop() {
long timee,distance;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
timee=pulseIn(echoPin,HIGH);
distance=(timee/2)/29.1;

lcd.clear();
lcd.setCursor(0,0);
lcd.print("DSTNCE");
lcd.setCursor(7,0);
lcd.print(distance);
if(distance<10){
  lcd.setCursor(9,0);
  lcd.print("cm");
}else if(distance<100){
  lcd.setCursor(10,0);
  lcd.print("cm");
}else if(distance<1000){
lcd.setCursor(11,0);
lcd.print("cm");
}
if(distance<=5){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(20);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(20);
}
else if(distance<=10){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(50);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(50);
}else if(distance<=15){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(70);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(70);
}else if(distance<=20){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(100);
}else if(distance<=25){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(150);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(150);
}else if(distance<=30){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(250);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(250);
}
delay(10);
}
