#include"myheader.h"
#include<stdio.h>
extern NODE *head;
void print(void)
{
NODE *temp=head;
printf("-----------------------------------------\n");
while(temp)
{
printf("%d %s\n",temp->roll,temp->name);
temp=temp->link;
}
printf("------------------------------------------\n");
}
