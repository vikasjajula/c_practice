#include<stdio.h>
int fib(int);
int fib(int n)
    {
	if(n==0){
		return 0;
  	}
	else if(n==1)
	return 1;
	else
	{
		return fib(n-2)+fib(n-1);
	}
   }
void main()
{   int i,n;
	printf("enter the number of terms\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",fib(i));
	}
	}


