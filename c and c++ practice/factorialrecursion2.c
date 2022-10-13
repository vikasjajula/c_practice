#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[20];
	int i,n;
	printf("enter any number\n");
	scanf("%d",&n);
	int fact=n;
	int factorial(int x)
	{
		if(n!=0)
		{
			return x;
		fact=fact*factorial(n-1);
    	}
	}
	printf("the factorial of %d is : %d\n",n,fact);
}
