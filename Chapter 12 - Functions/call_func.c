#include <stdio.h>

/* Function Declaration */
int max(int num1, int num2);

int main()
{
	/* Local Variable Definition */
	int a = 100;
	int b = 200;
	int ret;

	/* calling a function to get max value */
	ret = max(a, b);

	printf("Max Value is : %d \n", ret);
	
	return 0;
}

/* function returning the max between two numbers */
int max(int num1, int num2)
{
	/* local variable declaration */
	int result;

	if (num1 > num2) 
	{
		result = num1;
	}
	else
	{
		result = num2;
	}

	return result;
}