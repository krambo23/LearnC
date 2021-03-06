//pg 95, 96

double getAverage(int arr[], int size)
{
	int i;
	double avg;
	double sum;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	avg = sum / size;

	return avg;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* an int array with 5 elements */
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;

	/* pass pointer to the array as an argument */
	avg = getAverage(balance, 5);

	/* output the returned value */
	printf("Average Value is %f \n", avg);

	return 0;
}