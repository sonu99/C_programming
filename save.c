//Program for saving the recored in to file
#include<stdio.h>
#include"myheader.h"
#include<stdlib.h>
extern int i;
extern NODE *head;
void save(void)
{
	NODE * temp=head;
	FILE *fp;
	fp=fopen("datafile","w");   			//open the file for saving the recored 
	while(temp)
	{
		fwrite(temp,sizeof(NODE),1,fp);			//write node by node or recored by recored
		temp=temp->link;				//modify temp for pointing next node of list
	}
	fclose(fp);
	printf("******************list saved************************\n");
	i++;						//variable for traking the save function(save function is executed or not) 
}
