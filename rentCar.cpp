#include "rentCar.h"

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
    std::cout << "Type: " << rentCar::type << '\n'
        << "Description: " << rentCar::description << '\n'
        << "Accessible: " << rentCar::accessible << std::endl;
    if (!accessible)
    {
        std::cout << "Time left: " << rentCar::rentTimeLeft << std::endl;
        std::cout << "Fuel: " << rentCar::fuel << std::endl;
    }
}
