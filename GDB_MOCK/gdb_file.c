/*

If u run this piece of code in linux, mention -lm (to include math library package)

gcc gdb_file.c -lm
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n ,int size);
int sum(int* arr, int n);
int main()
{
    int arr[] = {1,12,3,45,67,89,90,91,17,19};
    int flag =0, *p=NULL;
    int count_ele = sizeof(arr)/sizeof(int);
    int temp_arr[count_ele];
    p = temp_arr;
    printf("element count is %d", count_ele);
    for(int i =0 ; i <count_ele; i++){
          flag = isPrime(arr[i],count_ele);
           printf("\nprime numbers in the array is  %d-%d",arr[i], flag);
          if(flag)
          {
              temp_arr[i]= arr[i];
         }else 
         temp_arr[i] =0;
          
    }
    int total = sum(p,count_ele);
      printf("\nsum of prime numbers in the array is  %d\n", total);
      return 0;
}
int isPrime(int x, int count_ele)
{
  if(x < 2) {
    return 0;
  } else if(x == 2) {
    return 1;
  } else if(x % 2 == 0) {
    return 0;
  }
 for(int i=3; i<=sqrt(x); i+=2) {
    if(x % i == 0) {
      return 0;
    }
  }
    return 1;  
}
int sum(int* arr, int n)
{
      int i;
  int total = 0;
  for(i=0; i<n; i++) {
    total += arr[i];
  }
  return total;
}
