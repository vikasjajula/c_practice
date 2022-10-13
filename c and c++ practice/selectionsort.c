#include<stdio.h>
int main()
{
	int i,j,a[100],k,temp;
	printf("enter the size of array\n");
	scanf("%d",&k);
	printf("enter the elements of the array\n");
	for(i=0;i<k;i++)
	scanf("%d",&a[i]);
	printf("the elements after selection sort is:\n");
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
	     	}
		}
		printf("%d\n",a[i]);
	}
}
