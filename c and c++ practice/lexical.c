#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n=0,count;
char prod[10][10],first[10];
int FIRST(char);
int main()
{
	int i,flag=1;
	char ch,c;
	printf("enter the number of productions\n");
	scanf("%d",&count);
	printf("enter %d productions\n",count);
	for(i=0;i<count;i++)
	{
	scanf("%s%c",prod[i],&ch);
    }  
	do
	{
		printf("enter the element to which you need to find follow\n");
		scanf("%c",&c);
		FIRST(c);
		printf("FIRST[%c]={",c);
		for(i=0;i<strlen(first);i++)
		{
			printf("%c ",first[i]);
		}
		printf("}");
		printf("enter 1 to exit\n");
		scanf("%d%c",&flag,&ch);
	}while(flag==1);
	return 0;
}
int FIRST(char c)
{
	int j;
	if(!(isupper(c)))
	first[n++]=c;
	for(j=0;j<count;j++)
	{
		if(prod[j][0]==c)
		{
			if(prod[j][2]=='$')
			first[n++]=='$';
			else if(islower(prod[j][2]))
				first[n++]=prod[j][2];
			else
			   FIRST(prod[j][2]);	
		}
	}
	n=0;
	return 0;
}
