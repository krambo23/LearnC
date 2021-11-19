#include <stdio.h>

main()
{
	int a = 5;
	int b = 20;
	int c;

	if (a && b)
	{
		printf("Line 1 - Condition is True\n");
	}

	if (a || b) 
	{
		printf("Line 2 - Condition is True\n");
	}

	/* Lets change the value of a and b */
	a = 0;
	b = 10;

	if (a && b) 
	{
		printf("Line 3 - Condition is True\n");
	}
	else
	{
		printf("Line 3 - Condition is NOT True\n");
	}

	if (!(a && b))
	{
		printf("Line 4 - Condition is True\n");
	}

	return 0;
}

//pg 33, 34