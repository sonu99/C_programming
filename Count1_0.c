//Program for counting 1's aand 0's in 32 bit variable
#include<stdio.h>
#include<string.h>
void main()
{
	int variable,bit=32,Count_1=0,Count_0=0;
	printf("Enter the value of variable:\n");
	scanf("%d",&variable);
	while(bit>0)
	{
		if(((variable>>bit)&1))
		{
			Count_1++;
		}
		else
			Count_0++;
		bit--;	
	}
	printf("No of 1's:%d and No of 0's:%d\n",Count_1,Count_0);
}
