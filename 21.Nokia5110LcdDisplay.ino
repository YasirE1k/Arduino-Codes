#include <LCD5110_Basic.h>

LCD5110 screen(8,9,10,11,12);

extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];

String text="Ok";

void setup(){
screen.InitLCD();
screen.setContrast(70); //0-127
screen.setFont(SmallFont);

}

void loop(){
screen.print("Hello World",0,0);
screen.print(text,10,8);
}
