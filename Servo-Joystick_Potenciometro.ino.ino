#include <Servo.h>
Servo servo;
void setup() {
servo.attach(2); // ervo en el pin 2
}
void loop() {
int val= analogRead(0); 
val=map(val,0,1023,0,180); 
servo.write(val); 
delay(15);
}