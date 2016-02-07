//Set the bit between given position
#include<stdio.h>
#define		SETBIT(n,b)	(n|=(1<<(b)))
#define		RESETBIT(n,b)	(n&=~(1<<(b)))	
#define		TESTBIT(n,b)	(((n)>>(b))&1)
void PrintBit(int n,int b);	
void main()
{
	int p,q,n=10,bit,i;
	printf("Enter the position P&Q:");
	scanf("%d%d",&p,&q);
	getchar();
	bit=sizeof(n)*8;
	for(i=0;i<bit;i++)
	{	
		if((p<=i)&&(i<=q))
			SETBIT(n,i);
		else
			RESETBIT(n,i);
	}
	printf("Bit repersentaion: ");
	PrintBit(n,bit);		
}

void PrintBit(int n,int b)
{
	int i;
	for(i=b-1;i>=0;i--)
		printf("%d",TESTBIT(n,i));
	printf("\n");

}
