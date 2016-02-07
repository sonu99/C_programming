//Macro for Bit Operation

#define		SETBIT(n,b)	(n|=(1<<(b)))		        //Set a bit of a byte
#define		MUL(n1,n2)	((n1)*(n2))		   	//Multiply 2 numbers
#define		RESETBIT(n,b)	(n&=~(1<<(b)))		   	//Reset a bit of a byte
#define		TOGGLEBIT(n,b)	(n^=(1<<(b)))			//Toggle a bit of a byte
#define		TESTBIT(n,b)	(((n)>>(b))&1)			//Test a bit of a byte
#define		MAX(n1,n2)	((n1)>(n2)?(n1):(n2))		//Find out maximum of two numbers
#define		ABS_NO(n)	((n)>0?(n):-(n))		//Find out absolute value of a number
#define		STRCMP(s1,s2)	(strcmp(s1,s2)?printf("NOT EQU\n"):printf("EQU\n"))	//Check if two given strings are equal using strcmp()
