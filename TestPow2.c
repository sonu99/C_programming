//Test no is power of 2
#include<stdio.h>
#define		TESTBIT(n,b)	(((n)>>(b))&1)		

void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	getchar();
	if(TESTBIT(n,1))
		printf("No is not power of 2\n");
	else 
		printf("NO is power of 2\n");

}
