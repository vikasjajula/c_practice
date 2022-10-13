#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		 j=1;
		while(j<=n-i)
			{
				printf(" ");
				j++;
			}
			while(j<=n)
			{
			printf("*");
			j++;
		    }
	printf("\n");
	}
}
