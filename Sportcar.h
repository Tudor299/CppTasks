#pragma once
#include "Vehicle.h"

class Sportcar:Vehicle{
protected:
    static int countSportcars;
public:
    Sportcar();
    Sportcar(int VIN_Sportcar);
    Sportcar(const Sportcar &obj);
    Sportcar(Sportcar &&obj);
    Sportcar & operator=(const Sportcar &obj);
    Sportcar & operator=(Sportcar &&obj);
    ~Sportcar();
    void getFuel() const;
    void getBody() const;
    void getDrivetrain() const;
    void getHp() const;
    void getOptions() const;
    void getVIN() const;
};