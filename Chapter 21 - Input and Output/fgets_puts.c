// Can Take Inputs Containing Spaces
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[100];

	printf("Enter a Value : ");
	fgets(str, 100, stdin); // Also Takes \n from Enter Key

	printf("\nYou entered : ");
	puts(str);

	return 0;
}
