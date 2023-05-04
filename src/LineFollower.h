//
// Created by the-weakest on 5/2/23.
//

#ifndef RASPBERRYCAR_LINEFOLLOWER_H
#define RASPBERRYCAR_LINEFOLLOWER_H

#include "Car.h"
#include "i2csensor.h"

class LineFollower
{
public:
    void run()
    {
        Car car;
        i2csensor line(0x78);
        int reg = 0x01;
        int data;
        int s[4];
        while(true)
        {
            data = line.readData(reg);
            s[0] = data & 1;
            s[1] = (data>>1) & 1;
            s[2] = (data>>2) & 1;
            s[3] = (data>>3) & 1;
            if(s[0] && s[3]) {
                car.stop();
                car.back();
                delay(100);
                car.stop();
                delay(1000);
            }
            else if((!s[0])&&(!s[3])) {
                car.front();
                delay(1);
            }
            else if(s[0]&&(!s[3])) {
                car.left();
                delay(30);
            }
            else {
                car.right();
                delay(30);
            }
            car.stop();
            delay(5);
        }
    }
};

#endif //RASPBERRYCAR_LINEFOLLOWER_H
