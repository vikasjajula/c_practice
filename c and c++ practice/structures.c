#include<stdio.h>
void main()
{
	struct book
	{
		char book_name[50];
		int pages;
		float price;
	};
	struct book bk1 ={"python",555,45.32};
	struct book bk2,bk3;
	printf("the size of bkl=%d\n",sizeof(bk1));
	printf("the size of pages=%d\n",sizeof(bk1.pages));
	printf("the size of price=%d\n",sizeof(bk1.price));
	bk2=bk1;
	strcpy(bk3,bk1);
	bk3.book_name=bk1.book_name;
	bk3.pages=bk1.pages;
	bk3.price=bk1.price;
	printf("book name=%s\n",bk2.book_name);
	printf("pages=%d\n",bk2.pages);
	printf("price=%f\n",bk2.price);
	printf("pages=%d\n",bk3.pages);
	printf("price=%f\n",bk3.price);
}
