//pg 52

#include <stdio.h>

int main()
{
	/* local variable definition */
	int a = 100;
	int b = 200;

	/* check the boolean condition */
	if (a == 100) 
	{
		/* if condition is true then check the following */
		if (b == 200) 
		{
			/* if condition is true then print the following */
			printf("Value of A is 100 and B is 200 \n");
		}
	}

	printf("Exact Value of A is %d \n", a);
	printf("Exact Value of B is %d \n", b);

	return 0;
}