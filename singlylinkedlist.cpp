using namespace std;
#include<iostream>
#include<conio.h>
#include<stdlib.h>
struct node				
{
	int data;
	struct node *next;
};
  int main()
  {
		node *temp,*p,*pp,*start;
		node *ptr,*pptr,*nptr;
		int i,size,exit,option,val,inopt;
		cout<<"Enter the size of linked list : ";
		cin>>size;
		cout<<"Enter the elements of linked list";
		pp=(node*)malloc(sizeof(node));
		start=pp;
		for (i=0;i<size;i++)
		{
			p=(node*)malloc(sizeof(node));
			cin>>pp->data;
			pp->next=p;
			pp=pp->next;	
		}
		pp->next=NULL;
		exit=1;
		while(exit)
		{
			cout<<"Enter according to following option";				//choices for the operations
			cout<<"1. for insertion";
			cout<<"2. for deletion";
			cout<<"3. for traversal";
			cin>>option;
			switch(option)
			{
				case 1 : 												//for insertion
						cout<<"At what position you want to insert?"<<endl<<"11. for insertion at start"<<endl<<"12. for insertion at last node"<<"13. for before the given node"<<endl<<"14. for after the given node";
						cin>>inopt;
						node *new_node;
						new_node=(node*)malloc(sizeof(node));
						switch(inopt)
						{
							case 11 :new_node->next=start;
									start=new_node;
									cin>>new_node->data;					
									break;
							case 12 :temp=start;
									while(temp->next!=NULL)
									{
										temp=temp->next;
									}
									temp->next=new_node;
									cin>>new_node->data;
									new_node->next=NULL;
									break;
							case 13 :
									cout<<"enter the data of node before which you want to insert a new node";
									cin>>val;
									ptr=start;
									while(ptr->data!=val)
									{
										pptr=ptr;
										ptr=ptr->next;
									}
									pptr->next=new_node;
									new_node->next=ptr;
									cin>>new_node->data;
									break;
							case 14 :
									cout<<"enter the data of node after which you want to insert a new node";
									cin>>val;
									ptr=start;
									pptr=start;
									while(pptr->data!=val)
									{
										pptr=ptr;
										ptr=ptr->next;
									}
									pptr->next=new_node;
									new_node->next=ptr;
									cin>>new_node->data;
									break;
							default : cout<<"wrong choice!!";
									break;									
						}
				case 2 : 													//for deletion
						cout<<"At what position you want to delete?"<<endl<<"21. for deletion at start"<<endl<<"22. for deletion at last node"<<endl<<"23. for before the given node"<<endl<<"24. for after the given node";
						cin>>inopt,val;
						
						switch(inopt)
						{
							case 21: start=start->next;
									break;
							case 22: ptr=pptr=start;
									while(ptr->next!=NULL)
									{
										pptr=ptr;
										ptr=ptr->next;	
									}
									pptr->next=NULL;
									break;
							case 23: cout<<"enter the value before you want to delete the node";
									cin>>val;
									ptr=pptr=nptr;
									while(nptr->data!=val)
									{
										pptr=ptr;
										ptr=nptr;
										nptr=nptr->next;
									}
									pptr->next=nptr;
									break;
							case 24: cout<<"enter the value after you want to delete the node";
									cin>>val;
									ptr=pptr=nptr;
									while(pptr->data!=val)
									{
										pptr=ptr;
										ptr=nptr;
										nptr=nptr->next;
									}
									pptr->next=nptr;
									break;
							default: cout<<"wronng choice!!";
							
																		
						}
				case 3: cout<<"Entered linked list is : ";						// for traversal
						temp=start;
						while(temp->next!=NULL)
						{	
							cout<<temp->data<<" ";
							temp=temp->next;
						}
						break;
				default : cout<<"wrong choice";
							exit=0;
							break;		
						
			}
		}
		
  }
