int led=3;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {

int valuee=analogRead(A3);
Serial.println(valuee);
  if(valuee<=250){
   digitalWrite(led,HIGH);
  }
  else{
   digitalWrite(led,LOW);
   }
delay(1000);  
}
