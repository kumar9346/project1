#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<sys/types.h>
void main()
{
	DIR *fd;
	struct dirent *p;
	char str[12];
//	printf("enter directory");
//	scanf("%s",str);
	fd=opendir(".");
	if(fd==NULL)
	{
		printf("fail to open directory\n");
		exit(-1);
	}
	while(p=readdir(fd))
		printf("%s\n",p->d_name);
}
