combined: CLL.o node_insert.o node_delete.o
	   gcc CLL.c node_insert.c node_delete.c -o combined


node_insert.o : node_insert.c
		gcc -c node_insert.c 
		

node_delete.o : node_delete.c
		gcc -c node_delete.c 
		
clean :
	rm -f *.o
	rm -f combined
