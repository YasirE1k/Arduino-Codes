int sensor_pin=2;
int relay_control=3;
int situation=0;

void setup() {
pinMode(sensor_pin,INPUT);
pinMode(relay_control,OUTPUT);
}

void loop() {
int sensorData=digitalRead(sensor_pin);
if(sensorData==LOW){
  situation++;
  if(situation==1){
      digitalWrite(relay_control,HIGH);
  }
  else if(situation==2){
    digitalWrite(relay_control,LOW);
    situation=0;
  }
  delay(500);
}
}
