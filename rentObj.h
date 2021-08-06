#pragma once

#include <iostream>
#include <string>

class rentObj
{
private:
    bool accesible;
    int rentTimeLeft;
    int rentTimeActual;
    std::string type;
    std::string description;
    std::string specialData;

public:
    int checkTimeLeft();
    int checkTimeSpent();
    void addTime(int);
    void returnObj();
    void editData();
};

class rentCar : public rentObj
{
protected:
    std::string brand;
    std::string model;
    int fuelAtRent;
    int fuel;
public:
    int checkFuel();
    void editData();
    void returnObj();
};