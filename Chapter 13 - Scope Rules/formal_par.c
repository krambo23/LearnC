//pg 86, 87

#include <stdio.h>

/* global variable declaration */
int a = 20;

int main()
{
	/* local variable declaration in main function */
	int a = 10;
	int b = 20;
	int c = 0;

	printf("Value of A in main() = %d\n", a);

	c = sum(a, b);
	printf ("value of C in main() = %d\n", c);

	return 0;
}

/* function to add two integers */
int sum(int a, int b)
{
	printf("Value of A in sum() = %d\n", a);
	printf("Value of B in sum() = %d\n", b);

	return a + b;
}