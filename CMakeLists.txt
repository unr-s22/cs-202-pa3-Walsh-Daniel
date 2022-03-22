all: pa3

pa3: main.o Money.o
    g++ -o pa3 main.o Money.o

money.o: Money.h Money.cpp
    g++ -c Money.cpp

main.o: main.cpp Money.h
    g++ -c main.cpp

clean:
    rm *.o