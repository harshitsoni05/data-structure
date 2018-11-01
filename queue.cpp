using namespace std;
#include<iostream>
int main()
{
	int size,i,choice,front=-1,rear=-1,exit=1;
	cout<<"enter the size of queue";
	cin>>size;
	int q[size];
	cout<<" enter your choice ";		//choice for operation
	while(exit)
	{
	cout<<" 1. Check 2. Insertion 3.Deletion ";		//various operations
	cin>>choice;
	switch (choice)
	{
		case 1 :									
			if (front==rear==-1)
			{
				cout<<"Queue is empty";
			}
			if (rear==size-1)
			{
				cout<<"Queue is full";
			}
			cout<<" front is "<<front<<" rear is "<<rear;
	         break;
	    case 2 :
	    	if (rear==size-1)
	    	{
	    		cout<<"The queue is already full";
			}
			else
			{
			cin>>q[rear];
			rear++;}
			break;
		case 3 :
			if (rear==-1)
			{
				cout<<"The queue is already empty";
			}
			else
			{
				for(i=0;i<=rear;i++)
				{
					q[i]=q[i+1];
				}
				rear=rear-1;
			}
			break;
		default : 
		cout<<" sorry wrong choice ";
		exit=0;
		break;
	}
}
}

