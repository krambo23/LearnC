#include <stdio.h>
#include <float.h>

int main() 
{
	printf("Storage size for float : %d \n", sizeof(float));
	printf("Min Float Pos No Value : %E \n", FLT_MIN);
	printf("Max Float Pos No Value : %E \n", FLT_MAX);
	printf("Precision : %d \n", FLT_DIG);

	return 0;
}

//pg 13,14