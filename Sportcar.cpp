#include "Sportcar.h"

int Sportcar::countSportcars = 0;

Sportcar::Sportcar(){
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = new int;
    std::cout<<"Sportcar()"<<std::endl;
    countSportcars++;
}

Sportcar::Sportcar(int VIN_Sportcar){
    fuel = "Premium Gasoline";
    body = "Coupe";
    drivetrain = "AWD";
    hp = 330;
    options = "full";
    VIN = &VIN_Sportcar;
    std::cout<<"Sportcar(<VIN>)"<<std::endl;
    countSportcars++;
}

Sportcar::Sportcar(const Sportcar &obj){
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = new int(*obj.VIN);
    countSportcars++;
}

Sportcar::Sportcar(Sportcar &&obj){
    std::cout<<"Sportcar move constructor"<<std::endl;
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = obj.VIN;
    obj.VIN = nullptr;
    countSportcars++;
}

Sportcar &Sportcar::operator=(const Sportcar &obj){
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

Sportcar &Sportcar::operator=(Sportcar &&obj){
    std::cout<<"Sportcar move assignment operator"<<std::endl;
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

Sportcar::~Sportcar(){
    countSportcars--;
    VIN = NULL;
    delete VIN;
    std::cout<<"~Sportcar()"<<std::endl;
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