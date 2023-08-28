//motor R
const int IN1 = 2, IN2 = 3;
const int PWMR = 9;
//motor L
const int IN3 = 4, IN4 = 5;
const int PWML = 10;

const int SR = 6;
const int SM = 7;
const int SL = 8;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(PWMR,OUTPUT);
  pinMode(PWML,OUTPUT);
  pinMode(SR,INPUT);
  pinMode(SM,INPUT);
  pinMode(SL,INPUT);
  delay(5000);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(PWMR,130);
  analogWrite(PWML,130);
}

void loop() {
 if(digitalRead(SR) == HIGH){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  while(digitalRead(SM)==LOW){
    
  }
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
 }

///////////////////////////////////////////////////////////////////////////////////
 if(digitalRead(SL) == HIGH){
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  while(digitalRead(SM)==LOW){
    
  }
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
 }

}
