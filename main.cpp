#include <iostream>
#include "Sportcar.h"
#include "Lorry.h"

int main(){
    int VIN_sportcar1 = 123456, VIN_truck1 = 123789, VIN_truck2 = 654321, VIN_moto1 = 456789, VIN_moto2 = 987654;
    Sportcar Audi(VIN_sportcar1);
    Lorry Scania(VIN_truck1);
    Lorry MAN(VIN_truck2);
    
    return 0;
}