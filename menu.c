#include"myheader.h"
#include<stdio.h>
#include<stdlib.h>
void save(void);
void update_list(void);
NODE *head=NULL;
int i=0;
main()
{
	char ch,op;
	update_list();
	while(1)
	{
		printf("*********************MENU*******************************\n");
		printf("a:add a record\n");
		printf("d:delete a record\n");
		printf("p:print record\n");
		printf("L:delete all record\n");
		printf("m:modify a record\n");
		printf("r:reverse the list:\n");
		printf("k:sort the list:\n");
		printf("e:exit\n");
		printf("**********************************************************\n");
		printf("enter your choice: ");
		scanf("%c",&ch);
		getchar();
		switch(ch)
		{
			case'a':add();break;
			case'd':delete();break;
			case's':save();break;
			case'p':print();break;
			case'L':delete_all();break;
			case'm':modify();break;
			case'r':reverses(head,NULL);break;
			case'k':sort();break;
			case'e':{
				 if(i==0)
				 {
				 printf("do you want to save the recored:::Y/N::::");
				 scanf("%c",&op);
				 getchar();
				 }
				 if(op==('Y'||'y'))
				 save();
				 exit(0);
				}
			default: printf("******************\n u have enter worng choice\n***************\n ");
		}
	}
}
