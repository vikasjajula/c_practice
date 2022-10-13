#include<stdio.h>
void main()
{
	int num,count=0,i;
	printf("enter any number\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
	if(num%i==0)
	count++;	
	}
	if(count>1)
	printf("the given number is not a prime\n");
	else 
	printf("the given number is prime\n");
	
}
