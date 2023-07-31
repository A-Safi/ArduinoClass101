const int buttonPin = 4;  // Connect the push button to digital pin 2
const int ledPin = 13;    // Connect the LED to digital pin 13

bool ledState = false;    // Variable to store the current LED state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Set the push button pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT);          // Set the LED pin as output
  digitalWrite(ledPin, ledState);   // Turn off the LED initially
}

void loop() {
  // If the button was pressed, toggle the LED state and update the LED
  if (digitalRead(buttonPin) == LOW) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
  delay(200);
}
