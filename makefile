main: driver.o
	g++ driver.o -o main

driver.o: memory.h driver.cpp
	g++ -c driver.cpp


clean:
	rm main driver.o
