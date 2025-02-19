/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo rin;  // create servo object to control a servo
Servo myservo2;
Servo pin;
Servo ptr;

int pos = 0;
int pos2 = 60;// variable to store the servo position

void setup() 
{
  rin.attach(2);
  myservo2.attach(3);
  pin.attach(5);
  ptr.attach(4);// attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 60; pos += 1) 
  { 
    myservo2.write(pos);
    pin.write(pos);
    rin.write(pos);
    ptr.write(pos);
    delay(15);                       
  }
  
  delay(1000);
  for (pos = 60; pos >= 0; pos -= 1) 
  {
    myservo2.write(pos);
    pin.write(pos);
    rin.write(pos);
    ptr.write(pos);
    delay(15);
  }
   delay(1000);

    ptr.write(60);
    delay(500); 
    myservo2.write(60);
    delay(500);
    rin.write(60);
    delay(500);
    pin.write(60);
    delay(500);
    
                          
  ptr.write(0);
   delay(500);
  myservo2.write(0);
   delay(500);
  rin.write(0);
   delay(500);
  pin.write(0);
   delay(500);
  

//myservo2.write(pos);
//myservo3.write(pos);
//ptr.write(180);
//rin.write(180);
}
