#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(){
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = new int;
    std::cout<<"Vehicle()"<<std::endl;
}

Vehicle::Vehicle(const Vehicle &obj){
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = new int(*obj.VIN);
}

Vehicle &Vehicle::operator=(const Vehicle &obj){
    std::cout<<"operator="<<std::endl;
    if(this != &obj){
        fuel = obj.fuel;
        body = obj.body;
        drivetrain = obj.drivetrain;
        hp = obj.hp;
        options = obj.options;
        VIN = NULL;
        delete VIN;
        VIN = new int(*obj.VIN);
    }
    return *this;
}

Vehicle::~Vehicle(){
    VIN = NULL;
    delete VIN;
    std::cout<<"~Vehicle()"<<std::endl;
}