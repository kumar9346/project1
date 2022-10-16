#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/stat.h>
void main()
{
	int opt,x;
	char str[32];
	while(1)
	{
		printf("select the below option\n 0->exit\t1->create directory\t2->remove directory\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			case 1:printf("welcome to create directory\n");
			       printf("enter directory pathname:");
			       scanf("%s",str);
			       x=mkdir(str,0777);
			       if(x>=0)
				       printf("successfully directory created\n");
			       else
				       printf("creation of directory was failed\n");
			       break;
			case 2:printf("welcome to remove directory\n");
			       printf("enter the removing directory name:");
			       scanf("%s",str);
			       x=rmdir(str);
			       if(x>=0)
				       printf("successfully directory removed\n");
			       else
				       printf("directory is not present\n");
			       break;
			default:
			       printf("enter valid input\n");
			       break;
		}
	}
}
