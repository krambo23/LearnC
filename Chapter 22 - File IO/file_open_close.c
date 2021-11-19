// pg 144 , 145

#include <stdio.h>

main()
{
	FILE *fp;
	fp = fopen("test.txt", "w+");
	fprintf(fp, "This is testing for printf....\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
}