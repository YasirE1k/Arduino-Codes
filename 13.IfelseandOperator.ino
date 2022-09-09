int red_led=2, green_led=3;
int heat=21, moisture=40;

void setup() {

pinMode(red_led,OUTPUT);
pinMode(green_led,OUTPUT);

}

void loop() {

if(heat>21 && moisture<=40){
  digitalWrite(red_led,HIGH);
  digitalWrite(green_led,LOW);
  
}else{
  digitalWrite(red_led,LOW);
  digitalWrite(green_led,HIGH);
  
}
}
