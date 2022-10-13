#include<stdio.h>
struct node
{
	struct node *prev;
	struct node *next;
	int info;
};
void main()
{
	// in doubly linked list first previous pointer is null as no previous node to it
  //	struct node *insert_node_at_beggining_or_last(NULL,5);
  	//printf("%d",temp->info);
struct node *isert_node_at_last(struct node *head,int data)
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	temp->next=NULL;
	temp->prev=NULL;
	// ******************insert at last************
	p=head;
	if(p)
	{
		while(p->next!=NULL)
		{
		 p=p->next;
		}
		p->next=temp;
		temp->prev=p;
	}
	else
	 head=temp;
	 return head;
	 //*****************insert at begining**********
	 if(head)
	 {
	 	head->prev=temp;
	 	temp->next=head;
	 	head=temp;
	 }
	 else
	   head=temp;
	 return head;  
}

// ************insert the node after the given node***************
x=6; //info of the node after which new node has to be inserted
P=head;
if(p)
{
	while(p->info==x)
	{
		p=p->link;
	}
    temp->next=p->next;
    temp->prev=p;
    if(p->next!=NULL)
      p->next->prev=temp;
    p->next=temp;	
}
else
 head=temp;
 return head;
 // ************Deleting a node from the doubly linked list************
     // here we need not to create a new node
  if(head==NULL) //no elements
  {
  printf("the list is empty\n");
  return head;
  }
  if(head->next==NULL) //only one element
    {
    	if(head->info==data)
    	 head=NULL;
    	return head;
	}
	temp=head->next;
	while(temp->next!=NULL)
	{
		if(temp->info==data)
		{
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			free(temp);
			return head;
		}
		temp=temp->next;
	}
	// Deletion of last node
	if(temp->info==data)
	{
		temp->prev->next=NULL;
		free(temp);
		return head;
	}
  
}

