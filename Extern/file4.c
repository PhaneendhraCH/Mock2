#include <stdio.h>  
//even without including the header can be done if we create .o file combining file3.c and file4.c (gcc file3.c file4.c -o main)

void func(int num){
	printf("Value is %d\n",num);
}
