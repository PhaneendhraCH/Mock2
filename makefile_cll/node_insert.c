#include <stdio.h>
#include <stdlib.h>
#include "node_insert.h"
#include "struct_node.h"

struct node *newnode,*currentnode,*head;


void insert(int num){

//extern struct node *newnode;

newnode = malloc(sizeof(struct node));
newnode->nested = malloc(sizeof(struct data)); 
newnode->nested->pid = num;

if (head == NULL){
	head = newnode;
	currentnode =newnode;
	}

else{
	currentnode->link = newnode;
	newnode->link = head; /*check*/
	currentnode = newnode;
   }
}
