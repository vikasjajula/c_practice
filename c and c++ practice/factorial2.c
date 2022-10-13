#include<stdio.h>
void main()
{
	int x,fact,k;
	float y,sum;
	sum=0.0f;
	for(x=1;x<7;x++)
	{
		fact=1,k=x;
		while(x>=1)
		{
			fact=fact*x;
			x--;
		}
		printf("%d!=%d\n",k,fact);
		y=k/fact;
		sum=sum+y;
		x=k;
		printf("%d\n",k);
	}
		printf("the sum of the expression is : %f",sum);
}
