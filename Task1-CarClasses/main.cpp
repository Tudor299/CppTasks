#include <iostream>
#include "Sportcar.h"
#include "Lorry.h"
#include "Motorbike.h"
#include "Car.h"

int main(){
    int bikes = 0, VIN_moto1 = 456789, VIN_moto2 = 987654, VIN_sportcar1 = 123456, VIN_truck1 = 123789, VIN_truck2 = 654321;
    Sportcar Audi(VIN_sportcar1);
    Audi.getVIN();
    Lorry Scania(VIN_truck1);
    Audi.getVIN();
    Scania.getVIN();
    Lorry Iveco(VIN_truck2);
    Audi.getVIN();
    Iveco.getVIN();
    Motorbike Ducati(VIN_moto1);
    Ducati.getVIN();
    Motorbike Yamaha(VIN_moto2);
    Yamaha.getVIN();
    Motorbike Honda(VIN_moto2);
    Honda.getVIN();
    Sportcar BMW(Audi);
    Audi.getVIN();
    Sportcar Mercedes;
    Mercedes = BMW;
    Audi.getVIN();
    Car::staticGetLorries();
    Car::staticGetMotos();
    Car::staticGetSportcars();
    return 0;
}