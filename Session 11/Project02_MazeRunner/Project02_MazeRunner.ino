#include "SRF05.h"

//motor R
const int IN1 = 2, IN2 = 3;
const int PWMR = 9;
//motor L
const int IN3 = 4, IN4 = 5;
const int PWML = 10;

const int trigger = 7;
const int echo    = 6;

SRF05 SRF(trigger, echo);

void setup() {
  SRF.setCorrectionFactor(1.035);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(PWMR,OUTPUT);
  pinMode(PWML,OUTPUT);
  delay(5000);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(PWMR,110);
  analogWrite(PWML,110);
  
}

void loop() {
  if(SRF.getCentimeter()<8){
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
    delay(1000);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
    delay(1000);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
  }
}
