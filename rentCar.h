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
    ~rentCar();
    int checkFuel();
    int rent() override;
    void editData() override;
    void returnObj() override;
    void getInfo() override;
};
