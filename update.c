//Program for brining the record in to link list from file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"myheader.h"
extern NODE *head;
void update_list(void)
{
	FILE *fp;
	NODE *nu,*temp,v;
	fp=fopen("datafile","r");              //open file in read mode for reading the content of file.
	if(fp==NULL)
	{
		printf("file not exist\n");
		return;
	}
	while(fread(&v,sizeof(NODE),1,fp))		
	{
		nu=malloc(sizeof(NODE));
		memcpy(nu,&v,sizeof(v));
		nu->link=0;				//Create link list for storing record 
		if(head==0)
			head=nu;
		else
			temp->link=nu;
		temp=nu;
	}
	fclose(fp);
	printf("*******************************list update************************\n");
}
