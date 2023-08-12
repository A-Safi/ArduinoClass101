int x,y,sw=3;

void setup() {
 pinMode(sw,INPUT_PULLUP);
 pinMode(13,OUTPUT);
 Serial.begin(115200);
}

void loop() {
 x = analogRead(A0);
 y = analogRead(A1);
 Serial.print(y);
 Serial.print("\t");
 Serial.println(x);
 if(digitalRead(sw)==LOW){
  digitalWrite(13,HIGH);
 }
 if(digitalRead(sw)==HIGH){
  digitalWrite(13,LOW);
 }
}
