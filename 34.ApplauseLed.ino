int mic=2,led=5;

void setup() {

pinMode(mic,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}
void loop() {
int sensordata=digitalRead(mic);
if(sensordata==LOW){
  Serial.println("You applaused");
  digitalWrite(led,HIGH);
  delay(1000);
}else{
  digitalWrite(led,LOW);
  delay(10);
}

}
