#include<stdio.h>
void display(int *);
void main()
{
	int *arr[5],i,a;
	printf("enter the 5 elements(integer type)\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a);
		arr[i]=&a;
		printf("%d",*(arr[i]));
	}
	display(arr[0]);
}
void display(int *k)
{
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		sum=sum+ *(k+i);
	}
	printf("sum of the elements is : %d\n",sum);
}
