
#define led 3

void setup() {

  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int light = analogRead(A0);
  Serial.println(light);
  delay(50);

  if(light>650){
    digitalWrite(led,LOW);
  }
  if(light<600){
    digitalWrite(led,HIGH);
  }
}
