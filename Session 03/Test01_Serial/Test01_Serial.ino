int a = 0;
void setup() {
  Serial.begin(115200);
}

void loop() {
  if (a == 0){
    Serial.print("Hello World!");
    a++;//(a = a+1)
  }
}
