#include<stdio.h>
 int f;
 void main()
{
	int n,x;
	printf("enter any number\n");
	scanf("%d",&n);
	x=fact(n);
	printf("factorial of number=%d",x);
	int fact(x)
	{	
	f=x*fact(x-1);
	return f;	
	}
	printf("factorial:%d",f);

}
