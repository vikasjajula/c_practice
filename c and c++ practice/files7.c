#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *fp,*ft;
	char ch,ct;
	fp=fopen("E:testfile.txt","r");
	if(fp=NULL)
	{
	printf("the testfile couldn't open\n");
	fclose(fp);
    }
    ft=fopen("E:copyfile.txt","w");
    if(ft==NULL)
    {
    	printf("copyfile couldn'y open\n");
    	fclose(ft);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,ft);
	}	
}
