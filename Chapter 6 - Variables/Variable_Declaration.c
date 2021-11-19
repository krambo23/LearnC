#include <stdio.h>

// Variable declaration
extern int a, b;
extern int c;
extern float f;

int main()
{
	/* Variable Definition */
	int a, b;
	int c;
	float f;


	/* Actual Initialization */
	a = 10;
	b = 20;

	c = a + b;
	printf("Value of C = %d \n", c);

	f = 70.0 / 3.0;
	printf("Value of F = %f \n", f);

	return 0;
}

//pg 17