#include<iostream>
#include<wiringPi.h>
int main()
{
    wiringPiSetup();
    int PIN,situation;
    std::cin>>PIN>>situation;
    digitalWrite(PIN,situation);   // wPi
    return 0;
}