#include<stdio.h>
int main()
{
	int i,arr[100],s,k;
	printf("enter the size of array");
	scanf("%d",&k);
	printf("enter the elements of the array");
	for(i=0;i<k;i++)
	scanf("%d",&arr[i]);
	printf("enter the element to be searched");
	scanf("%d",&s);
	for(i=0;i<k;i++)
	{
		if(s==arr[i])
		{
			printf(" the element is found at position is %d\n",++i);
			break;
		}
	}
	if(i>k)
	{
			printf("the element is not found!\n");
		}
}

