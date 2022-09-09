byte A=2,B=3,C=4,D=5;
int step_number=512;
int counter;

void setup() {
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
}
void loop() {
while(counter<step_number){
  motor_moves(1,0,0,0);
  motor_moves(1,1,0,0);
  motor_moves(0,1,0,0);
  motor_moves(0,1,1,0);
  motor_moves(0,0,1,0);
  motor_moves(0,0,1,1);
  motor_moves(0,0,0,1);
  motor_moves(1,0,0,1);
counter++;
}
}
void motor_moves(byte x1,byte x2,byte x3,byte x4){
  digitalWrite(A,x1);
  digitalWrite(B,x2);
  digitalWrite(C,x3);
  digitalWrite(D,x4);
  delay(10);
}
