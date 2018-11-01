#include<stdio.h>
#include<stdlib.h>
struct root
{
	int data;
	struct root *left;
	struct root *right;
	int depth;
};

int main()
{
	int ch,exit=1,temp,skip=1;
	struct root *ptr,*start;
	printf("1. For insertion \n2. For deletion \n3. For printing the inorder & preorder \n4. For exiting");
	scanf("%d",&ch);
	ptr=(struct root*)malloc(sizeof(struct root));
	ptr->depth=0;
	while(exit)
	{
		switch(ch)
		{
			case 1 : if(ptr->depth==0)
			{
				scanf("%d",&ptr->data);
				ptr->depth++; 
			} 
			else
			scanf("%d",&temp);
			{
				while(skip)
				{
					if(temp<ptr->data)
					{
						if(ptr->left==NULL)
						{
							skip=0;
						}
						else
						{
							ptr=ptr->left;
						}
					}
					
					if(temp>=ptr->data)
					{
						if(ptr->right==NULL)
						skip=0;
						else
						ptr=ptr->right;
					}
				}
				if(temp<ptr->data)
				{
					ptr->left=(struct root*)malloc(sizeof(struct root));
					ptr=ptr->left;
					scanf("%",&ptr->data);
				}
				if(temp>=ptr->data)
				{
					ptr->right=(struct root*)malloc(sizeof(struct root));
					ptr=ptr->right;
					scanf("%",&ptr->data);
				}
			break;
			default : exit=0;
			break;
			} 
		}	
	}
}
