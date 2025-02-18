SHELL := bash
CXX = g++
CXXFLAGS = -g

run: main
	./main.out < input1.txt > output1.txt
	./main.out < input2.txt > output2.txt

main: clean main.o
	$(CXX) $(CXXFLAGS) main.o -o main.out

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f *.o main.out 