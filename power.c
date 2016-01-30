/*program for calculating a^b using goto */
#include<stdio.h>
void main()
{
	int a,b,temp,result=1;
	printf("enter value of a(base):");
	scanf("%d",&a);
	printf("enter value of b(power):");
	scanf("%d",&b);
	temp=b;
	loop:
	result=a*result;
	temp--;
	if(temp>0)
	goto loop;
	printf("b power of a--->a^b:%d\n",result);
}
