using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
	int size;
	cout<<"enter the size of the array ";
	cin>>size;
	int a[size],i,j;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<"the sorted array is ";
	for(i=0;i<size;i++)
	{
		cout<<endl<<a[i];	
	}	
}
int swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
