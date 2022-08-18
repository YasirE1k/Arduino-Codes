#define led 3
#define pot A3

void setup() {

}

void loop() {

  int value = analogRead(pot);
  value=value/4;
  //we can use map to change too.
  analogWrite(led,value);
}
