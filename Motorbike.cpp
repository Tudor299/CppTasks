#include "Motorbike.h"

int Motorbike::count = 0;

Motorbike::Motorbike(){
    count++;
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = NULL;
    std::cout<<"Motorbike()"<<std::endl;
}

Motorbike::Motorbike(int VIN_Moto){
    ++count;
    if(count < 2){
        fuel = "Gasoline";
        body = "Motorcycle";
        drivetrain = "RWD";
        hp = 200;
        options = "sport";
        VIN = &VIN_Moto;
        std::cout<<"Motorbike(<VIN>)"<<std::endl;
        }
    else
        {
        std::cout<<"You can't create more than one object of this class!"<<std::endl;
        return;
        }
}

Motorbike::~Motorbike(){
    --count;
    std::cout<<"~Motorbike(<VIN>)"<<std::endl;
}

void Motorbike::getFuel(){
    std::cout<<fuel<<std::endl;
}

void Motorbike::getBody(){
    std::cout<<body<<std::endl;
}

void Motorbike::getDrivetrain(){
    std::cout<<drivetrain<<std::endl;
}

void Motorbike::getHp(){
    std::cout<<hp<<std::endl;
}

void Motorbike::getOptions(){
    std::cout<<options<<std::endl;
}

void Motorbike::getVIN(){
    std::cout<<*VIN<<std::endl;
}