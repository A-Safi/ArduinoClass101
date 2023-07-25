int A = 13;
int B = 12;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(A, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(A, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(B, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(B, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
