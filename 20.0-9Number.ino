int a=2,b=3,c=4,d=5,e=6,f=7,g=8;
int button1=9,button2=10;
int i=0;
int counter=0;

int zeroToNine[10][7]={{1,1,1,1,1,1,0},
                  {0,1,1,0,0,0,0},
                  {1,1,0,1,1,0,1},
                  {1,1,1,1,0,0,1},
                  {0,1,1,0,0,1,1},
                  {1,0,1,1,0,1,1},
                  {1,0,1,1,1,1,1},
                  {1,1,1,0,0,0,0},
                  {1,1,1,1,1,1,1},
                  {1,1,1,1,0,1,1},
  };
void setup() {

for(i=2;i<9;i++){
  pinMode(i,OUTPUT);
}
pinMode(button1,INPUT);
pinMode(button2,INPUT);
}

void loop() {

if(digitalRead(button1)==1){
  counter++;
}if(digitalRead(button2)==1){
  counter--;
}
if(counter>9){
  counter=0;
}if(counter<0){
counter=9;
}

for(int pin=2;pin<9;pin++){
  digitalWrite(pin,zeroToNine[counter][pin-2]);
}
delay(250);
}
