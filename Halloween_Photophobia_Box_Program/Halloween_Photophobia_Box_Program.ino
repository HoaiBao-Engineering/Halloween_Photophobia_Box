//=================================================//
//   HoaiBao's Engineering                         //
//   https://www.youtube.com/@hoaibao_engineering  //
//   https://github.com/HoaiBao-Engineering        //
//=================================================//

//HBE1 - Halloween Photophobia Box

#include <Servo.h>

#define lightMIN 50
#define lightMAX 200

int R;
int x;
int y;
int z;

Servo myservo;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  myservo.attach(3);   // Servo on pin D3
  myservo.write(170);  // Set position at 170 deg (Preset is 180 but running max 170deg)
}

void loop() {
  R = analogRead(A0);
  if (R < lightMIN) {
    y = 0;
  } else if (R > lightMAX) {
    y = 170;
  } else {
    x = map(R, lightMIN, lightMAX, 0, 170);
    y = (x / 10) * 10;
  }
  z = 255 - map(y, 0, 170, 0, 255);
  analogWrite(5, z);
  myservo.write(y);
  delay(500);
}

















