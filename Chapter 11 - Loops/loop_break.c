//pg69, 70

#include <stdio.h>

int main()
{
	/* Local Variable Definition */
	int a = 10;

	/* While Loop Execution */
	while (a < 20) 
	{
		printf("value of A: %d \n", a);
		a++;

		if (a > 15) 
		{
			/* terminate the loop using break statement */
			break;
		}
	}

	return 0;
}