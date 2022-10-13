#include<stdio.h>
void main()
{
	int num,i=0,k;
	printf("enter any number");
	scanf("%d",&num);
	int arr[30];	
	while(num!=0)
	{
		arr[i]=num%2;
		i++;
		num=num/2;		
	}
	
	for(k=i-1;k>=0;k--)
	{
		printf("%d",arr[k]);
	}
}
