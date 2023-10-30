#include <Arduino.h>
#include <Servo.h>

Servo servo1;

int pinservo = 7;
int pulsomin = 520;  //520
int pulsomax = 2500; //2500

void setup()
{
  Serial.begin(9600);
  servo1.attach(pinservo, pulsomin, pulsomax);
}

void loop()
{
  servo1.write(0);
  Serial.println("0°");
  delay(5000);
  servo1.write(33);
  Serial.println("33°");
  delay(5000);
}