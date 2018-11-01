using namespace std;
#include<iostream>
#include<cstdlib>
struct node
{
	int data;
	node *next;
};
int print(node *ptr)
{
	while(ptr!=NULL) 
	{
		cout<<" "<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	struct node* start=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	start  = (node*)malloc(sizeof(node)); 
    second = (node*)malloc(sizeof(node));
    third  = (node*)malloc(sizeof(node));    
    start->data=13;
    start->next=second;
    second->data=12;
    second->next=third;
    third->data=14;
    third->next=NULL;
    print(start);
    
}

