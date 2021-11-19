//pg 35,36

#include <stdio.h>

main()
{
	unsigned int a = 60;	/* 60 = 0011 1100 */
	unsigned int b = 13;	/* 13 = 0000 1101 */
	int c = 0;

	c = a & b;
	printf("Line 1 - Value of C = %d \n", c);

	c = a | b;
	printf("Line 2 - Value of C = %d \n", c);

	c = a ^ b;
	printf("Line 3 - Value of C = %d \n", c);

	c = ~a;
	printf("Line 4 - Value of C = %d \n", c);

	c = a << 2;
	printf("Line 5 - Value of C = %d \n", c);

	c = a >> 2;
	printf("Line 6 - Value of C = %d \n", c);

}