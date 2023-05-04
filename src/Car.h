//
// Created by the-weakest on 4/27/23.
//

#ifndef CAR_H
#define CAR_H




class Car
{
public:
    void back()
    {
        setup();
        digitalWrite(RightAhead_pin,1);
        digitalWrite(RightBack_pin,0);
        digitalWrite(LeftAhead_pin,1);
        digitalWrite(LeftBack_pin,0);
    }
    void right()
    {
        setup();
        digitalWrite(RightAhead_pin,0);
        digitalWrite(RightBack_pin,1);
        digitalWrite(LeftAhead_pin,1);
        digitalWrite(LeftBack_pin,0);
    }
    void front()
    {
        setup();
        digitalWrite(RightAhead_pin,0);
        digitalWrite(RightBack_pin,1);
        digitalWrite(LeftAhead_pin,0);
        digitalWrite(LeftBack_pin,1);
    }
    void stop()
    {
        setup();
        digitalWrite(RightAhead_pin,0);
        digitalWrite(RightBack_pin,0);
        digitalWrite(LeftAhead_pin,0);
        digitalWrite(LeftBack_pin,0);
    }
    void left()
    {
        setup();
        digitalWrite(RightAhead_pin,1);
        digitalWrite(RightBack_pin,0);
        digitalWrite(LeftAhead_pin,0);
        digitalWrite(LeftBack_pin,1);
    }
private:
    int enab_pin[4]={21,22,23,24};
    int inx_pin[4]={29,3,4,5};
    int RightAhead_pin = inx_pin[0];
    int RightBack_pin = inx_pin[1];
    int LeftAhead_pin = inx_pin[2];
    int LeftBack_pin = inx_pin[3];
    void setup()
    {
        wiringPiSetup();
        for(int i=0;i<4;i++) {
            pinMode(enab_pin[i], OUTPUT);
            digitalWrite(enab_pin[i],1);
        }
        for(int i=0;i<4;i++) {
            pinMode(inx_pin[i], OUTPUT);
            digitalWrite(inx_pin[i],0);

        }
    }
};

#endif //CAR_H