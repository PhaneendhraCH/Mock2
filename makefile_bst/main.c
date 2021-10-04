#include "header.h"

int main(){
int var;
struct node *temp;
temp = malloc(sizeof(struct node));

scan_print(temp);
var = element_value(temp);
printf("\nvalue returned :%d\n",var);
pattern(var);
even_check(var);
odd_check(var);
return 0;
}
