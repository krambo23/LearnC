#include <stdio.h>

main()
{
	int a = 21;
	int b = 10;
	int c;

	if (a == b) 
	{
		printf("Line 1 - A = B\n");
	}
	else
	{
		printf("Line 1 - A =/= B\n");
	}

	if (a < b) 
	{
		printf("Line 2 - A is less than B\n");
	}
	else
	{
		printf("Line 2 - A is not less than B\n");
	}

	if ( a > b )
	{
 		printf("Line 3 - A is greater than B\n" );
 	}
 	else
 	{
 		printf("Line 3 - A is not greater than B\n");
 	}

	/* Lets change value of a and b */
 	a = 5;
 	b = 20;
 	if ( a <= b )
 	{
 		printf("Line 4 - a is either less than or equal to b\n" );
 	}
 
 	if ( b >= a )
 	{
 	printf("Line 5 - b is either greater than or equal to b\n" );
 	}
}

//pg 31,32