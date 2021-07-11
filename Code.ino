// C++ code
//
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int servoPos = 0;

void setup()
{
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  servo5.attach(12);
  servo6.attach(13);

}
void loop()
{
  
 //1
  
  for(servoPos = 0; servoPos <= 90; servoPos ++){
  
    delay(20);
    servo1.write(servoPos);
    servo2.write(servoPos);
    delay(10);
    servo3.write(servoPos);
    servo4.write(servoPos);
    delay(20);
    servo5.write(servoPos);
    servo6.write(servoPos);

  }
  
  for(servoPos = 90; servoPos >= 0; servoPos --){
  
    servo1.write(servoPos);
    servo2.write(servoPos);
    servo3.write(servoPos);
    servo4.write(servoPos);
    servo5.write(servoPos);
    servo6.write(servoPos);
  }
  delay(2000);
  
  
  
 //2 
    
  for(servoPos = 90; servoPos <= 180; servoPos ++){
  
    delay(20);
    servo3.write(servoPos);
    servo4.write(servoPos);
    servo5.write(servoPos);
    servo6.write(servoPos);
    delay(20);

  }
  
  for(servoPos = 180; servoPos >= 90; servoPos --){
  
    delay(20);
    servo3.write(servoPos);
    servo4.write(servoPos);
    servo5.write(servoPos);
    servo6.write(servoPos);
    delay(15);

  }
  delay(2000);
  
  
  
 //3
  
  for(servoPos = 0; servoPos <= 140; servoPos ++){
  
    servo1.write(servoPos);
    servo2.write(servoPos);
    delay(20);
    

  }
  
  for(servoPos = 140; servoPos >= 0; servoPos --){
  
    servo1.write(servoPos);
    servo2.write(servoPos);
    delay(5);
    
  }
  delay(2000);


}
