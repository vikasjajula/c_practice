#include<stdio.h>
void main()
{
		struct book
	{
		char book_name[50];
		int pages;
		float price;
	};
	struct book bk1;
	printf("enter the name,pages,price of the book\n ");
	scanf("%s",&bk1.book_name);
	scanf("%d",&bk1.pages);
	scanf("%f",&bk1.price);
	printf("book name=%s\n pages = %d \n price=%f \n",
	
	bk1.book_name ,bk1.pages , bk1.price);
}
