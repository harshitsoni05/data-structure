using namespace std;
#include<iostream>
int main()
{
	int size,ch,start,end=-1,exit=1,i;
	cout<<"Size of stack 1 : ";
	cin>>size;
	
	int stack[size];
	while (exit)
	{
	cout<<"Enter \n 1 for insertion \n 2 for deletion \n 3 for traversal \n any other key to exit";		//various operations
	cin>>ch;
	switch(ch)
	{
		case 1 : if (end==size) 
		{
			cout<<"Stack is already full";
		}
		else
		{
		end++;
		cin>>stack[end];
	    }
		break;
		case 2 : if (end==-1)
		{
			cout<<"Stack is already empty";
		}
		end--;
		break;
		case 3 : if (end==size)
		{
			cout<<"Stack is full";
		}
		if (end==-1)
		{
			cout<<"Stack is empty";
		}
		cout<<"Elements in the stacks are as follows : ";
		for(i=0;i<end;i++)
		{
			cout<<stack[i]<<" ";
		}
		cout<<"end is at "<<end;
		break;
		default : cout<<"sorry wrong choice";
		exit=0;
		break;
		}
	}
}
