#include<stdio.h>
int main()
{
	int i,search,arr[100],s,mid;
	printf("enter the size of array\n");
	scanf("%d",&s);
	printf("enter the elements of array\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&search);
	mid=s/2;
	if(search<arr[mid] )
	{
		for(i=0;i<mid;i++)
		{
			if(arr[i]==search)
			{
				printf("the element is found at arr[%d]\n",++i);
			}
		}
	}
	else if(search > arr[mid])
	{
		for(i=mid;i<s;i++)
		{
		if(arr[i]==search)
		{
			printf("the element is found at  arr[%d]\n",++i);
		
		}
	    }
	}
	else if(search==arr[mid])
	{
		printf("the element is found at position %d\n",mid);
	}
	else
	{
		printf("the element is not found!\n");
	}
}
