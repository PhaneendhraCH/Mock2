#include <stdio.h>
#include <stdlib.h>
#include "node_insert.h"
#include "node_delete.h"
#include "struct_node.h"

//struct node *head,*currentnode,*newnode; // insert

//struct node *odd,*temp,*append,*head; //delete

void display(){
	struct node *temp;
	temp = head;
	 if (temp==NULL){
        printf("\nNo nodes");
        return;
    }
	while(temp!=NULL){
		printf("%d ",temp->nested->pid);
	
		if(temp->link == head)
			break;
		temp = temp->link;
	}
	printf("\n");
}

int main(){

	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	display();
	delete_odd();
	display();
	
}




