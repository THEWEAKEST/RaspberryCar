#include<iostream>
#include<cstdio>
#include<wiringPi.h>
#include<ncurses.h>
#include "RemoteControl.h"
#include "LineFollower.h"


int main()
{
    /*
    int a;
    while(1) {
        std::cin>>a;
        switch(a)
        {
            case 0 : {firstCar.stop();break;}
            case 1 : {firstCar.front();break;}
            case 2 : {firstCar.back();break;}
            case 3 : {firstCar.left();break;}
            case 4 : {firstCar.right();break;}
        }
        if(a==-1)
            break;
    }
     */
    /*
    initscr();
    cbreak();
    noecho();
    int ch ;
    while(true)
    {
        ch = 10;
        ch = getch();
        switch(ch)
        {
            case 'w' : {firstCar.front();delay(50);break;}
            case 's' : {firstCar.back();delay(50);break;}
            case 'a' : {firstCar.left();delay(50);break;}
            case 'd' : {firstCar.right();delay(50);break;}
            case 'x' : {firstCar.stop();break;}
        }
        firstCar.stop();
        if(ch=='p')
            break;
    }
     */
    int a;
    std::cin>>a;
    if(a) {
        RemoteControl RC;
        RC.drive();
    }
    else
    {
        LineFollower lf;
        lf.run();
    }
    return 0;
}
