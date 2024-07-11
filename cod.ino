#include <Servo.h>

// Define the servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

// Define the pin numbers for each servo
const int servo1Pin = 10;
const int servo2Pin = 9;
const int servo3Pin = 8;
const int servo4Pin = 11;
const int servo5Pin = 12;
const int servo6Pin = 7;

// Define the delay time between each servo activation (in milliseconds)
const int delayTime = 1000;

void setup() {
  // Attach the servo objects to the corresponding pins
  servo5.attach(servo5Pin);
  servo4.attach(servo4Pin);
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo6.attach(servo6Pin);
}

void loop() {
  // Move each servo gradually to create a walking motion

  // Move servo1
  servo5.write(180);  // Example angle, adjust as needed
  delay(delayTime);

  // Move servo2
  servo4.write(180);  // Example angle, adjust as needed
  delay(delayTime);

  // Move servo3
  servo1.write(180);  // Example angle, adjust as needed
  delay(delayTime);

  // Move servo5
  servo2.write(180);  // Example angle, adjust as needed
  delay(delayTime);

  // Move servo6
  servo3.write(180);  // Example angle, adjust as needed
  delay(delayTime);
  
  servo6.write(180);  // Example angle, adjust as needed
  delay(delayTime);

  // Move servos back to original position for the next cycle
  servo5.write(0);
    delay(delayTime);
  servo4.write(0);
    delay(delayTime);
  servo1.write(0);
    delay(delayTime);
  servo2.write(0);  // servo4 should also be reset
    delay(delayTime);
  servo3.write(0);
    delay(delayTime);
  servo6.write(0);

  delay(delayTime * 6);// Delay before the next walking cycle
  servo6.write(90);
    delay(delayTime);
  servo3.write(90);
    delay(delayTime);
  servo2.write(90);
    delay(delayTime);
  servo1.write(90);
    delay(delayTime);
  servo4.write(90);
    delay(delayTime);
  servo5.write(90);
    delay(delayTime);

}














