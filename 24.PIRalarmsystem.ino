int green=7;
int red=6;
int pir=5;
int buzzer=4;
int button1=2;
int button2=3;
bool alarm=false;

void setup() {
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);
pinMode(pir,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(button1,INPUT);
pinMode(button2,INPUT);
Serial.begin(9600);
}

void loop() {
if(digitalRead(button1)==HIGH){
  alarm=true;
  delay(8000);
}
if(digitalRead(button2)==HIGH){
  alarm=false;
}
Serial.print("ALARM : ");
Serial.println(alarm);

if(alarm==true){
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
  if(digitalRead(pir)==HIGH){
    while(digitalRead(button2)==LOW){
      digitalWrite(buzzer,HIGH);
      delay(250);
      digitalWrite(buzzer,LOW);
      delay(250);
    }
  }
}
else{
  digitalWrite(green,LOW);
  digitalWrite(red,HIGH);
}
}
