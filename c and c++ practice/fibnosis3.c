#include<stdio.h>
int a=0,b=1,n;
void fib(int a,int b,int n)
{
	if(n==0)
	return;
	else{
		printf("%d",a);
		fib(b,a+b,n-1);
	}
}
int main()
{
	printf("enter number of terms\n");
	scanf("%d",&n);
	fib(a,b,n);
}

