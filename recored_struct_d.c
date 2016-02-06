#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student *add(struct student *);
void print(struct student *);
void find(struct student *);
void shorts(struct student *);
void replace(struct student *);
void delete(struct student *);
static int cnt=1;
struct student
{
	char name[20];
	int  roll;
};
/*******************************MAIN***************************************/
void main()
{
	char ch;
	struct student *a=NULL;
	while(1)
	{
		printf("***********************MENU************************\n");
		printf("A------------> Add a name:\n");
		printf("D------------> Delete a name:\n");
		printf("P------------> Print all name:\n");
		printf("S------------> Short name:\n");
		printf("F------------> Find a name:\n");
		printf("R------------> Replace a name:\n");
		printf("E------------> !!!!!!Exit!!!!!\n");
		printf("Enter your choice:");
		ch=getchar();
		getchar();
		/*********************SWITCH CASE***************************/
		switch(ch)
		{
			case 'A':
			case 'a':
				{
					a=add(a);
					break;
				}
			case 'D':
			case 'd':
				{
					delete(a);
					break;
				}
			case 'P':
			case 'p':
				{
					print(a);
					break;
				}
			case 'S':
			case 's':
				{
					shorts(a);
					break;
				}
			case 'F':
			case 'f':
				{
					find(a);
					break;
				}
			case 'R':
			case 'r':
				{
					replace(a);
					break;
				}
			case 'E':
			case 'e':
				{
					exit(0);
				}
			default:
				{
			printf("\n\n!!!!!Error:--> Enter valid choice:\n\n");
				}
		}
	}
}
/**************************FUNCTION DEFINATION******************************/
/**********************************ADD***************************************/
struct student * add(struct student *a)
{               
	a=(struct student *)realloc(a,cnt*sizeof(struct student));
	printf("enter a name:");
	gets((&a[cnt-1])->name);
        printf("enter roll no:");
        scanf("%d",&((a+cnt-1)->roll));
	getchar();
	cnt++;
	return a;
}
/*****************************PRINT**********************************/
void print(struct student *a)
{
	int i;
	for(i=0;i<cnt-1;i++)
	{
		printf("%d--->%d------>%s\n",i+1,(a+i)->roll,(a+i)->name);
	}
}
/*****************************FIND*********************************/
void find(struct student *a)
{
	int i,flag=0;
	char str[20];
	printf("Enter name which you want to search:");
	gets(str);
	for(i=0;i<cnt;i++)
	{
		if(strcmp((a+i)->name,str)==0)
		{
			printf("match found at %d\n",i+1);
			flag++;
		}
	}
	if(flag==0)
		printf("Data not found\n");
}
/******************************SHORT*************************/
void shorts(struct student *a)
{
	int i,j,k;
	struct student *temp=(struct student *)malloc(sizeof(struct student));
	for(i=1;i<cnt-1;i++)
	{
		for(j=0;j<(cnt-i-1);j++)
		{
		            if(strcmp((a+j)->name,(a+j+1)->name)>0)
			{
				memmove(temp,(a+j),sizeof(struct student));
				memmove((a+j),(a+j+1),sizeof(struct student));
				memmove((a+j+1),temp,sizeof(struct student));
			}
		}
	}
}
/*****************************REPLACE*********************************/
void replace(struct student *a)
{
	int pos;
	char str[20];
	printf("enter name which u want to place in record:");
	gets(str);
	printf("enter a position:");
	scanf("%d",&pos);
	getchar();
	pos--;
	strcpy((a+pos)->name,str);
}
/****************************DELETE***************************************/
void delete(struct student *a)
{
	int i, pos;
	printf("enter pos which u want to delete:");
	scanf("%d",&pos);
	getchar();
	for(i=pos;i<cnt-1;i++)
	{
		memmove((a+i-1),(a+i),sizeof(struct student));
	}
	cnt--;
}

