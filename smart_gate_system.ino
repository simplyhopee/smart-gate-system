#include <Servo.h>

Servo gateServo;

const int buttonPin = 2;
const int servoPin = 3;

void setup() {
  gateServo.attach(servoPin);

  pinMode(buttonPin, INPUT_PULLUP);

  gateServo.write(0);   // Gate starts closed
}

void loop() {

  if (digitalRead(buttonPin) == LOW) {  // Button pressed
    gateServo.write(90);                // Open gate
    delay(1000);
  }
  else {
    gateServo.write(0);                 // Close gate
  }

}
