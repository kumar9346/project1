#include<stdio.h>
#include<unistd.h>
#include<string.h>
void main()
{
	int fd[2],ret;
	pid_t pid;
	char wbuf[100],rbuf[100];
	printf("enter the messages\n");
	scanf("%[^\n]s",wbuf);
	ret=pipe(fd);
	pid=fork();
	if(pid>0)
	{
		close(fd[0]);
		ret=write(fd[1],wbuf,strlen(wbuf));
		wbuf[ret]='\0';
		printf("parent->%s\n",wbuf);
	}
	else if(pid==0)
	{
		close(fd[1]);
		ret=read(fd[0],rbuf,100);
		rbuf[ret]='\0';
		printf("child->%s\n",rbuf);
	}
}
