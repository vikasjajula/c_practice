#include<stdio.h>
void main()
{
	int arr[30][30],i,j,m,n,temp;
	printf("enter number of rows in a matrix\n");
	scanf("%d",&m);
	printf("enter number of columns in a matrix\n");
	scanf("%d",&n);
	printf("enter  %d matrix elements \n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&arr[i][j]);
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d  ",arr[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		temp=arr[i][j];
		arr[i][j]=arr[j][i];
		arr[j][i]=temp;
    	}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d  ",arr[j][i]);
		printf("\n");
	}
}
	
