#include<stdio.h>
void main()
{
	int num;
	long fact;
	printf("enter the number\n");
	scanf("%d",&num);
	fact=factorial(num);
	printf("the factorial of %d is : %d",num,fact);
}
int factorial(int n)
{
    int f;
    if(n==0||n==1)
    return 1;
	return 	n*factorial(n-1);;
}
