#pragma once
#include "Lorry.h"
#include "Motorbike.h"
#include "Sportcar.h"

class Car:Lorry, Motorbike, Sportcar{
public:
    static void staticGetLorries();
    static void staticGetMotos();
    static void staticGetSportcars();
};