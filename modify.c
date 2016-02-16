//program for modifying the record in list
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"myheader.h"
extern NODE *head; 
void modify(void)
{
	int op,r,rl;
	char c,NAME[20];
	NODE * temp=head;
	printf("*************************\nWhat u want to modify:\n roll->0\n name->1\n****************************\n");
   loop:printf("enter your option");
	scanf("%d",&op);
	getchar();
	/****************************************************************************/
	switch(op)
	{
		/********************************************************************/
		case 0:
		{
			printf("enter roll no:");
			scanf("%d",&r);
			while(temp&&temp->roll!=r)
			{
				temp=temp->link;
			}
			if(temp==NULL)
			{
				printf("recored not found\n");
				return;
			}
			else 
			{
				printf("**************match found*****************\nrecord is ");
				printf("%d %s\n",temp->roll,temp->name);
				printf("Do you want to replace it?:Y/N");
				scanf(" %c",&c);
				getchar();
				if(c=='y')
				{
					printf("enter roll no");
					scanf("%d",&rl);
					temp->roll=rl;
					printf("do you also want to modify name:Y?N");
					scanf(" %c",&c);
					getchar();
					if(c=='y')
					{
						printf("Enter name:");
						gets(NAME);
						strcpy(temp->name,NAME);
					}
				}
				else
				break;
				}
			break;
		}
		/***********************************************************************/
		case 1:
		{
			printf("enter name:");
			gets(NAME);
			while(temp&&strcmp(temp->name,NAME)!=0)
			{
				temp=temp->link;
			}
			if(temp==0)
			{
				printf("record id not found\n");
				return;
			}
			else
			{
				printf("Do you want to replace::Y/N->");
				scanf("%c",&c);
				getchar();
				if(c=='y')
				{
					printf("enter name which u want to replce");
					gets(NAME);
					strcpy(temp->name,NAME);
				}
				break;
			}
			break;
		}
		case 2:
		{
			break;
		}
		default : printf("you have enter wrong choise:");
		{
			while(1)
			{
				printf("do you want to continue:::Y/N");
				scanf(" %c",&c);
				getchar();
				if(c=='y')
				goto loop;
				else if(c=='n')
				break;
				else
				printf("you have enter wrong choice");
			}
		}
	}


}
