#pragma once
#include "Vehicle.h"
#include <iostream>

class Lorry:Vehicle{
public:
    Lorry();
    Lorry(int VIN_Lorry);
    ~Lorry();
    void getFuel();
    void getBody();
    void getDrivetrain();
    void getHp();
    void getOptions();
    void getVIN();
};