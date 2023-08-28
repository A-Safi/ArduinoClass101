int P = 4;
int LED = 13;

void setup() {
  pinMode(P,INPUT_PULLUP);
  pinMode(LED,OUTPUT);
}

void loop() {
  if (digitalRead(P)==1){
    digitalWrite(LED,HIGH);
  }
  else {
    digitalWrite(LED,LOW);
  }
}
