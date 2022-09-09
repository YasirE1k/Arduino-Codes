//I will attach one of them to the A3 to try.
//It didn't happen again, because of the anot and catot probably.

int color1=A3;
int color2=5,color3=6;

void setup() {

pinMode(color1,OUTPUT);
pinMode(color2,OUTPUT);
pinMode(color3,OUTPUT);

}

void loop() {

analogWrite(color1,0);
analogWrite(color2,255);
delay(1000);
analogWrite(color2,0);
analogWrite(color3,255);
delay(1000);
analogWrite(color3,0);
analogWrite(color1,255);
delay(1000);
}
