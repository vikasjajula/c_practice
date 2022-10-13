#include<stdio.h>
int main()
{
int x,y;
printf("enter any two values\n");
scanf("%d%d",&x,&y);
printf("in main x=%d,y=%d\n",x,y);
swap(&x,&y);	
}
swap(int*p,int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("in swap x=%d,y=%d\n",*p,*q);
}
