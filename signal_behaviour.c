#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void sighandler(int signo);
void main()
{
	signal(3,sighandler);
	while(1)
	{
		printf("kk\t");
	//	sleep(1);
	}
}
void sighandler(int signo)
{
	printf("recieved signal->%d\n",signo);
}
