#include "Motorbike.h"

int Motorbike::count = 0;
int Motorbike::countMotos = 0;

Motorbike::Motorbike(){
    ++count;
    fuel = "unknown";
    body = "unknown";
    drivetrain = "unknown";
    hp = 0;
    options = "unknown";
    VIN = new int;
    std::cout<<"Motorbike()"<<std::endl;
    countMotos++;
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
        countMotos++;
        }
    else
        {
        std::cout<<"You can't create more than one object of this class!"<<std::endl;
        return;
        }
}

Motorbike::Motorbike(const Motorbike &obj){
    count++;
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = new int(*obj.VIN);
    countMotos++;
}

Motorbike::Motorbike(Motorbike &&obj){
    count++;
    std::cout<<"Motorbike move constructor"<<std::endl;
    fuel = obj.fuel;
    body = obj.body;
    drivetrain = obj.drivetrain;
    hp = obj.hp;
    options = obj.options;
    VIN = obj.VIN;
    obj.VIN = nullptr;
    countMotos++;
}

Motorbike &Motorbike::operator=(const Motorbike &obj){
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

Motorbike &Motorbike::operator=(Motorbike &&obj){
    std::cout<<"Motorbike move assignment operator"<<std::endl;
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

Motorbike::~Motorbike(){
    --count;
    countMotos--;
    VIN = NULL;
    delete VIN;
    std::cout<<"~Motorbike()"<<std::endl;
}

void Motorbike::getFuel() const{
    std::cout<<fuel<<std::endl;
}

void Motorbike::getBody() const{
    std::cout<<body<<std::endl;
}

void Motorbike::getDrivetrain() const{
    std::cout<<drivetrain<<std::endl;
}

void Motorbike::getHp() const{
    std::cout<<hp<<std::endl;
}

void Motorbike::getOptions() const{
    std::cout<<options<<std::endl;
}

void Motorbike::getVIN() const{
    std::cout<<*VIN<<std::endl;
}