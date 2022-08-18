int lm35Pin =A0;
int led = 8;
#define buzzer 9

int timee =50;
int readed_value=0;
float heat_tension=0;
float heat =0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  readed_value = analogRead(lm35Pin);
  heat_tension=(5000.0/1023.0)*readed_value;
  heat = heat_tension / 10.0;

  Serial.println(heat);

  if(heat >=29){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(timee);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    }
  else{

  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  }
}
