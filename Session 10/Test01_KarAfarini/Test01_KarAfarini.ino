#include "SRF05.h"
#include <Servo.h>

const int trigger = 7;
const int echo    = 6;

SRF05 SRF(trigger, echo);
Servo myservo;

void setup() {
  Serial.begin(115200);
  SRF.setCorrectionFactor(1.035);
  myservo.attach(9); 
}

void loop() {
  int Dis = SRF.getMillimeter();
  if(Dis <= 50){
    myservo.write(180);
    delay(5000);
    myservo.write(0);
  }
}
