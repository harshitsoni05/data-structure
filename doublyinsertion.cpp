#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
int main()
{
	int size,i;
	struct node *np,*p,*start,*pp;
	printf("how many elements do you want to enter in the doubly linked list?");
	scanf("%d",&size);
	p = (struct node*)malloc(sizeof(struct node));
	start=pp=p;
	for(i=0;i<size;i++)
	{
		pp=p;
		np=(struct node *)malloc(sizeof(struct node));
		p->next=np;
		p->prev=pp;
		scanf("%d",&p->data);
		p=p->next;	
	}
	p->next=NULL;
	printf("Enter the value after which you want to insert a node");
	p=start;
	int val;
	scanf("%d",&val);
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	while(p->data!=val)
	{
		p=p->next;
	}
	scanf("%d",&new_node->data);
	new_node->next=p->next;
	new_node->prev=p;
	p->next->prev=new_node;
	p->next=new_node;
	p=start;
	printf("Elements in the linked list are : ");
	while(p->next!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
