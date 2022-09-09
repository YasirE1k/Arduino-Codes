int Led1=2,Led2=3,Led3=4,Led4=5,Button=6;

void setup() {
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT);
pinMode(Led4,OUTPUT);
pinMode(Button,INPUT);
}

void loop() {

if(digitalRead(Button)==HIGH){
  digitalWrite(Led1,HIGH);
  digitalWrite(Led2,HIGH);
  digitalWrite(Led3,HIGH);
  digitalWrite(Led4,LOW);
}else{
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,LOW);
  digitalWrite(Led4,LOW);
}
}
