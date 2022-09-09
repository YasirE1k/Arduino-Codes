char came_character;
int green=2,blue=3,red=4,white=5;

void setup() {

pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(red,OUTPUT);
pinMode(white,OUTPUT);
Serial.begin(9600);
}
void loop() {
while(Serial.available()>0){
  came_character=Serial.read();
  if(came_character=='0'){
    digitalWrite(green,HIGH);
    Serial.println("Green Led Opened");
  }
  else if(came_character=='1'){
    digitalWrite(green,LOW);
    Serial.println("Green Led Closed");
  }
  else if(came_character=='2'){
    digitalWrite(blue,HIGH);
    Serial.println("Blue Led Opened");
  }
  else if(came_character=='3'){
    digitalWrite(blue,LOW);
    Serial.println("Blue Led Closed");
  }
  else if(came_character=='4'){
    digitalWrite(red,HIGH);
    Serial.println("Red Led Opened");
  }
  else if(came_character=='5'){
    digitalWrite(red,LOW);
    Serial.println("Red Led Closed");
  }
  else if(came_character=='6'){
    digitalWrite(white,HIGH);
    Serial.println("White Led Opened");
  }
  else if(came_character=='7'){
    digitalWrite(white,LOW);
    Serial.println("White Led Closed");
  }
}
}
