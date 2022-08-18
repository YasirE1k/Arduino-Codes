#define potpin A3

int value=0;

void setup() {

  Serial.begin(9600);
  Serial.println("Pot value reading");

}

void loop() {
  value= analogRead(potpin);
  Serial.println(value);

}
