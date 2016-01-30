//program for nibble swapping of character
/*Example:    11110000--->00001111       */

//*****************************************
#include<stdio.h>
void BitPrint(char,int);
void main()
{
	char data; 
	printf("enter data:");
	scanf("%c",&data);
	printf("Before nibble swapping:");
	BitPrint(data,8);
	data=(data<<4)|(data>>4);
        printf("after nibble swapping:");
	BitPrint(data,8);
	printf("data is %c\n",data);
}
void BitPrint(char data,int bit)
{
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);    //printing the bit value of data
		bit--;
	}
	printf("\n");
	
}
