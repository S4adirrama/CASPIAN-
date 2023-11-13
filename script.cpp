#include <Servo.h>

Servo servo1;
Servo servo2;

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  servo1.attach(9);
  servo2.attach(10);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);

  if (buttonState1 == HIGH) {
    servo1.write(90);
    servo2.write(90);
  } else {
    servo1.write(0);
    servo2.write(0);
  }

  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  if (buttonState2 == HIGH && buttonState3 == HIGH) {
    servo1.write(180);
    servo2.write(180);
  } else {
    servo1.write(0);
    servo2.write(0);
  }
}
