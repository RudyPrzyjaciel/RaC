#include "main.h"
#include "rentObj.h"
#include "rentCar.h"

void spacer()
{
	std::cout << "------------------------------------------------------" << std::endl;
}

int main()
{
	rentObj obj1;
	obj1.getInfo();

	spacer();

	obj1.rent();

	spacer();

	int timeToAdd = 10;
	obj1.addTime(&timeToAdd);
	obj1.getInfo();

	spacer();

	rentCar car;

	car.getInfo();
	car.rent();
	spacer();
	car.addTime(&timeToAdd);
	car.getInfo();


	/*rentCar car1;
	rentCar car2;
	rentCar car3;
	rentCar car4;
	std::vector<rentCar> cars;

	cars.push_back(car1);
	cars.push_back(car2);
	cars.push_back(car3);
	cars.push_back(car4);


	obj1.getInfo();
	spacer();
	for (rentCar car : cars)
	{
		car.getInfo();
		spacer();
	}*/
}
