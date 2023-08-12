float V;
float x;
void setup() {
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  V = analogRead(A0);
  Serial.print(analogRead(A1));
  Serial.print("\t");
  Serial.println(V);
  delay(1000);
}
