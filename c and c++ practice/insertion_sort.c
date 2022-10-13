#include<stdio.h>
void main()
{
	int arr[5];
	int i,j;
	printf("enter 5 values of array\n");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<4;i++)// no of iterations
	{
		int pos=i;
		for( j=i+1;j<5;j++)// no  of  comparitions in an iteration
		{
			if(arr[pos]>arr[j])
			{
				pos=j;
			}
		}
		int temp=arr[pos];
		arr[pos]=arr[i];
		arr[i]=temp;
	}
	for(i=0;i<5;i++)
	printf("%d\n",arr[i]);
}
