//pg 54,55

#include <stdio.h>

int main()
{
	/* local variable definition */
	char grade = 'A';

	switch (grade)
	{
		case 'A' : 
			printf("Excellent \n");
			break;
		case 'B' : 
		case 'C' : 
			printf("Well Done \n");
			break;
		case 'D' : 
			printf("You Passed \n");
			break;
		case 'F' : 
			printf("Better Try Again \n");
			break;
		default :
			printf("Invalid Grade \n");
	}

	printf("Your Grade is %c \n", grade);

	return 0;
}