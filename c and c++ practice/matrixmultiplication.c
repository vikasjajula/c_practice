#include<stdio.h>
int main()
{
	int a,b,c,d,i,j,k,arr1[10][10],arr2[10][10],mult[10][10],sum=0;
	printf("enter no of rows and coulumns for first matrix \n");
	scanf("%d %d",&a,&b);
	printf("enter no of rows and columns of second matrix\n");
	scanf("%d%d",&c,&d);
	if(b!=c)
	{
	printf("the multiplication of two matrix is not possible");	
	}
	else
	{
	printf("enter the elements of matrix 1\n");
	for(i=0;i<a;i++)
	{
	for(j=0;j<b;j++)
	scanf("%d",&arr1[i][j]);
}
	printf("enter the elements of matrix 2\n");
	for(i=0;i<c;i++)
	{
	for(j=0;j<d;j++)
	scanf("%d",&arr2[i][j]);
}
printf("the multiplication matrix of the given two matrices is: \n ");
	for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			for(k=0;k<c;k++)
			{
				sum=sum+arr1[i][k]*arr2[k][j];
			}
			mult[i][j]=sum;
			sum=0;
			printf("%d  ",mult[i][j]);
		}
	printf("\n");
	}		
}
return 0;
}
