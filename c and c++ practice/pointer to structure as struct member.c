#include<stdio.h>
void main()
{
	struct S
	{
		int a;
		float b;
		struct S *ptr;             // self referential structre of structure 'S'........................
	};
	struct S s1={45,52.2};
	s1.ptr=&s1;
	printf("a=%d and b=%d",s1.ptr->a,s1.ptr->b); // acces through self referential structure.....................
}
