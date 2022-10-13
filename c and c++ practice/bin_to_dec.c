#include<stdio.h>
#include<math.h>
void main()
{
	int bin,value=0,rem,k=0;
	printf("enter any binary number");
	scanf("%d",&bin);
	while(bin>0)
	{
		rem=bin%10;
		bin=bin/10;
		value=value+pow(2,k)*rem;
		k++;
	}
	printf("the value of binary number is : %d",value);	
}
