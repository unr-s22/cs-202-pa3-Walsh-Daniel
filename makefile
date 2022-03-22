pa3: main.o Account.o Money.o
	g++ -std=c++11 main.o Account.o Money.o -o pa3

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

Account.o: Account.cpp Account.h
	g++ -c -std=c++11 Account.cpp

Money.o: Money.cpp Money.h
	g++ -c -std=c++11 Money.cpp

clean:
	rm *.o

run:
	./pa3