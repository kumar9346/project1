/* implementation of own kill command */
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<string.h>
#include<stdlib.h>
void own_kill( );
int main(int argc,char *argv[])
{
	int x,y;
	if(argc>3||argc<3)
	{
		printf("invalid inputs so please enter valid number of inputs\n");
		return -1;
	}
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	own_kill(x,y);
}
void own_kill(int x,int y)
{
	kill(x,y);
	printf("successfully killed that process\n");
}
