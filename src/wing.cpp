#include<iostream>
#include<wiringPi.h>
int main()
{
    wiringPiSetup();
    pinMode(18,OUTPUT);
    digitalWrite(18,1);
    while(1) ;
    return 0;
}
