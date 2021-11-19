//pg 99,100

#include <stdio.h>

int main()
{
	/* an array w/ 5 elements */
	double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	double *p;
	int i;

	p = balance;

	/* output each array element's value */
	printf("Array Values Using Pointer\n");

	for (i = 0; i < 5; i++)
	{
		printf("*(p + %d) : %f\n", i, *(p + i));
	}

	printf("Array values using balance as address\n");

	for (i = 0; i < 5; i++)
	{
		printf("*(balance + %d) : %f\n", i, *(balance + i) );
	}
	return 0;
}