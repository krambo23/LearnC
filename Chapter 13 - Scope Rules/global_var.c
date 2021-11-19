//pg 85

#include <stdio.h>

/* global variable declaration */
int g;

int main()
{
	/* local variable declaration */
	int a,b;

	/* actual initialization */
	a = 10;
	b = 20;
	g = a + b;

	printf("A = %d, B = %d, C = %d\n", a, b, g);
	
	return 0;
}