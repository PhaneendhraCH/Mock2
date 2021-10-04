combined : main.o scan_print.o access_element.o pattern_print.o even_print.o binaryST.o
	   gcc main.c scan_print.c access_element.c pattern_print.c even_print.c binaryST.c -o combined

scan_print.o:  scan_print.c
		gcc -c scan_print.c
		
access_element.o: access_element.c
		   gcc -c access_element.c

pattern_print.o : pattern_print.c
		   gcc -c pattern_print.c
even_print.o: even_print.c
		gcc -c even_print.c
binaryST.o : binaryST.c
	      gcc -c  binaryST.c
clean:
	rm -f *.o
	rm -f combined
