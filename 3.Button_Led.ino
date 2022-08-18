
#define Button 8
#define Led 10

int button_situation = 0;

void setup() {

  pinMode(Button, INPUT);
  pinMode(Led, OUTPUT);
  }

void loop() {

  button_situation= digitalRead(Button);
  if(button_situation ==1){
  digitalWrite(Led,HIGH);
  }
  else{
    digitalWrite(Led,LOW);
  }
}
