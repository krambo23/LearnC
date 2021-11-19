//pg 114 , 115

#include <stdio.h>
#include <time.h>

/* function to generate and retrun random numbers. */
int *getRandom()
{
	static int r[10];
	int i;

	/* set the seed */
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; ++i)
	{
		/* code */
		r[i] = rand();
		printf("%d\n", r[i]);
	}

	return r;
}

/* main function to call above defined function */
int main(int argc, char const *argv[])
{
	/* a pointer to an int */
	int *p;
	int i;

	p = getRandom();
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		printf("*(p + [%d]) : %d\n", i, *(p + i));
	}
	
	return 0;
}