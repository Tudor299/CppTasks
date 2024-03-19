#pragma once
#include "Vehicle.h"
#include <iostream>

class Sportcar:Vehicle{
public:
    Sportcar();
    Sportcar(int VIN_Sportcar);
    ~Sportcar();
    void getFuel();
    void getBody();
    void getDrivetrain();
    void getHp();
    void getOptions();
    void getVIN();
};