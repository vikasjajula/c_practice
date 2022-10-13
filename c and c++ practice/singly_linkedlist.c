#include<stdio.h>
void main()
{
	
//insert the node at the begining of the linked list
struct node *insert_at_the_begginging(struct node *head,int data){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->link=head;
	head=temp;
}
//insert the node at end of linked list
struct node* insert_atthe_last(struct node *head,int data)
{   
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	temp->link=NULL;
	p=head;
	if(P)
	{
	while(p->link!=NULL)
	{
	 p=p->link;	
	}
	p-link=temp;
    }
    else  
    head=temp;
    return head;	
}

//delete a node from the singly linked list
struct node *del(struct node *head,int data)
{
	struct node *temp,*p;
	if(head==NULL)
	{
		printf("the list is empty/n");
		return head;
	}
	p=head;
	while(p->link!=NUll)
	{
		if(p->link->info==data)// checking the data of the next node so that we can link the node next to deleting node
		{
		 temp=p->link;
		 p->link=temp->link;
		 free(temp);
		 return head;	
		}
		p=p->link;
	}
	printf("element %d not found\n",data);
	return head;
}
}
