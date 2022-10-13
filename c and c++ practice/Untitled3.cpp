#include<stdio.h>
int i=0,j=5;
void print(int n)
{  
if(n==0)
return;
else{
	printf("%d\n",--j);
	printf("**");
	print(--n);
	printf(" \n %d",n);
}	
}
int main()
{
	print(5);
}
