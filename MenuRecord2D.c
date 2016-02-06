//Simple Menu_record program using fixed array size(add,sort,) 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
const int max=10;
void add(char(*a)[20]);
void print(char(*a)[20]);
void delete(char(*a)[20]);
void sort(char(*a)[20]);
void find(char(*a)[20]);
void replace(char(*a)[20]);
void main()
{
	char a[10][20],ch;
	while(1)
	{
		printf("***********************MENU************************\n");
		printf("A------------> Add a name:\n");
		printf("D------------> Delete a name:\n");
		printf("P------------> Print all name:\n");
		printf("S------------> Sort name:\n");
		printf("F------------> Find a name:\n");
		printf("R------------> Replace a name:\n");
		printf("E------------> !!!!!!Exit!!!!!\n");
		printf("Enter your choice:");
		ch=getchar();
		getchar();
		/********************************SWITCH CASE***************************/
		switch(ch)
			{
				case 'A':
				case 'a':
					{
					add(a);
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
					sort(a);
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
void add(char(*a)[20])
{
	if(cnt<max)
	{
		printf("enter a name:");
		gets(a[cnt]);
		cnt++;
	}
	else
		printf("\n\n!!!!!!!!Error::Memory full\n\n");
}
/********************************Print**************************************/
void print(char (*a)[20])
{
	int i;
	for(i=0;i<cnt;i++)
	{
		printf("%d--->%s\n",i+1,a[i]);
	}
}
/*****************************FIND*********************************/
void find(char(*a)[20])
{
	int i;
	char str[20];
	printf("Enter name which you want to search:");
	gets(str);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(a[i],str)==0)
			printf("match found at %d\n",i+1);
			//printf("!!!!Sorry::match not found");
	}
}
/*************************************SHORT*************************/
void sort(char (*a)[20])
{
	int i,j,k;
	char * temp[20];
	for(i=1;i<cnt;i++)
	{
		for(j=0;j<cnt-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
		
			}
		}
	}
}
/*****************************REPLACE*********************************/
void replace(char  (*a)[20])
{
	int pos;
	char str[20];
	printf("enter name which u want to place in record:");
	gets(str);
	printf("enter a position:");
	scanf("%d",&pos);
	getchar();
	pos--;
	strcpy(a[pos],str);
}
/****************************DELETE***************************************/
void delete(char (*a)[20])
{
	int i, pos;
	printf("enter pos which u want to delete:");
	scanf("%d",&pos);
	getchar();
	for(i=pos;i<cnt;i++)
	{
		memmove(a[i-1],a[i],strlen(a[i])+1);
	}
	cnt--;
}

