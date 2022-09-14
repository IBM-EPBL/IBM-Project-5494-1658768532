#include<Servo.h>
Servo s;
void setup()
{
pinMode(2, INPUT);
s.attach(12);
s.write(0);
}

void loop()
{
if(digitalRead(2)==HIGH)
{
s.write(90);
delay(5000);
s.write(0);
}
}
