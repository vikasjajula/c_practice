#include<stdio.h>
void main()
{
	auto int k;
	static int i;// default value of static is 0 and it is within the block
	i++;
	printf(" i value : %d\n",i);
	k++;
	k++;
	printf("k value : %d\n",k);
}
