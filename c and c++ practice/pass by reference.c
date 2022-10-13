#include<stdio.h>
void main()
{
	int x=44,y=33;
	display(&x,&y);
}
 display(int*a, int*b)
{
	int k=*a;
	int l=*b;
	printf("x value =%d ,y value = %d",k,l);
}
