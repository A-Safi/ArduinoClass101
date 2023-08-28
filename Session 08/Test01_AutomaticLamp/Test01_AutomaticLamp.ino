int PhotoCell= A0;
int led=6;
void setup() {
pinMode(6,OUTPUT);
}

void loop() {
  int val= analogRead(PhotoCell);
  if (val>=70){
  digitalWrite (led,LOW);}
  if(val<=70){
    digitalWrite(led,HIGH);}
    delay(500);
}
