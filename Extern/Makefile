
main: file3.o file4.o
	gcc file3.c file4.c -Wall -o main

file4.o : file4.c
	  gcc -c -Wall file4.c

clean :
	rm -f *.o
	rm -f main
