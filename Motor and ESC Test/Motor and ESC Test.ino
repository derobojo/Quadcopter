#include <Servo.h>

Servo esc1;
Servo esc2;
Servo esc3;
Servo esc4;

//min 49
//max 140
int arm1=0;
int arm2=0;
int arm3=0;

void setup()
{
  esc1.attach(7);
  esc2.attach(3);
  esc3.attach(4);
  Serial.begin(9600);
  esc1.write(arm1);
  esc2.write(arm2);
  esc3.write(arm3);
  
}

void loop(){
}


