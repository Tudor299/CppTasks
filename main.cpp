#include <iostream>
#include "Sportcar.h"
#include "Lorry.h"
#include "Motorbike.h"

int main(){
    int VIN_sportcar1 = 123456, VIN_truck1 = 123789, VIN_truck2 = 654321, VIN_moto1 = 456789, VIN_moto2 = 987654, bikes=0;
    Sportcar Audi(VIN_sportcar1);
    Lorry Scania(VIN_truck1);
    Lorry Iveco(VIN_truck2);
    Motorbike Ducati(VIN_moto1);
    Motorbike Yamaha(VIN_moto2);
    Motorbike Honda(VIN_moto2);
    return 0;
}