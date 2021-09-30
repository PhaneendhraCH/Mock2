#include <stdio.h>
#include <stdlib.h>
#include "node_delete.h"
#include "struct_node.h"

struct node *odd,*temp,*append,*head;
void delete_odd(){

	//struct node *odd,*temp,*append;
	temp = head;
	while(temp!=NULL){
		if ((temp->nested->pid)%2!=0){
			//printf("%d",temp->nested->pid);
			append = temp->link;
			temp->link = append;
		}
		
		temp = temp->link;
	}
	free(append);
}
