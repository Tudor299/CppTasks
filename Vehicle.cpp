#include "Vehicle.h"
#include <iostream>

int Vehicle::count = 0;

Vehicle::Vehicle(int VIN_Vehicle){
    count ++;
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