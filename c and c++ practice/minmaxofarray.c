#include<stdio.h>
int main()
{
	int arr[100],i,min,max,n;
	printf("enter the size of array");
	scanf("%d",&n);
    printf("enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
		printf("Max=%d\n",max);
		printf("Min=%d\n",min);
   }
