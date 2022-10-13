#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("E:targetfile.txt","r+");
	printf("CONTENT OF THE FILE\n");
    while((ch=fgetc(fp))!=EOF)
    {
    printf("%c",ch);	
	}
	rewind
	(fp);
	printf("enter the data to enter in the file\n");
	while((ch=fgetchar())!='*')
	{
		fputc(ch,fp);
	}
	fclose(fp);
}
