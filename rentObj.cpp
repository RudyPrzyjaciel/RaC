#include "rentObj.h"

rentObj::rentObj()
{
    accessible = true;
    rentTimeLeft = 0;
    rentTimeActual = 0;
    pricePerHour = 0;
    type = "Object";
    description = "Object avaible to rent";
    specialData = "Nothing special here";
};

int rentObj::timeLeft()
{
    return  rentTimeLeft;
}

int rentObj::timeSpent()
{
    return rentTimeActual;
}

void rentObj::addTime(int* timePointer)
{
    int time = *timePointer;
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
    if (!accessible)
    {
        std::cout << "Time left: " << rentTimeLeft << std::endl;
    }
}

int rentObj::rent()
{
    if (rentObj::accessible)
    {
        rentObj::accessible = false;
        rentObj::description = "Object rented";
        rentObj::rentTimeActual = 0;
        rentObj::rentTimeLeft = 1;
        std::cout   << "Rented " << rentObj::type << '\n'
                    << "Time left: " << rentObj::timeLeft() << std::endl;
        return 0;
    }
    else
    {
        std::cout   << "Operation is impossible to proceed, " << rentObj::type
                    << "already rented!" << std::endl;
        return -1;
    }
}

void rentObj::editData()
{
    std::cout << "Data edit method" << std::endl;
}

//
//rentCar::rentCar()
//{
//    accessible = true;
//    rentTimeLeft = 0;
//    rentTimeActual = 0;
//    type = "Car";
//    brand = "Brand";
//    model = "Model";
//    description = "Car avaible to rent";
//    specialData = "Nothing special about this car";
//    fuelAtRent = 100;
//    fuel = 100;
//};
//
//int rentCar::checkFuel()
//{
//    return fuel;
//}
//
//void rentCar::returnObj()
//{
//    std::cout << "Car returned, some stuff made in background" << std::endl;
//}
//void rentCar::getInfo()
//{
//    std::cout << "Type: " << rentCar::type << '\n'
//        << "Description: " << rentCar::description << '\n'
//        << "Accessible: " << rentCar::accessible << std::endl;
//    if (!accessible)
//    {
//        std::cout << "Time left: " << rentCar::rentTimeLeft << std::endl;
//        std::cout << "Fuel: " << rentCar::fuel << std::endl;
//    }
//}
