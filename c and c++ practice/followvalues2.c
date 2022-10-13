#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void follow(char);
void first(char);
char prod[10][10],Follow[10];
int count,n=0,p,i,j=0,k;
int main()
{
	int choice;
	char c,ch;
	printf("enter the no of productions\n");
	scanf("%d",&count);
	printf("enter %d productions\n",count);
	for(i=0;i<count;i++)
	scanf("%s%c",&prod[i],&ch);
	do
	{
		n=0;
		printf("enter the element:");
		scanf("%c",&c);
		follow(c);
		printf("FOLLOW(%c)={",c);
		for(i=0;i<n;i++)
		printf("%c",Follow[i]);
		printf("}\n");
		printf("enter 1 to continue(0/1)\n");
		scanf("%d",&choice);
		
	}while(choice==1);	
}
void follow(char c)
{
 if(prod[0][0]==c)
 Follow[n++]='$';
 for(i=0;i<count;i++)
 {
 	for(j=2;j<count;j++)
 	{
 	 if(prod[i][j]==c)	
 	 {
 	 	if(prod[i][j+1]!='\0')
 	 	first(prod[i][j+1]);
 	 	if(prod[i][j+1]=='\0'&&prod[i][0]!=c)
 	 	follow(prod[i][0]);
	  }
	 }
 }		
}
void first(char c)
{
	for(k=0;k<count;k++)
	{
		if(prod[k][0]==c)
		{
			if(islower(prod[k][2]))
			Follow[n++]=prod[k][2];
			else if(prod[k][2]=='$')
			follow(prod[i][0]);
			else
			first(prod[k][2]);
		}
	}
	
}


