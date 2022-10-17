#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
void main(int argc,char* argv[])
{
	int fs,ft,i,j;
	char buf[100],buf1[100];
	if(argc!=3)
	{
		printf("improper number of arguments\n");
		exit(0);
	}
	fs=open(argv[1],O_RDWR);
	if(fs<0)
	{
		printf("cannot open a file\n");
		exit(1);
	}
	i=read(fs,buf,100);
	buf[i]='\0';
	printf("file1-%s\n",buf);
	ft=open(argv[2],O_RDWR);
	if(ft<0)
	{
		printf("cannot open a file\n");
		exit(1);
	}
	j=read(ft,buf1,100);
	buf1[j]='\0';
	printf("file2-%s\n",buf1);
	write(ft,buf,strlen(buf));
	write(fs,buf1,strlen(buf1));
	close(fs);
	close(ft);
}
