//=================================================//
//   HoaiBao's Engineering                         //
//   https://www.youtube.com/@hoaibao_engineering  //
//   https://github.com/HoaiBao-Engineering        //
//=================================================//

//HBE1 - Halloween Photophobia Box
//Job1: Set servo in down position at 180 deg
//Job2: Check Photoresistor value via Serial Monitor

//ATTETNTION!!!!!!!!!!!!!!!!!!!!
//DO NOT DO "Job1" AND "Job2" AT THE SAME TIME!
//YOU MUST UNPLUG USB CABLE FROM ARDUINO BEFORE POWER IT BY Li-BATTERY PACK!

#include <Servo.h>

Servo myservo;

int x;
int y;

void setup() {
  myservo.attach(3);   // Servo on pin D3
  myservo.write(180);  // Set position at 180 deg
  Serial.begin(9600);
}

void loop() {
  x = analogRead(A0);
  y = (x / 10) * 10; //Round up to 10
  Serial.println(y);  //Check Photoresistor value via Serial Monitor
  delay(300);
}






