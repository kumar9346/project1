
/*program for print small and capital letters in threads simultaneously */
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread1_fn(void *ptr);
void *thread2_fn(void *ptr);
char str[32];
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex1=PTHREAD_MUTEX_INITIALIZER;
void main()
{
	pthread_t t1,t2;
	void *ptr;
	printf("enter any string:");
	gets(str);
	pthread_create(&t1,NULL,thread1_fn,NULL);
	pthread_create(&t2,NULL,thread2_fn,NULL);
	pthread_join(t1,&ptr);
	pthread_join(t2,&ptr);
}
void *thread1_fn(void *ptr)
{
	int i;
	printf("small letters of a string\n");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			printf("%c\t",str[i]);
		}
	}
	printf("\n");
}
void *thread2_fn(void *ptr)
{
	int i;
	printf("capital letters of a string\n");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			printf("%c\t",str[i]);
		}
	}
	printf("\n");
}	
