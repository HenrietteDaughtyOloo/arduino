# include <Servo.h>

Servo myServo;// declare servo object
int potpin = A0;//potentiometer connected to A0. Not set up coz is an analog
int val ; //A variable

void setup(){ myServo.attach(9);
			}
void loop(){val = analogRead(potpin);
			val = map(val,0,1023,0,180);
           myServo.write(val);
            delay(15);
           }