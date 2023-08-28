const int OutPin = 13;
const int IRpin = 8;
const int IN1 = 4 , IN2 = 5, PWM1 = 6;

void setup() {
pinMode(OutPin,OUTPUT);
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(PWM1,OUTPUT);
pinMode(IRpin,INPUT);
}

void loop() {

  if (digitalRead(IRpin) == HIGH){
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    analogWrite(PWM1, 255);}
  else{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    int p = map(30,0,100,0,255);
    analogWrite(PWM1,p);
    }
    
}
