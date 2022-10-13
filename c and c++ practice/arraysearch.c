#include<stdio.h>
void main()
{
	int arr[30],n,s,i,count=0;
	printf("enter number of elemets in array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter any number\n");
		scanf("%d",&arr[i]);
	}
		printf("enter the element to be found\n");
		scanf("%d",&s);
		for(i=0;i<n;i++)
		{
			if(arr[i]==s)
			{
				printf("enter element is found at : %d",i);
				count=1;
				break;
			}
		}
		if(count==0)
		{
		printf("element not found\n");	
		}
}
