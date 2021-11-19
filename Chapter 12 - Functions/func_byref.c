//pg 81, 82

#include <stdio.h>

/* Function Declaratrion */
void swap(int *x, int *y);

int main()
{
	/* Local Variable Declaration */
	int a = 100;
	int b = 200;

	printf("Value A before swap = %d\n", a);
	printf("Value B before swap = %d\n", b);

	/* calling a function to swap the values.
	* &a indicates pointer to a i.e. address 
	* &b indicates pointer to b i.e. address */

	swap(&a, &b);

	printf("Value A after swap = %d\n", a);
	printf("Value B after swap = %d\n", b);

	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x; /* save the value at address x */ 
	*x = *y; /* put y into x */
	*y = temp; /* put temp into y */
	return;
}