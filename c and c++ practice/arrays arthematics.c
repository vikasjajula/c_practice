#include<stdio.h>
void main()
{
	int x,*p;
	int y, *q;
	p=&x;
	q=&y;
	printf("before incrementing p=%u , q=%u\n ",p,q);
	printf("after incrementing p=%u , q=%u \n",++p,++q);
}
