//Program for reversing the link list 
#include<stdio.h>
#include"myheader.h"
extern NODE * head;
NODE *b=NULL;
void reverses(NODE *p,NODE*b)
{
	if(p)				//b pointer will follow the p->link...means it will point 1 node back
	{
		reverses(p->link,p);	//recution used for traversing to last node 	
		p->link=b;		//
	}
	else 
	{
		head=b;			//for making last node as head
	}
}
