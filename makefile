CXXFLAGS = -O3 -std=c++17 -Wno-deprecated-declarations
main: main.o
	g++ $(CXXFLAGS) -o prog main.cpp
clean:
	- rm *.o 
	- rm prog
