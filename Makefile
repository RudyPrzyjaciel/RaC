RAC: main.o rentObj.o rentCar.o rentSession.o
	g++ main.o rentObj.o rentCar.o -o RAC

rentSession:
	g++ -c rentSession.cpp

rentCar.o: rentCar.cpp
	g++ -c rentCar.cpp

rentObj.o: rentObj.cpp
	g++ -c rentObj.cpp

main.o: main.cpp
	g++ -c main.cpp
