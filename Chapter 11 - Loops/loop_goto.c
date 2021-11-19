//pg 73, 74

#include <stdio.h>

int main()
{
	/* local variable definition */ 
	int a = 10;

	/* do loop execution */
	LOOP:do
	{
		if (a == 15)
		{
			/* Skip the iteration */
			a++;
			goto LOOP;
		}
		printf("Value of A = %d \n", a);
		a++;
	} while (a < 20);

	return 0;
}