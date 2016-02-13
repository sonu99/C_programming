#include<stdio.h>
#include<stdlib.h>
#include"myheader.h"
extern NODE *head;
void delete(void)
{
	NODE *temp,*p;
	int r;
	if(head==0)
	{
		printf("list is empty:");
		return;
	}
	printf("enter roll no:");
	scanf("%d",&r);
	getchar();
	if(head->roll==r)
	{
		temp=head;
		head=head->link;      //head=head->link;//bug here due to head free even if you free the head using temp.it will cause dynling 
		free(temp);  
		temp=NULL;            //pointer so better to put NULL in to temp.
		return;
	}
	temp=head;
	while((temp->link)&&(temp->link->roll!=r)) //for serching the the r value in list and temp will point 1 node before the serched node.
	temp=temp->link;			   
	if(temp->link==0)			   //check that node is last node or not
	{
		printf("recored not found:");
		return;
	}
	else
	{
		p=temp->link;			   //put the address of that node in to p now p is pointing to that node which we want to free.
		temp->link=temp->link->link;       //example of wild pointer problem and memory leak
		free(p);                           //bug due free temp & temp->link thats why i use here p onther pointer
		return;
	}
}

