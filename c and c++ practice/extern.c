#include<stdio.h>
 int i;
int main()
{
	increment();
	increment();
	decrement();
	decrement();
}
increment()
{
	i=i+1;
	printf("after increment i=%d",i);
}
decrement()
{
	i=i-1;
	printf("after decrement i=%d",i);
}
