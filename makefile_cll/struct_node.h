struct node{
	 struct data{
		unsigned int pid,ppid;
		}*nested;
struct node *link; //CLL
};
//extern struct node *head,*currentnode;


extern struct node *head,*currentnode,*newnode; // insert

extern struct node *odd,*temp,*append,*head; //delete
