#include<stdio.h>
#define		TOGGLEBIT(n,b)	(n^=(1<<(b)))
#define		TESTBIT(n,b)	(((n)>>(b))&1)	
void PrintBit(int,int );
void main()
{
	int n,j,b;
	printf("Enter the no:");
	scanf("%d",&n);
	getchar();
	printf("Number before toggle\n");
	b=sizeof(n)*8;
        PrintBit(n,b);
	for(j=0;j<b;j++)
		TOGGLEBIT(n,j);
	printf("Number after toggle\n");
	PrintBit(n,b);
}
void PrintBit(int n,int b)
{
	int i;
	for(i=0;i<b;i++)
		printf("%d",TESTBIT(n,i));
	printf("\n");

}
