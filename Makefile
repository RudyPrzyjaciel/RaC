RAC: main.o rentObj.o
	g++ main.o rentObj.o -o RAC

rentObj.o: rentObj.cpp
	g++ -c rentObj.cpp

main.o: main.cpp
	g++ -c main.cpp
