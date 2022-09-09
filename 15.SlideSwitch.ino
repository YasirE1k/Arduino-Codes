int key1=2,key2=3;
int led1=4,led2=5;

void setup() {

pinMode(key1,INPUT);
pinMode(key2,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);

}

void loop() {
  
  if(digitalRead(key1)){

    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }if(digitalRead(key2)){
    digitalWrite(led2,HIGH);
    digitalWrite(led1,LOW);
  }
}
