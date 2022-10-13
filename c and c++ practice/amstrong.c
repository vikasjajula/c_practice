#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum=0,i,x,count=0;
	printf("Amstrong numbers between 1 and 500 are:\n");
	for(i=2;i<500;i++)
	{
		num=i;
		sum=0;
		count=0;
		while(num!=0)
		{
		 count=count+1;
		 num=num/10;	
		}
		num=i;
		 while(num!=0)
		 {
		 	x=num%10;
		 	sum=sum + pow(x,count);
		 	num=num/10;
		 }
		 if(sum==i)
		 {
		 	printf("%d\n",i);
		 }
		 	else
		 	continue;
		 
	}
	return 0;
}
