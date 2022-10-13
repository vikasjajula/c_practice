#include<stdio.h>
#include<stdlib.h>
void push(struct node*,int);
void display(struct node*);
	struct node{
		int info;
		struct node *next;
	           };
    int x , k;
    typedef struct node* JV;
	JV head=NULL;
   void push(JV head,int data)
	{
	JV temp;
	temp=(JV)malloc(sizeof(struct node));
	temp->info=data;
	temp->next=head;
	head=temp;
	
	//printf("%d",head);
    }
//************************
   void display(JV head)
   {
   	if(head==NULL)
   	printf("the stack is empty\n");
   	JV temp=head;
   while(temp!=NULL)
   {
   	printf("%d,",temp->info);  
   }}

	void main()
	{
	printf("enter the no of elements in stack \n");
	scanf("%d",&k);
	int count=0;
	while(count<k)
	{
    printf("enter the data\n");
    scanf("%d",&x);
	push(head,x);
	count++;
   }
   display(head);	
}
//***********************
	
