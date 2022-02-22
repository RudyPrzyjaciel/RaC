RAC: main.o rentObj.o rentSession.o
	g++ main.o rentObj.o -o RAC

rentSession:
	g++ -c rentSession.cpp

rentObj.o: rentObj.cpp
	g++ -c rentObj.cpp

rentCar.o: rentCar.cpp
	g++ -c rentCar.cpp

main.o: main.cpp
	g++ -c main.cpp
