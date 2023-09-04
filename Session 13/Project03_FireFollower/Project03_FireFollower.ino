//motor R
const int IN1 = 2, IN2 = 3;
const int PWMR = 9;
//motor L
const int IN3 = 4, IN4 = 5;
const int PWML = 10;
int e,x1,x2;

void setup() {
  Serial.begin(115200);
  Serial.println("Atiiiiish");
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(PWMR,OUTPUT);
  pinMode(PWML,OUTPUT);
  delay(5000);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(PWMR,90);
  analogWrite(PWML,100);
}

void loop() {
  x1= analogRead(A0);
  x2= analogRead(A1);
  e=x2-x1;
  int A=map(e,-1024,1024,-50,50);
  analogWrite(PWMR,110+A);
  analogWrite(PWML,110-A);
  
}
