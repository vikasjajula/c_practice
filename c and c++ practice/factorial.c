#include<stdio.h>
void main()
{
	int fact=1;
    int  n;
	printf("enter any number\n");
	scanf("%d",&n);
	while(n>=1)
	{
		fact=fact*n;
		n--;
	}
	printf("the factorial of number %d is : %d",n,fact);
}
