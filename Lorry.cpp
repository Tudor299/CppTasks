#include "Lorry.h"

Lorry::Lorry(){
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = NULL;
    std::cout<<"Lorry()"<<std::endl;
}

Lorry::Lorry(int VIN_Lorry){
    fuel = "Diesel";
    body = "Truck head";
    drivetrain = "RWD";
    hp = 600;
    options = "premium";
    VIN = &VIN_Lorry;
    std::cout<<"Lorry(<VIN>)"<<std::endl;
}

Lorry::~Lorry(){
    std::cout<<"~Lorry(<VIN>)"<<std::endl;
}

void Lorry::getFuel() const{
    std::cout<<fuel<<std::endl;
}

void Lorry::getBody() const{
    std::cout<<body<<std::endl;
}

void Lorry::getDrivetrain() const{
    std::cout<<drivetrain<<std::endl;
}

void Lorry::getHp() const{
    std::cout<<hp<<std::endl;
}

void Lorry::getOptions() const{
    std::cout<<options<<std::endl;
}

void Lorry::getVIN() const{
    std::cout<<*VIN<<std::endl;
}