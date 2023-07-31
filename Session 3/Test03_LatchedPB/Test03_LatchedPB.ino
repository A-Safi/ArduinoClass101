const int buttonPin = 2;  // Connect the push button to digital pin 2
const int ledPin = 13;    // Connect the LED to digital pin 13

bool ledState = false;    // Variable to store the current LED state
bool buttonState;         // Variable to store the current button state
bool lastButtonState = HIGH; // Variable to store the previous button state
bool buttonPressed = false;  // Variable to detect button press

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Set the push button pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT);          // Set the LED pin as output
  digitalWrite(ledPin, ledState);   // Turn off the LED initially
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the current state of the button

  // Check if the button is pressed (low to high transition)
  if (buttonState == LOW && lastButtonState == HIGH) {
    buttonPressed = true;
  }

  // Update the last button state for the next iteration
  lastButtonState = buttonState;

  // If the button was pressed, toggle the LED state and update the LED
  if (buttonPressed) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    buttonPressed = false;
  }
}
