#include<iostream>
#include<wiringPi.h>
int main()
{

    wiringPiSetup();
    pinMode(2,OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT); // wPi
    digitalWrite(9,0);
    digitalWrite(10,0);
    while(1) {
        digitalWrite(1,1);
        digitalWrite(2,1);
        delay(100);
        digitalWrite(1,0);
        delay(100);
    }
}
