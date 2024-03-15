SHELL := bash
CXX = g++
CXXFLAGS = -g

run: main
	./main.out

main: clean Book.o main.o
	$(CXX) $(CXXFLAGS) Book.o main.o main.out

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp

Book.o:
	$(CXX) $(CXXFLAGS) -c Bool.cpp

clean:
	rm -f *.o main.out	