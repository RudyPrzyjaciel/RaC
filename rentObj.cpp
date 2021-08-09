#include "rentObj.h"

rentObj::rentObj()
{
    accessible = true;
    rentTimeLeft = 0;
    rentTimeActual = 0;
    type = "Object";
    description = "Object avaible to rent";
    specialData = "Nothing special here";
};

int rentObj::TimeLeft()
{
    return  rentTimeLeft;
}

int rentObj::TimeSpent()
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

void rentObj::getInfo()
{
    std::cout   << "Type: " << type << '\n' 
                << "Description: " << description << '\n'
                << "Accessible: " << accessible << std::endl;
}

rentCar::rentCar()
{
    accessible = true;
    rentTimeLeft = 0;
    rentTimeActual = 0;
    type = "Car";
    brand = "Brand";
    model = "Model";
    description = "Car avaible to rent";
    specialData = "Nothing special about this car";
    fuelAtRent = 100;
    fuel = 100;
};

int rentCar::checkFuel()
{
    return fuel;
}

void rentCar::returnObj()
{
    std::cout << "Car returned, some stuff made in background" << std::endl;
}
void rentCar::getInfo()
{
    rentObj::getInfo();
    std::cout << "Brand: " << brand << std::endl;
}
