#include<stdio.h>
#include<string.h>
void main()
{
	int arr[200],i,k,j,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;i<n;j++)
		{
			if(j==i)
			continue;
			if(arr[i]==arr[j])
			{
				k=j;
				while(k<n)
				{
					arr[k]=arr[k+1];
					k++;
				}
				n--;
			}	
		}
	}
}
