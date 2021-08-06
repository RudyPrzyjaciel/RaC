#include "rentObj.h"

int rentObj::checkTimeLeft()
{
    return  rentTimeLeft;
}

int rentObj::checkTimeSpent()
{
    return rentTimeActual;
}

void rentObj::addTime(int time)
{
    rentTimeLeft += time;
}

void rentObj::returnObj()
{
    std::cout << "Object returned, some stuff made in background" << std::endl;
}


int rentCar::checkFuel()
{
    return fuel;
}

void rentCar::returnObj()
{
    std::cout << "Car returned, some stuff made in background" << std::endl;
}