#include<stdio.h>
int power(int,int);
int  main()
{
	int a,b,p;
	printf("eter two numbers \n");
	scanf("%d%d",&a,&b);
	p=power(a,b);
	printf("the value of power of b to the a is a: %d",p);
}
int power( int a,int b)
{
	int value=1,i;
	for(i=0;i<b;i++)
	{
		value=value*a;
	}
	return value;
}
