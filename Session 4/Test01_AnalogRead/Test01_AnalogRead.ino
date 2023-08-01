float V;
float x;
void setup() {
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  V = analogRead(A0);
  x = V/1024*5;
  Serial.print("Volt: ");
  Serial.println(x);
  delay(1000);
}
