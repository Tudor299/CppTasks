#pragma once
#include "Vehicle.h"
#include <iostream>

class Motorbike:Vehicle{
public:
    Motorbike();
    Motorbike(int VIN_Moto);
    ~Motorbike();
    void getFuel();
    void getBody();
    void getDrivetrain();
    void getHp();
    void getOptions();
    void getVIN();
};