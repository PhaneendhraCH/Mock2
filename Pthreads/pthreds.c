#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

unsigned int var=65;
int lock_value;

pthread_mutex_t *mutex;

void *my_thread1(void *ptr){

	lock_value = pthread_mutex_lock(&mutex);
	
	if (lock_value){
		printf("Lock Not Acquired \n");
		pthread_exit(NULL);	
	}

	int *p = (int*)ptr;
	do{
	if(var&1){
		printf("Thread(1) ID %ld %c \n",*p,var);
		var++;
	}
	else{
		pthread_mutex_unlock(&mutex);
		
	}
	}while(var<=90);
	
}

void *my_thread2(void *ptr){

	
	lock_value = pthread_mutex_lock(&mutex);
	
	if (lock_value){
		printf("Lock Not Acquired \n");
		//pthread_exit(NULL);	
	}

	int *p = (int*)ptr;
	do{
	if(!(var&1)){
		printf("Thread(2) ID %ld %c \n",*p,var);
		var++;
	}
	else{
		pthread_mutex_unlock(&mutex);
	}
	}while(var<=90);
}

int main(){

	pthread_t tid[2];
	int condition;
	
	pthread_create(&tid[0],NULL,&my_thread1,&tid[0]);
	pthread_create(&tid[1],NULL,my_thread2,&tid[1]);

	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	printf("\n");
	
	return 0;
}
