#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(){
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = NULL;
    std::cout<<"Vehicle()"<<std::endl;
}

Vehicle::Vehicle(int VIN_Vehicle){
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = &VIN_Vehicle;
    std::cout<<"Vehicle()"<<std::endl;
}

Vehicle::~Vehicle(){
    std::cout<<"~Vehicle()"<<std::endl;
}