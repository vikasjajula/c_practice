#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n=0,count;
char prod[10][10],first[10];
void FIRST(char);
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
	while(flag==1)
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
		printf("enter 0 to exit\n");
		scanf("%d",&flag);
		if(flag==0)
		break;
	}
	return 0;
}
void FIRST(char c)
{
	int j;
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
}
