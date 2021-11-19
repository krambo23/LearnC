//pg 56

#include <stdio.h>

int main()
{
	/* local variable definition */
	int a = 100;
	int b = 200;

	switch(a) 
	{
		case 100 :
			printf("This is part of the outer switch \n", a);

		switch(b)
		{
			case 200 :
				printf("This is part of the inner switch \n", a);
		}
	}
	printf("Exact Value of A is %d \n", a);
	printf("Exact Value of B is %d \n", b);

	return 0;
}