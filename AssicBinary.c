// program for print ASIIC value & binary value of number upto 127
#include<stdio.h>
void main()
{
	int number,bit;
        printf("Deci 'Symbole'  Binary value\n");
	for(number=0;number<=127;number++)
	{
		printf("%3d   %3c   ",number,number);
		for(bit=sizeof(int)*8-1;bit>=0;bit--)
		{
			printf("%d",(number>>bit)&1);
		}
		printf("\n");
	}
}





/***********************************************************************************/
//Using goto 
/***********************************************************************************/
/*void main()
{
	int a=0,bit;
	printf("deci  'symbole'        binary value\n");
	loop1:
	printf("%d   %c",a,a);
	bit=sizeof(int)*8-1;
	printf(" ");
	loop2:
	printf("%d",(a>>bit)&1);
	bit--;
	if(bit>=0)
	goto loop2;
	a++;
	printf("\n");
	if(a<128)
	goto loop1;
}*/
