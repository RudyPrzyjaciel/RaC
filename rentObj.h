#pragma once

#include <iostream>
#include <string>


class rentObj
{
protected:
    bool accessible;
    int rentTimeLeft;
    int rentTimeActual;
    int pricePerHour;
    std::string type;
    std::string description;
    std::string specialData;

public:
    rentObj();
    int timeLeft();
    int timeSpent();
    int rent();
    void addTime(int*);
    void returnObj();
    void editData();
    void getInfo();
};
//
//class rentCar : public rentObj
//{
//protected:
//    std::string brand;
//    std::string model;
//    int fuelAtRent;
//    int fuel;
//public:
//    rentCar();
//    int checkFuel();
//    void editData();
//    void returnObj();
//    void getInfo();
//};

// class rentInterface
// {
// public:

// };