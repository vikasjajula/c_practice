#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char follow[10],ch,c,prod[10][10];
int i,j,count,n;
int FOLLOW(char);
int FIRST(char);
int main()
{
	int m;
	printf("enter the number of productions\n");
	scanf("%d",&count);
	printf("enter the productions\n");
	for(i=0;i<count;i++)
	scanf("%s%c",prod[i]);
	while(1)
	{
	printf("enter the character to find follow\n");
	scanf("%c",&c);
	n=0;
	FOLLOW(c);
	printf("FOLLOW(%c)={ ",c);
	for(i=0;i<len(follow);i++)
	printf("%c ",follow[i]);
	printf("\n enter 0 to exit\n");
	scanf("%d",m);
	if(m==0)
	break;
    }
    return 0;
}
int FOLLOW(char ch)
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
					else if(islower(prod[i][j+1]))
					follow[n++]=prod[i][j+1];
					else
					FIRST(prod[i][j+1]);
				}
			}
		}
return 0;	
}
int FIRST(char ch)
{
	int k;
	for(k=0;k<count;k++)
	{
		if(prod[k][0]==ch)
		{
			if(islower(prod[k][2]))
			{
				follow[n++]=prod[i][2];
			}
			else if(prod[k][2]=='$')
			{
				FOLLOW(prod[i][0]);
			}
			else
			FIRST(prod[k][2]);
		}
	}
}
