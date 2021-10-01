struct node{
	 struct data{
		unsigned int pid,ppid;
		}*nested;
struct node *link; //CLL
};
//extern struct node *head,*currentnode;


extern struct node *head,*currentnode,*newnode; // insert

extern struct node *new_head,*tmp,*new_head1; //delete
