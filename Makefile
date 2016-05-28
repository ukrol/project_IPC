all: program1 program2 skrypt

program1: program1.c
	gcc program1.c -o program1

program2: program2.c
	gcc program2.c -o program2

skrypt: skrypt.bash
	./skrypt.bash

clean:
	rm -f *.o
