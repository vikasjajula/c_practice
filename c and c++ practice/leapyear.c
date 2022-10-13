#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the year\n");
	scanf("%d",&n);
	printf("the leap years from 0 to %d are\n",n);
	for(i=0;i<n;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		printf("%d,",i);
	}
}
