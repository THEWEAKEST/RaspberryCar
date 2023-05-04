//
// Created by the-weakest on 5/2/23.
//
#include <iostream>
#include <wiringPiI2C.h>
#include <unistd.h>

class LineFollower {

    int address;
    int bus;
    int device;

public:

    LineFollower(int address, int bus = 1) {
        this->address = address;
        this->bus = bus;
        this->device = wiringPiI2CSetup(this->address);
    }

    int readData(int reg) {
        int value = wiringPiI2CReadReg8(this->device, reg);
        return value;
    }
};

int main() {

    int addr = 0x78;
    LineFollower line(addr);
    int reg = 0x01;

    while (true) {
        int data = line.readData(reg);
        std::cout << "Sensor1: " << (data & 0x01) << " Sensor2: " << ((data >> 1) & 0x01) << " Sensor3: " << ((data >> 2) & 0x01) << " Sensor4: " << ((data >> 3) & 0x01) << std::endl;
        usleep(500000);
    }

    return 0;
}
