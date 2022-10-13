#include<stdio.h>
void main()
{
	int n,a,b,i=0,value=1;
	printf("enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	while(i<b)
	{
		value=value*a;
		i++;
	}
	printf("the value of a to the power b is : %d",value);
}
