#pragma once
#include "Vehicle.h"
#include <iostream>

class Lorry:Vehicle{
public:
    Lorry();
    Lorry(int VIN_Lorry);
    ~Lorry();
    void getFuel() const;
    void getBody() const;
    void getDrivetrain() const;
    void getHp() const;
    void getOptions() const;
    void getVIN() const;
};