#pragma once
#include <iostream>

class Vehicle{
protected:
    std::string fuel;
    std::string body;
    std::string drivetrain;
    int hp;
    std::string options;
    int *VIN;
public:
    Vehicle();
    Vehicle(int VIN_Vehicle);
    ~Vehicle();
    virtual void getFuel() = 0;
    virtual void getBody() = 0;
    virtual void getDrivetrain() = 0;
    virtual void getHp() = 0;
    virtual void getOptions() = 0;
    virtual void getVIN() = 0;
};