#pragma once
#include "Vehicle.h"
#include <iostream>

class Sportcar:Vehicle{
public:
    Sportcar();
    Sportcar(int VIN_Sportcar);
    Sportcar(const Sportcar &obj);
    Sportcar & operator=(const Sportcar &obj);
    ~Sportcar();
    void getFuel() const;
    void getBody() const;
    void getDrivetrain() const;
    void getHp() const;
    void getOptions() const;
    void getVIN() const;
};