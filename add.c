#include"myheader.h"
#include<stdio.h>
#include<stdlib.h>
extern NODE *head;
void add(void)
{
	NODE *temp,*nu;					//NODE->STRUCT POINTER 	which is define in myheader.h...*nu->new node which is going to 
	nu=malloc(sizeof(NODE));			//connect to 
	printf("enter roll: ");
	scanf("%d",&(nu->roll));
	printf("enter name: ");
	scanf("%s",(nu->name));
	if(head==NULL)					//if nu is adding First time----that means ..no node is connected to head 
	{
		head=nu;				//make nu as head
		nu->link=NULL;
	}  
	else if((head->roll)>(nu->roll))		//if you are adding node in ascending order and nu become first node to add
	{
		nu->link=head;				
		head=nu;
	}
		else					//if you are adding not which is not first node then traverse from head then add node
		{
			temp=head;
			while((temp->link)&&((temp->link->roll)<(nu->roll)))//after loop execution temp will point to last node of list
			{
				temp=temp->link;                  
			}
			nu->link=temp->link;			  //add node at last
			temp->link=nu;
		}
}                                   
