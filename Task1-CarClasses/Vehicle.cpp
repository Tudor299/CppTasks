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
    std::cout<<"Vehicle copy constructor"<<std::endl;
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = new int(*obj.VIN);
}

Vehicle::Vehicle(Vehicle &&obj){
    std::cout<<"Vehicle move constructor"<<std::endl;
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = obj.VIN;
    obj.VIN = nullptr;
}

Vehicle &Vehicle::operator=(const Vehicle &obj){
    std::cout<<"Vehicle copy assignment operator"<<std::endl;
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

Vehicle &Vehicle::operator=(Vehicle &&obj){
    std::cout<<"Vehicle move assignment operator"<<std::endl;
    if(this != &obj){
        fuel = obj.fuel;
        body = obj.body;
        drivetrain = obj.drivetrain;
        hp = obj.hp;
        options = obj.options;
        VIN = NULL;
        delete VIN;
        VIN = obj.VIN;
        obj.VIN = nullptr;
    }
    return *this;
}

Vehicle::~Vehicle(){
    VIN = NULL;
    delete VIN;
    std::cout<<"~Vehicle()"<<std::endl;
}