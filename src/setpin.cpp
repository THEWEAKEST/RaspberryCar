#include<iostream>
#include<cstdio>
#include<wiringPi.h>
int main()
{
    wiringPiSetup();
    int mode;
    std::cin>>mode;
    for(int i=0;i<=40;i++)
    {
        pinMode(i, mode);
        digitalWrite(i,0);
    }
    return 0;
}