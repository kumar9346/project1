/*program for print two threads simultaneously by using mutex */
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread1_fn(void *ptr);
void *thread2_fn(void *ptr);
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex1=PTHREAD_MUTEX_INITIALIZER;
void main()
{
	pthread_t t1,t2;
	void *ptr;
	pthread_create(&t1,NULL,thread1_fn,NULL);
	pthread_create(&t2,NULL,thread2_fn,NULL);
	pthread_join(t1,&ptr);
	pthread_join(t2,&ptr);
}
void *thread1_fn(void *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		pthread_mutex_lock(&mutex);
		printf("thread1_fn is executed\n");
		pthread_mutex_unlock(&mutex1);
		sleep(1);
	}
}
void *thread2_fn(void *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		pthread_mutex_lock(&mutex1);
		printf("thread2_fn is executed\n");
		pthread_mutex_unlock(&mutex);
		sleep(1);
	}
}	
