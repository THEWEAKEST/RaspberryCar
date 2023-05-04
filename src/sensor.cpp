#include<iostream>
#include<cstdio>
#include "wiringPi.h"
const int sensor[4]={0,1,2,25};
int main()
{
    wiringPiSetup();
    for(int i=0;i<4;i++)
        pinMode(sensor[i],INPUT);
    int a;
    while(1)
    {
        a=0;
        for(int i=0;i<4;i++) {
            a<<=1;
            a += digitalRead(sensor[i]);
        }
        std::cout<<a<<std::endl;
    }
    return 0;
}
