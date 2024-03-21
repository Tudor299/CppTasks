#pragma once
#include "Vehicle.h"
#include <iostream>

class Motorbike:Vehicle{
    static int count;
public:
    Motorbike();
    Motorbike(int VIN_Moto);
    Motorbike(const Motorbike &obj);
    Motorbike(Motorbike &&obj);
    Motorbike & operator=(const Motorbike &obj);
    Motorbike & operator=(Motorbike &&obj);
    ~Motorbike();
    void getFuel() const;
    void getBody() const;
    void getDrivetrain() const;
    void getHp() const;
    void getOptions() const;
    void getVIN() const;
};