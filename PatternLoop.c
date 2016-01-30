/*Program for printing*******************         
              *
	     * *
            * * *
           * * * * 
	  * * * * *
***************************************/
//Example line 4
/*print n-i times " " and i times * where i is no of line


    *
   **
  ***
 ****                                 */
/*************************************/

#include<stdio.h>
void main()
{
	int no,i,j;
	printf("Enter no of line");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
			if(j<=(no-i))
				printf(" ");
			else
				printf(" *");
		}
	printf("\n");
	}
	
}
