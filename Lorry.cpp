#include "Lorry.h"

Lorry::Lorry(){
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = new int;
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

Lorry::Lorry(const Lorry &obj){
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = new int(*obj.VIN);
}

Lorry::Lorry(Lorry &&obj){
    std::cout<<"Lorry move constructor"<<std::endl;
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = obj.VIN;
    obj.VIN = nullptr;
}

Lorry &Lorry::operator=(const Lorry &obj){
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

Lorry &Lorry::operator=(Lorry &&obj){
    std::cout<<"Lorry move assignment operator"<<std::endl;
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

Lorry::~Lorry(){
    VIN = NULL;
    delete VIN;
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