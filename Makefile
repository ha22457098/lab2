lab2: main.o Bmi.o
	g++ -o lab2 main.o Bmi.o

Bmi.o: Bmi.cpp Bmi.h
	g++ -c Bmi.cpp

main.o: main.cpp Bmi.h
	g++ -c main.cpp

