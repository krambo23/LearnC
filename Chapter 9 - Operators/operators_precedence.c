//pg 43

#include <stdio.h>

main() 
{
	int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

	e = (a + b) * c / d; // ( 30 * 15 ) / 5 
	printf("Valueof(a+b)*c/dis:%d\n", e);

	e=((a+b)*c)/d; //(30*15)/5 
	printf("Valueof((a+b)*c)/dis :%d\n", e);

	e=(a+b)*(c/d); //(30)*(15/5) 
	printf("Valueof(a+b)*(c/d)is :%d\n", e);

	e=a+(b*c)/d; // 20+(150/5) 
	printf("Valueofa+(b*c)/dis :%d\n", e);
	return 0;
}