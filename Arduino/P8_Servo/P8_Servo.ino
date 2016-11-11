#include <Servo.h>
Servo servo1;
const int servoPin = 9;

void setup() {
  servo1.attach(servoPin);

}

void loop() {
  slowMove();
  constantMove();
  


  

  }
  void constantMove(){
    for(int position = 0; position < 180; position += 1)
  {
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }

  // Tell servo to go to 0 degrees, stepping by one degree

  for(int position = 180; position >= 0; position -= 1)
  {                                
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }
  }
    void slowMove(){
     servo1.write(90);
     delay(1000);
     servo1.write(180);
     delay(1000);
     servo1.write(0);
     delay(1000);
  }
  
