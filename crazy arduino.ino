// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;// create servo object to control a servo 
                // a maximum of eight servo objects can be created 
Servo topservo;
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object 
  topservo.attach(5);
} 
 
 
void loop() 
{
                   // in steps of 1 degree 
    delay(100);myservo.write(0);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);myservo.write(20);              // tell servo to go to position in variable 'pos' 
    topservo.write(120); 
    digitalWrite(8,HIGH);
    delay(100);
    
    myservo.write(40);              // tell servo to go to position in variable 'pos' 
    topservo.write(120); 
    digitalWrite(8,HIGH);
    delay(100);                       // waits 15ms for the servo to reach the position myservo.write(100);     
    myservo.write(60);              // tell servo to go to position in variable 'pos' 
    topservo.write(1500); 
    delay(100);myservo.write(80);              // tell servo to go to position in variable 'pos' 
    topservo.write(1500); 
    delay(100);myservo.write(100);              // tell servo to go to position in variable 'pos' 
    topservo.write(1500); 
    delay(100);myservo.write(120);              // tell servo to go to position in variable 'pos' satvikliving@gmail.com
    topservo.write(120); 
    delay(100);myservo.write(60);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);delay(100);myservo.write(140);              // tell servo to go to position in variable 'pos' 
    topservo.write(18);delay(100);myservo.write(160);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);delay(100);myservo.write(180);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);delay(100);myservo.write(160);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);delay(100);myservo.write(140);              // tell servo to go to position in variable 'pos' 
    topservo.write(440);delay(100);myservo.write(120);              // tell servo to go to position in variable 'pos'
    topservo.write(120);delay(100);myservo.write(100);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);delay(100);myservo.write(80);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);delay(100);myservo.write(60);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);delay(100);myservo.write(40);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);delay(100);myservo.write(20);              // tell servo to go to position in variable 'pos' 
    topservo.write(120); delay(100);myservo.write(0);              // tell servo to go to position in variable 'pos' 
    topservo.write(120);
  
       
}    
