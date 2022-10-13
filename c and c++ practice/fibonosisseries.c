#include<stdio.h>
void main()
{
int t1,t2,t3,n,i;
t1=0;
t2=1;
printf("enter number of terms in fibonosis series\n");
scanf("%d",&n);
printf("%d,%d,",t1,t2);
for(i=2;i<n;i++)
{
	t3=t1+t2;
	t1=t2;
	t2=t3;
	printf("%d,",t3);	
}
}
