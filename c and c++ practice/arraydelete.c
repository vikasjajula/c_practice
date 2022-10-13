#include<stdio.h>
void main()
{
	int arr[30],n,s,i,count=0,j;
	printf("enter number of elemets in array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter any number\n");
		scanf("%d",&arr[i]);
	}
		printf("enter the element to be deleted\n");
		scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
		arr[i]=0;
		for(j=i;j<n;j++)
		{
			arr[j]=arr[j+1];
		}
    	}
    }
	arr[n-1]='\0';
	for(i=0;i<n-1;i++)
	{
		printf("arr[i]=%d\n",arr[i]);
	}
	
	
	}
