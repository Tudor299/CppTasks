#pragma once
#include "Vehicle.h"

class Lorry:Vehicle{
protected:
    static int countLorries;
public:
    Lorry();
    Lorry(int VIN_Lorry);
    Lorry(const Lorry &obj);
    Lorry(Lorry &&obj);
    Lorry & operator=(const Lorry &obj);
    Lorry & operator=(Lorry &&obj);
    ~Lorry();
    void getFuel() const;
    void getBody() const;
    void getDrivetrain() const;
    void getHp() const;
    void getOptions() const;
    void getVIN() const;
};