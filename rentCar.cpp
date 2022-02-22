#include "rentCar.h"

rentCar::rentCar() : rentObj()
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
}

rentCar::~rentCar()
{

}

int rentCar::rent()
{
    if (accessible)
    {
        accessible = false;
        description = "Object rented";
        rentTimeActual = 0;
        rentTimeLeft = 1;
        std::cout << "Rented " << type << '\n'
            << "Time left: " << timeLeft() << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Operation is impossible to proceed, " << type
            << "already rented!" << std::endl;
        return -1;
    }
}



int rentCar::checkFuel()
{
    return fuel;
}

void rentCar::returnObj()
{
    accessible = true;
    std::cout << "Car returned, some stuff made in background" << std::endl;
}
void rentCar::getInfo()
{
    std::cout << "Type: " << type << '\n'
        << "Description: " << description << '\n'
        << "Accessible: " << accessible << std::endl;
    if (!accessible)
    {
        std::cout << "Time left: " << rentTimeLeft << std::endl;
        std::cout << "Fuel: " << fuel << std::endl;
    }
}

void rentCar::editData()
{
    std::cout << "Car edit data" << std::endl;
}