#include "header.h"

int (*ptr)(char *,char*);

void even_check(int num){
	if (!(num & 1)){
		char a[100],b[100];
		fgets(a,100,stdin);
		fgets(b,100,stdin);
		ptr = strcmp(a,b);
		if(*ptr==1){
			printf("a>b\n");}
		else if(*ptr == -1){
			printf("a<b");
		}
		else if (*ptr == 0){
			printf("Same\n");
		}
		return;
	}
	else
		return;
}


int strcmp(char *a,char *b){
	if ((*a==*b) && *a & *b){
		a++,b++;
		strcmp(a,b);
	}
	else if(*a>*b){
		return 1;
	}
	else if(*a<*b){
		return -1;
	}
	else{
	return 0;
	}

}
