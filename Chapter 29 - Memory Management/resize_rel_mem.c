// pg 172 , 173

#include <stdio.h>
#include <stdlib.h>
#include <string.H>

int main()
{
	char name[100];
	char *description;

	strcpy(name, "Zara Ali");

	// allocate memory dynamically
	description = malloc(30 * sizeof(char));

	if (description == NULL)
	{
		fprintf(stderr, "Error unable to allocate required memory properly\n");
	}
	else
	{
		strcpy(description, "Zara ali a DPS student.");
	}


	// suppose you want to store bigger description
	description = malloc(100 * sizeof(char));

	if (description == NULL)
	{
		fprintf(stderr, "Error unable to allocate required memory properly\n");
	}
	else
	{
		strcat(description, "She is in class 10th");
	}

	printf("Name = %s\n", name);
	printf("Description : %s\n", description);


	// release memory using free() function
	free(description);

	return 0;
}