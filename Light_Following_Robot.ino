#include<AFMotor.h>

#define L1 A0 
#define L2 A1
#define L3 A2

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup(){
  Serial.begin(9600);
  pinMode(L1, INPUT);
  pinMode(L2, INPUT);
  pinMode(L3, INPUT);
}

void loop(){
  int LSensor = digitalRead(L1);
  int MSensor = digitalRead(L2);
  int RSensor = digitalRead(L3);

  Serial.print("LSensor");
  Serial.println(LSensor);
  Serial.print("MSensor");
  Serial.println(MSensor);
  Serial.print("RSensor");
  Serial.println(RSensor);

  if((LSensor == 0) && (MSensor == 0) && (RSensor == 0)){
    motor1.setSpeed(120);
    motor1.run(FORWARD);
    motor2.setSpeed(120);
    motor2.run(FORWARD);
    motor3.setSpeed(120);
    motor3.run(FORWARD);
    motor4.setSpeed(120);
    motor4.run(FORWARD);
  }

    else if((LSensor == 0) && (MSensor == 1) && (RSensor == 0)){
    motor1.setSpeed(150);
    motor1.run(FORWARD);
    motor2.setSpeed(150);
    motor2.run(FORWARD);
    motor3.setSpeed(150);
    motor3.run(FORWARD);
    motor4.setSpeed(150);
    motor4.run(FORWARD);
  }

  else if ((LSensor == 1) && (MSensor == 0) && (RSensor == 0)){
    motor1.setSpeed(150);
    motor1.run(FORWARD);
    motor2.setSpeed(150);
    motor2.run(FORWARD);
    motor3.setSpeed(150);
    motor3.run(BACKWARD);
    motor4.setSpeed(150);
    motor4.run(BACKWARD);
  }

  else if((LSensor == 0) && (MSensor == 0) && (RSensor == 1)){
    motor1.setSpeed(150);
    motor1.run(BACKWARD);
    motor2.setSpeed(150);
    motor2.run(BACKWARD);
    motor3.setSpeed(150);
    motor3.run(FORWARD);
    motor4.setSpeed(150);
    motor4.run(FORWARD);
  }

  else if((LSensor == 1) && (MSensor == 1) && (RSensor == 1)){
    motor1.setSpeed(0);
    motor1.run(RELEASE);
    motor2.setSpeed(0);
    motor2.run(RELEASE);
    motor3.setSpeed(0);
    motor3.run(RELEASE);
    motor4.setSpeed(0);
    motor4.run(RELEASE);
  }
}