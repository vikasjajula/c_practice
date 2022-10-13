#include<stdio.h>
void main()
{
	int *arr[5],i,a;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a);
		arr[i]=&a;
	}
	for(i=0;i<5;i++)
	{
		printf("%d,",*(arr[i]));
	}
}
