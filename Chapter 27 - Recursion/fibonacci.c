// pg 165 , 166

#include <stdio.h>

int fibonacci (int i)
{
	if (i == 0)
	{
		return 0;
	}

	if (i == 1)
	{
		return 1;
	}

	return (fibonacci(i - 1) + fibonacci(i - 2));
}

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d\t", fibonacci(i));
	}
	printf("\n");

	return 0;
}