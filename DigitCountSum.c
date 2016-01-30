/*program for calculating sum of digit,number of digit and reverse the number*/
#include<stdio.h>
void main()
{
	int c,no,sum=0,digit,count=0,reverse=0;
	printf("Enter number:");
	scanf("%d",&no);
	c=no;
	while(c>0)
	{
		digit=c%10;
		c=c/10;
		sum=sum+digit;
		count++;
		reverse=reverse*10+digit;
	}
	printf("sum of digit=%d\nNumber of digit=%d\nNumber after reverse=%d\n",sum,count,reverse);

}
