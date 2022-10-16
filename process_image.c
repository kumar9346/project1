#include<stdio.h>
#include<unistd.h>
void main()
{
	int x;
	char *const argv[]={"ps",0};
	x=execvp("ls",argv);
	printf("%d\n",x);
	if(x<0)
		printf("fail to image replace\n");
}
