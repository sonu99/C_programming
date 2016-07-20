//program for sorting the record in list.
#include<stdio.h>
#include<string.h>
#include"myheader.h"
extern head;
void sort(void)
{
	int op,i=0,j=0;
	char NAME[20];
	if(head==0)
	{
		printf("no record is found");return;
	}
	NODE *temp=head;
	printf("name wise sorting->0\npercentage wise sorting->1\n");
	printf("enter your option");
	scanf("%d",&op);
	while(temp)				//traverse the list and pointer will point to last node
	{
		i++;				//count the no of node in the list
		temp=temp->link;
	}
	if(op==0)
	{
		j=i;
		while(j--)			//loop will execute node number of time
		{
			temp=head;		//every time start from 1st node 
			while(temp->link&&i--)	//for each value of j execute j-1 times.
			{
				if(strcmp(temp->name,temp->link->name)==1)
				{
					strcpy(NAME,temp->link->name);
					strcpy(temp->link->name,temp->name);
					strcpy(temp->name,NAME);
				}
				temp=temp->link;
			}
			i=j;
		}
	}
}
