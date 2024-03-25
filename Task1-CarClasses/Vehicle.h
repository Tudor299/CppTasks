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
    Vehicle(const Vehicle &obj);
    Vehicle(Vehicle &&obj);
    Vehicle & operator=(const Vehicle &obj);
    Vehicle & operator=(Vehicle &&obj);
    ~Vehicle();
    virtual void getFuel() const = 0;
    virtual void getBody() const = 0;
    virtual void getDrivetrain() const = 0;
    virtual void getHp() const = 0;
    virtual void getOptions() const = 0;
    virtual void getVIN() const = 0;
};