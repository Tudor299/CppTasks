#pragma once
#include <iostream>

class Vehicle{
    std::string fuel;
    std::string body;
    std::string drivetrain;
    int hp;
    std::string options;
    int *VIN;
    static int count;
public:
    Vehicle(int VIN_Vehicle);
    ~Vehicle();
    virtual void getFuel() = 0;
    virtual void getBody() = 0;
    virtual void gerDrivetrain() = 0;
    virtual int getHp() = 0;
    virtual void getOptions() = 0;
    virtual void getVIN() = 0;
};