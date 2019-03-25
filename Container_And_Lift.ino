#include <Arduino.h>

int MotorA1 = 3, MotorA2 = 4, MotorB1 = 5, MotorB2 = 6, MotorC1 = 7, MotorC2 = 8;
int MA_Delaytime = 7200,MB_Delaytime=2800;
void setup() {
    pinMode(MotorA1, OUTPUT);
    pinMode(MotorA2, OUTPUT);
    pinMode(MotorB1, OUTPUT);
    pinMode(MotorB2, OUTPUT);
    pinMode(MotorC1, OUTPUT);
    pinMode(MotorC2, OUTPUT);

}

void loop() {
    //To control the container push the goods to the car.
    digitalWrite(MotorA1,HIGH);
    digitalWrite(MotorA2,LOW);
    delay(MA_Delaytime);
    digitalWrite(MotorA1,LOW);
    digitalWrite(MotorA2,HIGH);
    delay(MA_Delaytime);
    digitalWrite(MotorA2,LOW);

    //To control the container push the goods from a car to another container.
    digitalWrite(MotorB1,HIGH);
    digitalWrite(MotorB2,LOW);
    delay(MB_Delaytime);
    digitalWrite(MotorB1,LOW);
    digitalWrite(MotorB2,HIGH);
    delay(MB_Delaytime);
    digitalWrite(MotorB2,LOW);

    //To control the lift go to the second floor.
    //TODO:Control the lift go to the second floor

}