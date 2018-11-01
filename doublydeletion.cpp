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
	printf("Enter the value which node you want to delete");
	p=pp=np=start;
	int val;
	scanf("%d",&val);
	while(p->data!=val)
	{
		pp=p;
		p=np;
		np=np->next;
	}
	np->prev=p;
	pp->next=np;
	p=start;
	printf("Elements in the linked list are : ");
	while(p->next!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
