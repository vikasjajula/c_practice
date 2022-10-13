#include<stdio.h>
int main()
{
	int N,x,y,i;
	scanf("%d",&N);
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=1;i<=N;i++)
	{
		if(i%x==0||i%y==0)
		{
		printf("%d,",i);	
		}
	}
}
		

