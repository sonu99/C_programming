// Program for testing whether number is prime or not
/*Prime number --> number is only divisible by itself or 1  */
#include<stdio.h>
#include<math.h>
void main()
{
	int data,count=0,i,l;
	printf("enter no");
	scanf("%d",&data);
	l=(int)sqrt(data);
	printf("%d\n",l);
	for(i=2;i<=l;i++)
	{
		if(data%i==0)
		{
			printf("%d\n",i);
			count++;
		}
	}
	if(count==0)
	printf(" is  prime");
	else 
	printf(" is not prime");
}
