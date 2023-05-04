//
// Created by the-weakest on 4/27/23.
//

#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H
#include "ncurses.h"
#include "Car.h"





class RemoteControl
{
public:
    void drive()
    {
        Car firstCar;
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
    }

private:

};

#endif //RASPBERRYCAR_REMOTECONTROL_H