#include <stdio.h>
#include <stdlib.h>

struct node {
	int arr[4][3][2];
	
};

struct tree{
	int data;
	struct tree *left;
	struct tree *right;
};

void scan_print(struct node *);
int element_value(struct node *);
void pattern();
void even_check(int);
void odd_check(int);
