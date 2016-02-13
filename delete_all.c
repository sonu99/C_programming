//Program for deleting all node---()
#include"myheader.h"
#include<stdio.h>
extern NODE *head;
void delete_all(void)
{
NODE *temp;
temp=head;
while(temp)			//select node and free the memory
{
head=temp->link;
free(temp);
temp=head;
}
printf("********************all record is deleted************************\n");
}
