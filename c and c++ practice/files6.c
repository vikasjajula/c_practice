#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp ,*fn;
	char ch;
	fp=fopen("E:targetfile.txt","a");
	printf("enter the data to write in to file\n");
	while((ch=fgetchar())!='*')
	{
		fputc(ch,fp);
	}
	fclose(fp);
	fp=fopen("E:targetfile.txt","r");
	printf("contents of the file\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	fn=fopen("E:merg.txt","w");
	fp=fopen("E:testfile.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fn);
	}
	fp=fopen("E:targetfile.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fn);
	}	
}
