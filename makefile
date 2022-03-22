all: pa3 

pa3: main.o money.o
    g++ -o pa3 main.o money.o 

money.o: money.h money.cpp
    g++ -c money.cpp

main.o: main.cpp money.h
    g++ -c main.cpp

clean: 
    rm *.o