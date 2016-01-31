//program for checking Endianness
#include<stdio.h>
void main()
{
	int v=1;
	char *ptr=&v;
	if((*ptr)==1)
		printf("Littile Endian\n");
	else 
		printf("Big Endian\n");

}
