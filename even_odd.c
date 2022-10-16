#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread1_fn(void *ptr);
void *thread2_fn(void *ptr);
int num;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex1=PTHREAD_MUTEX_INITIALIZER;
void main()
{
	pthread_t t1,t2;
	void *ptr;
	printf("enter the number in range:");
	scanf("%d",&num);
	pthread_create(&t1,NULL,thread1_fn,NULL);
	pthread_create(&t2,NULL,thread2_fn,NULL);
	pthread_join(t1,&ptr);
	pthread_join(t2,&ptr);
}
void *thread1_fn(void *ptr)
{
	int i;
	printf("even numbers\n");
	for(i=0;i<=num;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}
void *thread2_fn(void *ptr)
{
	int i;
	printf("odd numbers\n");
	for(i=0;i<=num;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}	
