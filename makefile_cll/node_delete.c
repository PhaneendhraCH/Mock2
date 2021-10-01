#include <stdio.h>
#include <stdlib.h>
#include "node_delete.h"
#include "struct_node.h"

struct node *new_head,*tmp,*new_head1,*head; //delete

void delete_odd(){

    //struct node *new_head,*tmp,*new_head1;
    
    new_head = head;
    while(new_head!=NULL){
        
        if((new_head->nested->pid)%2!=0){
            new_head = new_head->link;
        }
        else
            break;
    }

  head =  new_head;
  if (new_head == NULL){
        //printf("\nAll nodes deleted");
        return;
  }
  new_head1 = new_head;
  tmp = new_head1->link;
  
  while(tmp!=NULL){
      if(tmp==head)
            break;

    if ((tmp->nested->pid)%2!=0){
        new_head1->link = tmp->link;
    }
    else{
        new_head1 = new_head1->link;
    }
    tmp = tmp->link;
  }
}

#if 0
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
#endif
