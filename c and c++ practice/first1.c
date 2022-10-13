#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count,n;
char prod[10][10],first[10];
int FIRST(char,int);
int main()
{
	int i;
	char ch,c;
	printf("enter the number of productions\n");
	scanf("%d",&count);
	printf("enter %d productions\n",count);
	for(i=0;i<count;i++)
	{
	scanf("%s%c",prod[i],&ch);
    }  
	while(1)
	{
		n=0;
		printf("enter the element or enter 0 to exit\n");
		scanf("%c",&c);
		if(c=='0')
		break;
		FIRST(c,n);
		printf("FIRST[%c]={",c);
		for(i=0;i<strlen(first);i++)
		{
			printf("%c ",first[i]);
		}
		printf("}");
	}
	return 0;
}
int FIRST(char c,int n)
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
			   FIRST(prod[j][2],n);	
		}
	}
	return 0;
}
