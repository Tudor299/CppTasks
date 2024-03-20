#include "Sportcar.h"

Sportcar::Sportcar(){
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = NULL;
    std::cout<<"Sportcar()"<<std::endl;
}

Sportcar::Sportcar(int VIN_Sportcar){
    fuel = "Premium Gasoline";
    body = "Coupe";
    drivetrain = "AWD";
    hp = 330;
    options = "full";
    VIN = &VIN_Sportcar;
    std::cout<<"Sportcar(<VIN>)"<<std::endl;
}

Sportcar::~Sportcar(){
    std::cout<<"~Sportcar(<VIN>)"<<std::endl;
}

void Sportcar::getFuel() const{
    std::cout<<fuel<<std::endl;
}

void Sportcar::getBody() const{
    std::cout<<body<<std::endl;
}

void Sportcar::getDrivetrain() const{
    std::cout<<drivetrain<<std::endl;
}

void Sportcar::getHp() const{
    std::cout<<hp<<std::endl;
}

void Sportcar::getOptions() const{
    std::cout<<options<<std::endl;
}

void Sportcar::getVIN() const{
    std::cout<<*VIN<<std::endl;
}