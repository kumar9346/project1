#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void main(int argc,char *argv[])
{
	int i;
	if(argc<2||argc>2)
		printf("enter valid number of inputs\n");
	i=open(argv[1],O_CREAT|O_TRUNC,0660);
	if(i>0)
		printf("file created successfully\n");
	else
		printf("file is not created\n");
}
