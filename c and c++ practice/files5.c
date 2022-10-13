#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	int n;
	fp=fopen("E:targetfile.txt","r");
	printf("contents of the file\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	printf("\nenter the number of characters you wanted to skip :\n");
	scanf("%d",&n);
	fseek(fp,n,SEEK_SET);
	printf("\nCONTENTS OF THE FILE :\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	
}
