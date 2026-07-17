#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

int pos = 0;
int direction = 1;
unsigned long startTime;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  startTime = millis();
}

void loop() {

  if (millis() - startTime < 2000) {

    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);

    pos += direction;

    if (pos >= 180 || pos <= 0) {
      direction = -direction;
    }

    delay(10);
  }
  else {

    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);

    while (true) {
    }
  }
}