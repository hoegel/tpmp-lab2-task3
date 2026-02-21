#Makefile for airplane project

build: obj/main.o  obj/airplane.o
	gcc -o bin/main obj/main.o obj/airplane.o

run: bin/main
	bin/main

clean:
	rm -f obj/*.o bin/main

obj/main.o: src/main.c
	gcc -o obj/main.o -c src/main.c

obj/airplane.o: src/airplane.c
	gcc -o obj/airplane.o -c src/airplane.c
