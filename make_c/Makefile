objects = main.o function.o

hello: main.c $(objects)
	gcc -o hello $(objects)

main.o: main.c
	gcc -c main.c

function.o: function.c
	gcc -c function.c

clean:
	rm -f hello $(objects)
