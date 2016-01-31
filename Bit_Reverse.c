#include<stdio.h>
void f1(int ,int);
void main()
{
	int data,bit,low,high,bit_h,bit_l;
	printf("Enter the number:");
	scanf("%d",&data);
	printf("before reversal data is %d\n",data);
        bit=sizeof(int)*8-1;
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
        printf("data in reverse order:%d\n",data);
        f1(data,bit);
}
void f1(int data ,int bit)
{
        while(bit>=0)
        {
                printf("%d",(data>>bit)&1);
                bit--;
        }
        printf("\n");
}

