objects = main.o add.o

calculator: $(objects)
	g++ -o calculator $(objects)

main.o: main.cpp
	g++ -c main.cpp

add.o: add.hpp add.cpp
	g++ -c add.cpp

clean:
	rm -f calculator  $(objects)
