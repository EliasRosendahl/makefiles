objects = main.o add.o
gtest = -L/usr/lib/libgtest.a -L/usr/libgtest_main.a

add: $(objects)
	g++ -o adder $(objects)

main.o: main.cpp
	g++ -c main.cpp

add.o: add.cpp
	g++ -c add.cpp

tests: tests.cpp libgtest.a libgtest_main.a
	g++ -pthread -o tests tests.cpp libgtest.a libgtest_main.a add.o

clean:
	rm tests adder *.o
