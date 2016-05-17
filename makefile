main: main.o HugeInt.o
	g++ -o main main.o HugeInt.o
main.o:main.cpp HugeInt.h
	g++ -c main.cpp
HugeInt.o:HugeInt.cpp HugeInt.h
	g++ -c HugeInt.cpp

clean:
	rm main.o HugeInt.o
