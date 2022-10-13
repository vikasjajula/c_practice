#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char follow[10],ch1,c,prod[10][10];
int i,j,count,n;
void FOLLOW(char);
void FIRST(char);
void main()
{
	int m,i;
	printf("enter the number of productions\n");
	scanf("%d",&count);
	printf("enter the productions\n");
	for(i=0;i<count;i++)
	scanf("%s%c",prod[i],&ch1);
	while(1)
	{
	printf("enter the character to find follow\n");
	scanf("%c",&c);
	n=0;
	FOLLOW(c);
	printf("%s",follow);
	printf("FOLLOW(%c)={ ",c);
	for(i=0;i<strlen(follow);i++)
	printf("%c ",follow[i]);
	printf("}\n");
	printf("\n enter 0 to exit\n");
	scanf("%d",m);
	if(m==0)
	break;
    }
}
void FOLLOW(char ch)
{
	if(ch==prod[0][0])
	follow[n++]='$';
		for(i=0;i<count;i++)
		{
			for(j=2;j<strlen(prod[i]);j++)
			{
				if(prod[i][j]==ch)
				{
					if((prod[i][j+1]='\0')&&(ch!=prod[i][0]))
					FOLLOW(prod[i][j+1]);
					if(islower(prod[i][j+1]))
					follow[n++]=prod[i][j+1];
					if(isupper(prod[i][j+1]))
					FIRST(prod[i][j+1]);
				}
			}
		}	
}
void FIRST(char ch)
{
	int k;
	for(k=0;k<count;k++)
	{
		if(prod[k][0]==ch)
		{
			if(isupper(prod[k][2]))
			{
				FIRST(prod[k][2]);
			}
			if(islower(prod[k][2]))
			{
				follow[n++]=prod[i][2];
			}
			if(prod[k][2]=='$')
			{
				FOLLOW(prod[i][0]);
			}
		
		}
	}
}
