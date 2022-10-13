#include<stdio.h>
int main()
{
	int i,j,a[100],k,temp;
	printf("enter the size of array\n");
	scanf("%d",&k);
	printf("enter the elements of the array\n");
	for(i=0;i<k;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the elements after bubble sort:\n");
		for(i=0;i<k;i++)
		{
			printf("%d\n",a[i]);
		}
}
