#include "main.h"
#include "rentObj.h"

void spacer()
{
	std::cout << "------------------------------------------------------" << std::endl;
}

int main()
{

	std::cout << "Rent A Car main.cpp file." << std::endl;
	rentObj obj1;
	rentCar car1;
	rentCar car2;
	rentCar car3;
	rentCar car4;
	std::vector<rentCar> cars; 

	cars.push_back(car1);
	cars.push_back(car2);
	cars.push_back(car3);
	cars.push_back(car4);

	for (rentCar car : cars)
	{
		car.getInfo();
		spacer();
	}
}
