#include<stdio.h>
void main()
{
	int rev,rem,n,temp;
	printf("enter any number\n");
	scanf("%d",&n);
	rev=0;
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	if(rev==temp)
	{
		printf("the given number is a palindrome\n");
	}
	else
	{
		printf("the given number is not a palindrome");
	}
}

