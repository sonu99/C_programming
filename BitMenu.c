/*Program for set, clear,test and reverse the bit of no*/
#include<stdio.h>
#include<stdlib.h>
void f1(int,int);      //function declearation for printing the bit of the number

void main()
{
	int data,bit=31,bit_l,bit_h,low,high,pos;
	char ch;
	printf(" *******************************************\n  MENU\n i--> INPUT\n t--> TESTBIT\n s--> SET BIT\n l--> CLEAR BIT\n c--> COMPLIMENT BIT\n r--> REVERSE BIT\n e--> EXIT\n **********************************************\n");
	while(1)
	{
		printf("Enter your choice:");
		scanf(" %c",&ch);
		if(ch=='i')
		{
			printf("Enter data:");
			scanf("%d",&data);
			printf("Enter bit position:");
			scanf("%d",&pos);
			printf("\n");
		}
		else if(ch=='t')
		{
			printf("%d\n",(data>>pos)&1);
		}
		else if(ch=='s')
		{ 
			f1(data,bit);
			data|=(1<<pos);
			printf("data after set %d position is %d\n",bit,data);
			f1(data,bit);
		}
		else if(ch=='l')
		{
		f1(data,bit);
		data&=~(1<<pos);
		printf("data after clear %d bit position is %d\n",bit,data);
		f1(data,bit);
		}
		else if(ch=='c')
		{
			data^=(1<<pos);
			printf("data after compliment %d bit position is %d\n",bit,data);
		}
		else if(ch=='r')
		{
			printf("before reversal data is %d\n",data);
			f1(data,bit);
			low=0;
			high=31;
			while(high>low)
			{
				bit_h=(data>>high)&1;
				bit_l=(data>>low)&1;
				if(bit_h!=bit_l)
				{
					data^=(1<<high);
					data^=(1<<low);
				}
				low++;
				high--;
			}
			printf("\ndata in reverse order:%d\n",data);
			f1(data,bit);
		}
		else 
		exit(0);
	}
}
/*******************************************************************************************************/
// function for printing the bit of number
/*******************************************************************************************************/ 
void f1(int data ,int bit)
{
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		bit--;
	}
	printf("\n");
}
