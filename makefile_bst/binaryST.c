#include "header.h"

void odd_check(int num){
	struct tree *Tree;
	if (num & 1){
		for(int i=0;i<7;i++)
			bst(Tree);
		printf("Tree Inserted\n");
		return;
	}
	else{
		printf("Tree Not Inserted\n");
		return;
	}
}


void bst(struct tree *TreeTmp){
	TreeTmp = malloc(sizeof(struct tree));
	if(TreeTmp==NULL){
		TreeTmp->data = rand();
		TreeTmp->left = NULL;
		TreeTmp->right =NULL;}
	else{
		if (rand() < TreeTmp->data){
			bst(TreeTmp->left);
		}
		else if (rand() > TreeTmp->data){
			bst(TreeTmp->right);
		}
	}

}
