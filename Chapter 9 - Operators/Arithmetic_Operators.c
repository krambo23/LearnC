#include <stdio.h>

main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("Line 1 - Value of C is %d \n", c);

	c = a - b;
	printf("Line 1 - Value of C is %d \n", c);

	c = a * b;
	printf("Line 1 - Value of C is %d \n", c);

	c = a / b;
	printf("Line 1 - Value of C is %d \n", c);

	c = a % b;
	printf("Line 1 - Value of C is %d \n", c);

	c = a++;
	printf("Line 1 - Value of C is %d \n", c);

	c = a--;
	printf("Line 1 - Value of C is %d \n", c);

}

//pg29