/*program for Fibonacci series*/
/*Fibonacci series means next no is sum of previous 2 no...ex.. 0,1,1,2*/
#include<stdio.h>
void main()
{
	int n1,n2,max_no,sum=0;
	printf("Enter the 1st and 2nd no of sequence");
	scanf("%d%d",&n1,&n2);
	printf("Entr the maximum no of series:");
	scanf("%d",&max_no);
	printf("fibonacci series is:");
	printf("%d %d",n1,n2);
	while((n1+n2)<max_no)
	{
		sum=n1+n2;
		printf("  %d",sum);
		n1=n2;
		n2=sum;
	}	
	printf("\n");
}
