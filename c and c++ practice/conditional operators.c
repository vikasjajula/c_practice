#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a , b , c;
	int max, min;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	max= a>b ? (a>c ? a : c) : (b>c ? b : c);
	min=a<b ? (a<c ? a : c) : (b<c ? b : c);
	printf("maximum among three : %d\n", max);
	printf("minumun among three : %d\n", min);
	return 0;
}
