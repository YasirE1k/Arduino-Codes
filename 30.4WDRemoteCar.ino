//switch case didn't work with define
//this project didn't work, there are lots of cause to not work. 

#include <IRremote.h>
const int ir_command_pin=2;
const int OUT1=5;
const int OUT2=6;
const int OUT3=7;
const int OUT4=8;
const int motor_control_1=9;
const int motor_control_2=10;
//const int echoPin=11;
//const int trigPin=12;
int speeed=250;
IRrecv ir_receiver(ir_command_pin);
decode_results results;

#define upper_arrow 16718055
#define lower_arrow 16730805
#define left_arrow 16716015 
#define right_arrow 16734885
#define squre 16756815
#define star 16738455
#define button_0 16750695

void setup() {
pinMode(OUT1,OUTPUT);
pinMode(OUT2,OUTPUT);
pinMode(OUT3,OUTPUT);
pinMode(OUT4,OUTPUT);
pinMode(motor_control_1,OUTPUT);
pinMode(motor_control_2,OUTPUT);
//pinMode(echoPin,INPUT);
//pinMode(trigPin,OUTPUT);
Serial.begin(9600);
digitalWrite(motor_control_1,LOW);
digitalWrite(motor_control_2,LOW);
digitalWrite(OUT1,LOW);
digitalWrite(OUT2,LOW);
digitalWrite(OUT3,LOW);
digitalWrite(OUT4,LOW);

ir_receiver.enableIRIn();
}

void loop() {
//int distance=distance_measure();
if(1){
  if(ir_receiver.decode(&results)){
    
    if(results.value==square){
      
          speeed+=5;
      
    }else if(results.value==star){
        
          speeed-=5;
    }else if(results.value==upper_arrow){
        motor_moves(1,0,1,0,speeed);
    }else if(results.value==lower_arrow){
        motor_moves(0,1,0,1,speeed);
    }else if(results.value==left_arrow){
        motor_moves(0,0,1,0,speeed);
    }else if(results.value==right_arrow){
       motor_moves(1,0,0,0,speeed);
    }else if(results.value==button_0){
        motor_moves(0,0,0,0,0);
      }
    }
    ir_receiver.resume();
  }
/*else{
  /*
  motor_moves(0,1,1,0,speeed);
  delay(500);
  motor_moves(0,0,0,0,0);

}
*/
}
/*
int distance_measure(){
  long timee,distance;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  timee=pulseIn(echoPin,HIGH);
  distance=timee/29.1/2;
  delay(50);
  return distance;
  }
*/  
void motor_moves(int value1,int value2,int value3,int value4,int speeed){
  digitalWrite(OUT1,value1);
  digitalWrite(OUT2,value2);
  digitalWrite(OUT3,value3);
  digitalWrite(OUT4,value4);
  analogWrite(motor_control_1,speeed);
  analogWrite(motor_control_2,speeed);
}
