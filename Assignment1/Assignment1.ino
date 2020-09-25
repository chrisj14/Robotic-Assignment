// Button A- Develop the code to move the Romi Robot in a circle 
// Button B- Develop the code to move the Romi Robot in a square/rectangle 

#include <Romi32U4.h>

Romi32U4Motors motors;
Romi32U4ButtonA btnA;
Romi32U4ButtonB btnB;

void setup()
{
  Serial.begin(9600);
  //encoders.flipDirection(false, true);
}

void loop() {
  // Move in Circle
  if (btnA.isPressed())
  {
    ledGreen(1);
    delay(1000);
    for (int speed = 0; speed <= 450; speed++)
    {
      motors.setLeftSpeed(speed);
      delay(2);
    }
    for (int speed = 450; speed >= 0; speed--)
    {
      motors.setLeftSpeed(speed);
      delay(2);
    }
    ledGreen(0);
  }
  
  else if (btnB.isPressed())
  {
    ledRed(1);
    delay(1000);
    // Forward
    for (int i = 500; i >= 0; i--)
    {
      motors.setSpeeds(100, 100);
      delay(2);
    }
    // Turn Right
    for (int i = 500; i >= 0; i--)
    {
      
      motors.setSpeeds(50, -50);
      delay(2);
    }
    // Forward
    for (int i = 500; i >= 0; i--)
    {
      motors.setSpeeds(100, 100);
      delay(2);
    }
    // Turn Right
    for (int i = 500; i >= 0; i--)
    {
      
      motors.setSpeeds(50, -50);
      delay(2);
    }
    // Forward
    for (int i = 500; i >= 0; i--)
    {
      motors.setSpeeds(100, 100);
      delay(2);
    }
    // Turn Right
    for (int i = 500; i >= 0; i--)
    {
      
      motors.setSpeeds(50, -50);
      delay(2);
    }
    // Forward
    for (int i = 500; i >= 0; i--)
    {
      motors.setSpeeds(100, 100);
      delay(2);
    }
    // Turn Right
    for (int i = 500; i >= 0; i--)
    {
      
      motors.setSpeeds(50, -50);
      delay(2);
    }
    ledRed(0);
  }
  
  else
  {
    motors.setSpeeds(0, 0);
  }
  delay(10);

}
