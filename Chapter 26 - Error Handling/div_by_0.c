// pg 161 , 162

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dividend = 20;
	int divisor = 2;
	int quotient;

	if (divisor == 0)
	{
		fprintf(stderr, "Division by 0! Exiting...\n");
		exit(-1);
	}

	quotient = dividend / divisor;
	fprintf(stderr, "Value of quotient = %d\n", quotient);

	exit(0);

	return 0;
}