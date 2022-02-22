#pragma once

#include "rentObj.h"
#include <iostream>
#include <string>



class rentCar : public rentObj
{
protected:
    std::string brand;
    std::string model;
    int fuelAtRent;
    int fuel;
public:
    rentCar();
    int checkFuel();
    void editData();
    void returnObj();
    void getInfo();
};
