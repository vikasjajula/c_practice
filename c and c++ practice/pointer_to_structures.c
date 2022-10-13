#include<stdio.h>
void main()
{
	struct book
	{
		char name[30];
		char author[35];
		int pages;
	};
	struct book b1={"C","hameed",500};
	struct book *ptr;
	ptr=&b1;
	printf("\nbook '%s' by %s of %d pages\n",ptr->name,ptr->author,ptr->pages);
	struct pointer
	{
		int *point;
	};
	struct pointer *p;
	p->point=&b1.pages;
	printf("the pages of book is %d",*p->point);
}
