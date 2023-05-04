//
// Created by the-weakest on 5/2/23.
//

#ifndef RASPBERRYCAR_I2CSENSOR_H
#define RASPBERRYCAR_I2CSENSOR_H

#include <wiringPiI2C.h>
#include <unistd.h>

class i2csensor {
    int address;
    int bus;
    int device;
public:
    i2csensor(int address = 0x78, int bus = 1)
    {
        this->address = address;
        this->bus = bus;
        this->device = wiringPiI2CSetup(this->address);
    }

    int readData(int reg)
    {
        int value = wiringPiI2CReadReg8(this->device, reg);
        return value;
    }
};

/*
 Example:
 int addr = 0x78;
 i2csensor line(addr);
 int reg = 0x01;

 int data = line.readData(reg);
 std::cout<<data;
 */


#endif //RASPBERRYCAR_I2CSENSOR_H
