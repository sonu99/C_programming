####Toggle bit
#include <stdio.h>
#define TOGGLE_BIT(n,b) (n=n^(1<<b))
#define TEST_BIT(n,b) ((n>>b)&1)
print(int n, int b);

int main() {
    // Write C code here
    int n=0, b=0, i=0;
    b= 8*sizeof(n);
    printf("Hello world \n");
    printf("enter the number\n");
    scanf("%d",&n);
    print_bit(n,b);

    printf("\nSize of b=%d \n", b);
    for(i=0;i<b;i++)
    {
        TOGGLE_BIT(n,i);
    }
    print_bit(n,b);
    printf("\nAfter toggleing all the bit= %d\n", n);

    return 0;
}
print_bit(int n, int b)
{
    int j=0;
    for(j=b-1;j>=0;j--)
    {
        printf("%d",TEST_BIT(n,j));
    }
    
}
