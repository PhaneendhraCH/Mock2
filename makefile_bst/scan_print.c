#include "header.h"

void scan_print(struct node *temp){
//scanning
for (int i =0;i<4;i++){
	for(int j = 0;j<2;j++){
		for(int k=0;k<2;k++){
			temp->arr[i][j][k] = rand();
			}
		}
	}

//print

for (int i =0;i<4;i++){
	for(int j = 0;j<2;j++){
		for(int k=0;k<2;k++){
			printf("%d ",temp->arr[i][j][k]);
			}
		}
	}
}
